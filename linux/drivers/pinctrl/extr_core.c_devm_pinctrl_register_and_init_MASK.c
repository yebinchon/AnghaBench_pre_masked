
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_dev {int dummy; } ;
struct pinctrl_desc {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,struct pinctrl_dev**) ;
 struct pinctrl_dev** FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct pinctrl_dev**) ;
 int FUNC_3 (struct pinctrl_desc*,struct device*,void*,struct pinctrl_dev**) ;

int FUNC_4(struct device *VAR_3,
       struct pinctrl_desc *VAR_4,
       void *VAR_5,
       struct pinctrl_dev **VAR_6)
{
 struct pinctrl_dev **VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(VAR_2, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_3(VAR_4, VAR_3, VAR_5, VAR_6);
 if (VAR_8) {
  FUNC_2(VAR_7);
  return VAR_8;
 }

 *VAR_7 = *VAR_6;
 FUNC_0(VAR_3, VAR_7);

 return 0;
}
