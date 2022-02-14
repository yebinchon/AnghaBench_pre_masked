
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_dev {int dummy; } ;
struct TYPE_2__ {int ngroups; } ;
struct aspeed_pinctrl_data {TYPE_1__ pinmux; } ;


 struct aspeed_pinctrl_data* FUNC_0 (struct pinctrl_dev*) ;

int FUNC_1(struct pinctrl_dev *VAR_0)
{
 struct aspeed_pinctrl_data *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->pinmux.ngroups;
}
