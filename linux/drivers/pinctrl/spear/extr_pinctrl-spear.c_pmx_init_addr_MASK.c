
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct spear_pingroup {int nmodemuxs; struct spear_modemux* modemuxs; } ;
struct spear_pinctrl_machdata {int ngroups; struct spear_pingroup** groups; } ;
struct spear_modemux {int nmuxregs; TYPE_1__* muxregs; } ;
struct TYPE_2__ {int reg; } ;



void FUNC_0(struct spear_pinctrl_machdata *VAR_0, u16 VAR_1)
{
 struct spear_pingroup *VAR_2;
 struct spear_modemux *VAR_3;
 int VAR_4, VAR_5, VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0->ngroups; VAR_6++) {
  VAR_2 = VAR_0->groups[VAR_6];

  for (VAR_4 = 0; VAR_4 < VAR_2->nmodemuxs; VAR_4++) {
   VAR_3 = &VAR_2->modemuxs[VAR_4];

   for (VAR_5 = 0; VAR_5 < VAR_3->nmuxregs; VAR_5++)
    if (VAR_3->muxregs[VAR_5].reg == 0xFFFF)
     VAR_3->muxregs[VAR_5].reg = VAR_1;
  }
 }
}
