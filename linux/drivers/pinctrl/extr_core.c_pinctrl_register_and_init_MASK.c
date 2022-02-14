
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_dev {int dummy; } ;
struct pinctrl_desc {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct pinctrl_dev*) ;
 int FUNC_1 (struct pinctrl_dev*) ;
 struct pinctrl_dev* FUNC_2 (struct pinctrl_desc*,struct device*,void*) ;

int FUNC_3(struct pinctrl_desc *VAR_0,
         struct device *VAR_1, void *VAR_2,
         struct pinctrl_dev **VAR_3)
{
 struct pinctrl_dev *VAR_4;

 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);







 *VAR_3 = VAR_4;

 return 0;
}
