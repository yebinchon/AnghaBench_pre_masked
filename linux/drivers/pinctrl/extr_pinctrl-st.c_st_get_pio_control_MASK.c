
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_pio_control {int dummy; } ;
struct st_gpio_bank {struct st_pio_control pc; } ;
struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dummy; } ;


 struct st_gpio_bank* FUNC_0 (struct pinctrl_gpio_range*) ;
 struct pinctrl_gpio_range* FUNC_1 (struct pinctrl_dev*,int) ;

__attribute__((used)) static struct st_pio_control *FUNC_2(
   struct pinctrl_dev *VAR_0, int VAR_1)
{
 struct pinctrl_gpio_range *VAR_2 =
    FUNC_1(VAR_0, VAR_1);
 struct st_gpio_bank *VAR_3 = FUNC_0(VAR_2);

 return &VAR_3->pc;
}
