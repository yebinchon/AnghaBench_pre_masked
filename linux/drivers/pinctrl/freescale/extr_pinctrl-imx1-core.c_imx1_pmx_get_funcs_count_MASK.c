
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_dev {int dummy; } ;
struct imx1_pinctrl_soc_info {int nfunctions; } ;
struct imx1_pinctrl {struct imx1_pinctrl_soc_info* info; } ;


 struct imx1_pinctrl* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_1(struct pinctrl_dev *VAR_0)
{
 struct imx1_pinctrl *VAR_1 = FUNC_0(VAR_0);
 const struct imx1_pinctrl_soc_info *VAR_2 = VAR_1->info;

 return VAR_2->nfunctions;
}
