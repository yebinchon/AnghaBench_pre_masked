
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pic32_pinctrl {struct pic32_gpio_bank* gpio_banks; } ;
struct pic32_gpio_bank {int dummy; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static inline struct pic32_gpio_bank *FUNC_0(struct pic32_pinctrl *VAR_1,
      unsigned VAR_2)
{
 return &VAR_1->gpio_banks[VAR_2 / VAR_0];
}
