
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ab8500_fg_cap_scaling {int enable; int* cap_to_scale; int disable_cap_level; } ;
struct TYPE_8__ {int prev_percent; struct ab8500_fg_cap_scaling cap_scale; } ;
struct TYPE_7__ {scalar_t__ fully_charged; scalar_t__ charging; } ;
struct ab8500_fg {int dev; TYPE_4__ bat_cap; TYPE_3__ flags; TYPE_2__* bm; } ;
struct TYPE_6__ {TYPE_1__* fg_params; } ;
struct TYPE_5__ {int maint_thres; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct ab8500_fg *VAR_0)
{
 struct ab8500_fg_cap_scaling *VAR_1 = &VAR_0->bat_cap.cap_scale;
 int VAR_2 = VAR_0->bat_cap.prev_percent;

 if (!VAR_1->enable)
  return VAR_2;





 if (VAR_0->flags.fully_charged) {
  VAR_1->cap_to_scale[0] = 100;
  VAR_1->cap_to_scale[1] =
   FUNC_2(VAR_2, VAR_0->bm->fg_params->maint_thres);
  FUNC_1(VAR_0->dev, "Scale cap with %d/%d\n",
    VAR_1->cap_to_scale[0], VAR_1->cap_to_scale[1]);
 }


 if ((VAR_1->cap_to_scale[0] != VAR_1->cap_to_scale[1])
     && (VAR_1->cap_to_scale[1] > 0))
  VAR_2 = FUNC_3(100,
     FUNC_0(VAR_0->bat_cap.prev_percent *
       VAR_1->cap_to_scale[0],
       VAR_1->cap_to_scale[1]));

 if (VAR_0->flags.charging) {
  if (VAR_2 < VAR_1->disable_cap_level) {
   VAR_1->disable_cap_level = VAR_2;
   FUNC_1(VAR_0->dev, "Cap to stop scale lowered %d%%\n",
    VAR_1->disable_cap_level);
  } else if (!VAR_0->flags.fully_charged) {
   if (VAR_0->bat_cap.prev_percent >=
       VAR_1->disable_cap_level) {
    FUNC_1(VAR_0->dev, "Disabling scaled capacity\n");
    VAR_1->enable = 0;
    VAR_2 = VAR_0->bat_cap.prev_percent;
   } else {
    FUNC_1(VAR_0->dev,
     "Waiting in cap to level %d%%\n",
     VAR_1->disable_cap_level);
    VAR_2 = VAR_1->disable_cap_level;
   }
  }
 }

 return VAR_2;
}
