
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_dev {int dummy; } ;
struct mxs_pinctrl_data {TYPE_1__* soc; } ;
struct TYPE_2__ {int ngroups; } ;


 struct mxs_pinctrl_data* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_1(struct pinctrl_dev *VAR_0)
{
 struct mxs_pinctrl_data *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->soc->ngroups;
}
