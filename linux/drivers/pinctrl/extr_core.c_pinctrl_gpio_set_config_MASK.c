
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int mutex; } ;


 int FUNC_0 (unsigned long*) ;
 int FUNC_1 (struct pinctrl_gpio_range*,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pinctrl_dev*,int,unsigned long*,int ) ;
 int FUNC_5 (unsigned int,struct pinctrl_dev**,struct pinctrl_gpio_range**) ;

int FUNC_6(unsigned VAR_0, unsigned long VAR_1)
{
 unsigned long VAR_2[] = { VAR_1 };
 struct pinctrl_gpio_range *VAR_3;
 struct pinctrl_dev *VAR_4;
 int VAR_5, VAR_6;

 VAR_5 = FUNC_5(VAR_0, &VAR_4, &VAR_3);
 if (VAR_5)
  return VAR_5;

 FUNC_2(&VAR_4->mutex);
 VAR_6 = FUNC_1(VAR_3, VAR_0);
 VAR_5 = FUNC_4(VAR_4, VAR_6, VAR_2, FUNC_0(VAR_2));
 FUNC_3(&VAR_4->mutex);

 return VAR_5;
}
