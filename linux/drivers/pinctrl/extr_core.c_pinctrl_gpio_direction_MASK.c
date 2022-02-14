
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int mutex; } ;


 int FUNC_0 (struct pinctrl_gpio_range*,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (unsigned int,struct pinctrl_dev**,struct pinctrl_gpio_range**) ;
 int FUNC_4 (struct pinctrl_dev*,struct pinctrl_gpio_range*,int,int) ;

__attribute__((used)) static int FUNC_5(unsigned VAR_0, bool VAR_1)
{
 struct pinctrl_dev *VAR_2;
 struct pinctrl_gpio_range *VAR_3;
 int VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(VAR_0, &VAR_2, &VAR_3);
 if (VAR_4) {
  return VAR_4;
 }

 FUNC_1(&VAR_2->mutex);


 VAR_5 = FUNC_0(VAR_3, VAR_0);
 VAR_4 = FUNC_4(VAR_2, VAR_3, VAR_5, VAR_1);

 FUNC_2(&VAR_2->mutex);

 return VAR_4;
}
