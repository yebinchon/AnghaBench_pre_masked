
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spear_pmx {TYPE_1__* machdata; } ;
struct pinctrl_dev {int dummy; } ;
struct TYPE_2__ {int nfunctions; } ;


 struct spear_pmx* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_1(struct pinctrl_dev *VAR_0)
{
 struct spear_pmx *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->machdata->nfunctions;
}
