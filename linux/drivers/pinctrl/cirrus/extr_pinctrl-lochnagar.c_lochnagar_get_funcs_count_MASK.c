
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_dev {int dummy; } ;
struct lochnagar_pin_priv {int nfuncs; } ;


 struct lochnagar_pin_priv* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_1(struct pinctrl_dev *VAR_0)
{
 struct lochnagar_pin_priv *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->nfuncs;
}
