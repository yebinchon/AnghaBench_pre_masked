
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pinctrl_dev {int dummy; } ;
struct imx_pinctrl_soc_info {int generic_pinconf; } ;
struct imx_pinctrl {struct pinctrl_dev* pctl; struct imx_pinctrl_soc_info* info; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct imx_pinctrl*,unsigned long*,unsigned int) ;
 int FUNC_1 (struct device_node*,struct pinctrl_dev*,unsigned long**,unsigned int*) ;

__attribute__((used)) static u32 FUNC_2(struct device_node *VAR_0,
         struct imx_pinctrl *VAR_1)
{
 const struct imx_pinctrl_soc_info *VAR_2 = VAR_1->info;
 struct pinctrl_dev *VAR_3 = VAR_1->pctl;
 unsigned int VAR_4;
 unsigned long *VAR_5;
 int VAR_6;

 if (!VAR_2->generic_pinconf)
  return 0;

 VAR_6 = FUNC_1(VAR_0, VAR_3, &VAR_5,
           &VAR_4);
 if (VAR_6)
  return 0;

 return FUNC_0(VAR_1, VAR_5, VAR_4);
}
