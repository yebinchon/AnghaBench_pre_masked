
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spear_pmx {TYPE_2__* machdata; } ;
struct pinctrl_dev {int dummy; } ;
struct TYPE_4__ {TYPE_1__** groups; } ;
struct TYPE_3__ {unsigned int* pins; unsigned int npins; } ;


 struct spear_pmx* FUNC_0 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_1(struct pinctrl_dev *VAR_0,
  unsigned VAR_1, const unsigned **VAR_2, unsigned *VAR_3)
{
 struct spear_pmx *VAR_4 = FUNC_0(VAR_0);

 *VAR_2 = VAR_4->machdata->groups[VAR_1]->pins;
 *VAR_3 = VAR_4->machdata->groups[VAR_1]->npins;

 return 0;
}
