
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pinctrl_dev {int dummy; } ;
struct madera_pin_private {TYPE_1__* chip; } ;
struct TYPE_4__ {char** group_names; scalar_t__ func; } ;
struct TYPE_3__ {unsigned int n_pins; } ;


 TYPE_2__* VAR_0 ;
 struct madera_pin_private* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_1(struct pinctrl_dev *VAR_1,
     unsigned int VAR_2,
     const char * const **VAR_3,
     unsigned int * const VAR_4)
{
 struct madera_pin_private *VAR_5 = FUNC_0(VAR_1);

 *VAR_3 = VAR_0[VAR_2].group_names;

 if (VAR_0[VAR_2].func == 0) {

  *VAR_4 = 1;
 } else {

  *VAR_4 = VAR_5->chip->n_pins;
 }

 return 0;
}
