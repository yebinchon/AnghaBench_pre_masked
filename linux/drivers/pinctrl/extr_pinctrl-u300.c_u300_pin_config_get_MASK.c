
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_gpio_range {unsigned int pin_base; unsigned int base; int gc; } ;
struct pinctrl_dev {int dummy; } ;


 int VAR_0 ;
 struct pinctrl_gpio_range* FUNC_0 (struct pinctrl_dev*,unsigned int) ;
 int FUNC_1 (int ,unsigned int,unsigned long*) ;

__attribute__((used)) static int FUNC_2(struct pinctrl_dev *VAR_1, unsigned VAR_2,
          unsigned long *VAR_3)
{
 struct pinctrl_gpio_range *VAR_4 =
  FUNC_0(VAR_1, VAR_2);


 if (!VAR_4)
  return -VAR_0;

 return FUNC_1(VAR_4->gc,
        (VAR_2 - VAR_4->pin_base + VAR_4->base),
        VAR_3);
}
