以下是一个C++程序，用于输入10个数并检测是否有四个相等的数连续：

```cpp
#include <iostream>
#include <vector>

bool hasFourConsecutiveEqual(const std::vector<int>& nums) {
    for (size_t i = 0; i < nums.size() - 3; ++i) {
        if (nums[i] == nums[i + 1] && nums[i + 1] == nums[i + 2] && nums[i + 2] == nums[i + 3]) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<int> nums(10);

    std::cout << "Enter ten numbers:" << std::endl;
    for (size_t i = 0; i < 10; ++i) {
        std::cin >> nums[i];
    }

    if (hasFourConsecutiveEqual(nums)) {
        std::cout << "There are four equal numbers in a row." << std::endl;
    } else {
        std::cout << "There are no four equal numbers in a row." << std::endl;
    }

    return 0;
}
```

这个程序首先定义了一个`hasFourConsecutiveEqual`函数，用于检测是否有四个相等的数连续。该函数使用一个循环来遍历输入的数字，并检查是否有四个相等的数字连续出现。如果有，则返回`true`；否则，返回`false`。

在`main`函数中，程序使用一个`std::vector<int>`来存储用户输入的10个数字。然后，它调用`hasFourConsecutiveEqual`函数来检测是否有四个相等的数连续出现。
