
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pinctrl_dev {int dummy; } ;
struct madera_pin_private {TYPE_2__* chip; } ;
struct TYPE_4__ {unsigned int n_pin_groups; TYPE_1__* pin_groups; } ;
struct TYPE_3__ {char const* name; } ;


 char const** VAR_0 ;
 struct madera_pin_private* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static const char *FUNC_1(struct pinctrl_dev *VAR_1,
      unsigned int VAR_2)
{
 struct madera_pin_private *VAR_3 = FUNC_0(VAR_1);

 if (VAR_2 < VAR_3->chip->n_pin_groups)
  return VAR_3->chip->pin_groups[VAR_2].name;

 VAR_2 -= VAR_3->chip->n_pin_groups;
 return VAR_0[VAR_2];
}
