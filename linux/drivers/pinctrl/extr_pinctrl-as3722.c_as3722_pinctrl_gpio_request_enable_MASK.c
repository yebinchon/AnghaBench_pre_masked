
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct as3722_pctrl_info {TYPE_1__* gpio_control; } ;
struct TYPE_2__ {scalar_t__ io_function; } ;


 int VAR_0 ;
 struct as3722_pctrl_info* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_1(struct pinctrl_dev *VAR_1,
  struct pinctrl_gpio_range *VAR_2, unsigned VAR_3)
{
 struct as3722_pctrl_info *VAR_4 = FUNC_0(VAR_1);

 if (VAR_4->gpio_control[VAR_3].io_function)
  return -VAR_0;
 return 0;
}
