
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_dev {int dummy; } ;
struct madera_pin_private {TYPE_1__* chip; } ;
struct TYPE_2__ {int n_pin_groups; int n_pins; } ;


 struct madera_pin_private* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_1(struct pinctrl_dev *VAR_0)
{
 struct madera_pin_private *VAR_1 = FUNC_0(VAR_0);


 return VAR_1->chip->n_pin_groups + VAR_1->chip->n_pins;
}
