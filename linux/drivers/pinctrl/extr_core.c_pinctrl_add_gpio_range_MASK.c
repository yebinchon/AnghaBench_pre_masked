
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_gpio_range {int node; } ;
struct pinctrl_dev {int mutex; int gpio_ranges; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct pinctrl_dev *VAR_0,
       struct pinctrl_gpio_range *VAR_1)
{
 FUNC_1(&VAR_0->mutex);
 FUNC_0(&VAR_1->node, &VAR_0->gpio_ranges);
 FUNC_2(&VAR_0->mutex);
}
