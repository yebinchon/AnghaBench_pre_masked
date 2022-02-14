
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_dev {int dummy; } ;
struct pinctrl_desc {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct pinctrl_dev* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct pinctrl_dev*) ;
 int VAR_2 ;
 int FUNC_2 (struct device*,struct pinctrl_dev**) ;
 struct pinctrl_dev** FUNC_3 (int ,int,int ) ;
 int FUNC_4 (struct pinctrl_dev**) ;
 struct pinctrl_dev* FUNC_5 (struct pinctrl_desc*,struct device*,void*) ;

struct pinctrl_dev *FUNC_6(struct device *VAR_3,
       struct pinctrl_desc *VAR_4,
       void *VAR_5)
{
 struct pinctrl_dev **VAR_6, *VAR_7;

 VAR_6 = FUNC_3(VAR_2, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_7 = FUNC_5(VAR_4, VAR_3, VAR_5);
 if (FUNC_1(VAR_7)) {
  FUNC_4(VAR_6);
  return VAR_7;
 }

 *VAR_6 = VAR_7;
 FUNC_2(VAR_3, VAR_6);

 return VAR_7;
}
