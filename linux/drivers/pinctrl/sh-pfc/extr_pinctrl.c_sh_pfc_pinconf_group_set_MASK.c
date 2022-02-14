
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sh_pfc_pinctrl {TYPE_2__* pfc; } ;
struct pinctrl_dev {int dummy; } ;
struct TYPE_6__ {TYPE_1__* groups; } ;
struct TYPE_5__ {TYPE_3__* info; } ;
struct TYPE_4__ {unsigned int* pins; unsigned int nr_pins; } ;


 struct sh_pfc_pinctrl* FUNC_0 (struct pinctrl_dev*) ;
 unsigned int FUNC_1 (struct pinctrl_dev*,unsigned int const,unsigned long*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct pinctrl_dev *VAR_0, unsigned VAR_1,
        unsigned long *VAR_2,
        unsigned VAR_3)
{
 struct sh_pfc_pinctrl *VAR_4 = FUNC_0(VAR_0);
 const unsigned int *VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7, VAR_8;

 VAR_5 = VAR_4->pfc->info->groups[VAR_1].pins;
 VAR_6 = VAR_4->pfc->info->groups[VAR_1].nr_pins;

 for (VAR_7 = 0; VAR_7 < VAR_6; ++VAR_7) {
  VAR_8 = FUNC_1(VAR_0, VAR_5[VAR_7], VAR_2, VAR_3);
  if (VAR_8)
   return VAR_8;
 }

 return 0;
}
