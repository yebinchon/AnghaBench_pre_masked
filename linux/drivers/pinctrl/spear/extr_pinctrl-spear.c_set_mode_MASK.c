
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct spear_pmx_mode {int mode; char* name; int reg; int val; int mask; } ;
struct spear_pmx {int dev; TYPE_1__* machdata; } ;
struct TYPE_2__ {int npmx_modes; int mode; struct spear_pmx_mode** pmx_modes; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*,int ) ;
 int FUNC_1 (struct spear_pmx*,int ) ;
 int FUNC_2 (struct spear_pmx*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct spear_pmx *VAR_1, int VAR_2)
{
 struct spear_pmx_mode *VAR_3 = ((void*)0);
 int VAR_4;
 u32 VAR_5;

 if (!VAR_1->machdata->pmx_modes || !VAR_1->machdata->npmx_modes)
  return -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_1->machdata->npmx_modes; VAR_4++) {
  if (VAR_1->machdata->pmx_modes[VAR_4]->mode == (1 << VAR_2)) {
   VAR_3 = VAR_1->machdata->pmx_modes[VAR_4];
   break;
  }
 }

 if (!VAR_3)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_1, VAR_3->reg);
 VAR_5 &= ~VAR_3->mask;
 VAR_5 |= VAR_3->val;
 FUNC_2(VAR_1, VAR_5, VAR_3->reg);

 VAR_1->machdata->mode = VAR_3->mode;
 FUNC_0(VAR_1->dev, "Configured Mode: %s with id: %x\n\n",
   VAR_3->name ? VAR_3->name : "no_name",
   VAR_3->reg);

 return 0;
}
