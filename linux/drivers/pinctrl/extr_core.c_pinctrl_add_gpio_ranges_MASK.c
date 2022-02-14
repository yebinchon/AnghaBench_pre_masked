
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dummy; } ;


 int FUNC_0 (struct pinctrl_dev*,struct pinctrl_gpio_range*) ;

void FUNC_1(struct pinctrl_dev *VAR_0,
        struct pinctrl_gpio_range *VAR_1,
        unsigned VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  FUNC_0(VAR_0, &VAR_1[VAR_3]);
}
