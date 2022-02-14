
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int mutex; } ;


 int FUNC_0 (struct pinctrl_gpio_range*,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (unsigned int,struct pinctrl_dev**,struct pinctrl_gpio_range**) ;
 int FUNC_4 (struct pinctrl_dev*,int) ;

bool FUNC_5(unsigned VAR_0)
{
 struct pinctrl_dev *VAR_1;
 struct pinctrl_gpio_range *VAR_2;
 bool VAR_3;
 int VAR_4;






 if (FUNC_3(VAR_0, &VAR_1, &VAR_2))
  return 1;

 FUNC_1(&VAR_1->mutex);


 VAR_4 = FUNC_0(VAR_2, VAR_0);

 VAR_3 = FUNC_4(VAR_1, VAR_4);

 FUNC_2(&VAR_1->mutex);

 return VAR_3;
}
