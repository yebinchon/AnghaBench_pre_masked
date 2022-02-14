
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_gpio_range {unsigned int pin_base; unsigned int base; } ;
struct pinctrl_dev {int dummy; } ;


 int VAR_0 ;
 struct pinctrl_gpio_range* FUNC_0 (struct pinctrl_dev*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct pinctrl_dev *VAR_1, unsigned VAR_2)
{
 struct pinctrl_gpio_range *VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_3)
  return -VAR_0;

 return VAR_2 - VAR_3->pin_base + VAR_3->base;
}
