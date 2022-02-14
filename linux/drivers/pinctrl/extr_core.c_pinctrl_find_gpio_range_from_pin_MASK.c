
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct pinctrl_gpio_range* FUNC_2 (struct pinctrl_dev*,unsigned int) ;

struct pinctrl_gpio_range *
FUNC_3(struct pinctrl_dev *VAR_0,
     unsigned int VAR_1)
{
 struct pinctrl_gpio_range *VAR_2;

 FUNC_0(&VAR_0->mutex);
 VAR_2 = FUNC_2(VAR_0, VAR_1);
 FUNC_1(&VAR_0->mutex);

 return VAR_2;
}
