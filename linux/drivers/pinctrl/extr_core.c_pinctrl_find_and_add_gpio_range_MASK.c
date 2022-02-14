
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dummy; } ;


 int VAR_0 ;
 struct pinctrl_dev* FUNC_0 (int ) ;
 struct pinctrl_dev* FUNC_1 (char const*) ;
 int FUNC_2 (struct pinctrl_dev*,struct pinctrl_gpio_range*) ;

struct pinctrl_dev *FUNC_3(const char *VAR_1,
  struct pinctrl_gpio_range *VAR_2)
{
 struct pinctrl_dev *VAR_3;

 VAR_3 = FUNC_1(VAR_1);






 if (!VAR_3) {
  return FUNC_0(-VAR_0);
 }
 FUNC_2(VAR_3, VAR_2);

 return VAR_3;
}
