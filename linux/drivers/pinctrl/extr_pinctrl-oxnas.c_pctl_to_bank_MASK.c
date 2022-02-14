
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oxnas_pinctrl {struct oxnas_gpio_bank* gpio_banks; } ;
struct oxnas_gpio_bank {int dummy; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static inline struct oxnas_gpio_bank *FUNC_0(struct oxnas_pinctrl *VAR_1,
         unsigned int VAR_2)
{
 return &VAR_1->gpio_banks[VAR_2 / VAR_0];
}
