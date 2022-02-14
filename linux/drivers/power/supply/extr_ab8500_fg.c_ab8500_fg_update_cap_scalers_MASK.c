
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ab8500_fg_cap_scaling {int disable_cap_level; int scaled_cap; int* cap_to_scale; int enable; } ;
struct TYPE_6__ {int prev_percent; struct ab8500_fg_cap_scaling cap_scale; } ;
struct TYPE_5__ {scalar_t__ charging; } ;
struct ab8500_fg {int dev; TYPE_4__* bm; TYPE_2__ bat_cap; TYPE_1__ flags; } ;
struct TYPE_8__ {TYPE_3__* fg_params; } ;
struct TYPE_7__ {int maint_thres; } ;


 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct ab8500_fg *VAR_0)
{
 struct ab8500_fg_cap_scaling *VAR_1 = &VAR_0->bat_cap.cap_scale;

 if (!VAR_1->enable)
  return;
 if (VAR_0->flags.charging) {
  VAR_0->bat_cap.cap_scale.disable_cap_level =
   VAR_0->bat_cap.cap_scale.scaled_cap;
  FUNC_0(VAR_0->dev, "Cap to stop scale at charge %d%%\n",
    VAR_0->bat_cap.cap_scale.disable_cap_level);
 } else {
  if (VAR_1->scaled_cap != 100) {
   VAR_1->cap_to_scale[0] = VAR_1->scaled_cap;
   VAR_1->cap_to_scale[1] = VAR_0->bat_cap.prev_percent;
  } else {
   VAR_1->cap_to_scale[0] = 100;
   VAR_1->cap_to_scale[1] =
    FUNC_1(VAR_0->bat_cap.prev_percent,
        VAR_0->bm->fg_params->maint_thres);
  }

  FUNC_0(VAR_0->dev, "Cap to scale at discharge %d/%d\n",
    VAR_1->cap_to_scale[0], VAR_1->cap_to_scale[1]);
 }
}
