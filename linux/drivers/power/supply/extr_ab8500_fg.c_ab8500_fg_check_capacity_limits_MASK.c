
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int force_full; scalar_t__ fully_charged; int charging; scalar_t__ low_bat; } ;
struct TYPE_6__ {int enable; int* cap_to_scale; int disable_cap_level; int scaled_cap; } ;
struct TYPE_7__ {scalar_t__ level; scalar_t__ prev_level; int prev_percent; TYPE_2__ cap_scale; int permille; scalar_t__ mah; scalar_t__ prev_mah; } ;
struct ab8500_fg {int fg_kobject; TYPE_4__ flags; int dev; int fg_psy; TYPE_3__ bat_cap; TYPE_1__* bm; } ;
struct TYPE_5__ {scalar_t__ capacity_scaling; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct ab8500_fg*) ;
 scalar_t__ FUNC_2 (struct ab8500_fg*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,char*,int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int *,char*) ;

__attribute__((used)) static void FUNC_7(struct ab8500_fg *VAR_0, bool VAR_1)
{
 bool VAR_2 = 0;
 int VAR_3 = FUNC_0(VAR_0->bat_cap.permille, 10);

 VAR_0->bat_cap.level = FUNC_2(VAR_0);

 if (VAR_0->bat_cap.level != VAR_0->bat_cap.prev_level) {




  if (!(!VAR_0->flags.charging && VAR_0->bat_cap.level >
   VAR_0->bat_cap.prev_level) || VAR_1) {
   FUNC_3(VAR_0->dev, "level changed from %d to %d\n",
    VAR_0->bat_cap.prev_level,
    VAR_0->bat_cap.level);
   VAR_0->bat_cap.prev_level = VAR_0->bat_cap.level;
   VAR_2 = 1;
  } else {
   FUNC_3(VAR_0->dev, "level not allowed to go up "
    "since no charger is connected: %d to %d\n",
    VAR_0->bat_cap.prev_level,
    VAR_0->bat_cap.level);
  }
 }





 if (VAR_0->flags.low_bat) {
  FUNC_3(VAR_0->dev, "Battery low, set capacity to 0\n");
  VAR_0->bat_cap.prev_percent = 0;
  VAR_0->bat_cap.permille = 0;
  VAR_3 = 0;
  VAR_0->bat_cap.prev_mah = 0;
  VAR_0->bat_cap.mah = 0;
  VAR_2 = 1;
 } else if (VAR_0->flags.fully_charged) {




  if (VAR_0->flags.force_full) {
   VAR_0->bat_cap.prev_percent = VAR_3;
   VAR_0->bat_cap.prev_mah = VAR_0->bat_cap.mah;

   VAR_2 = 1;

   if (!VAR_0->bat_cap.cap_scale.enable &&
      VAR_0->bm->capacity_scaling) {
    VAR_0->bat_cap.cap_scale.enable = 1;
    VAR_0->bat_cap.cap_scale.cap_to_scale[0] = 100;
    VAR_0->bat_cap.cap_scale.cap_to_scale[1] =
      VAR_0->bat_cap.prev_percent;
    VAR_0->bat_cap.cap_scale.disable_cap_level = 100;
   }
  } else if (VAR_0->bat_cap.prev_percent != VAR_3) {
   FUNC_3(VAR_0->dev,
    "battery reported full "
    "but capacity dropping: %d\n",
    VAR_3);
   VAR_0->bat_cap.prev_percent = VAR_3;
   VAR_0->bat_cap.prev_mah = VAR_0->bat_cap.mah;

   VAR_2 = 1;
  }
 } else if (VAR_0->bat_cap.prev_percent != VAR_3) {
  if (VAR_3 == 0) {





   VAR_0->bat_cap.prev_percent = 1;
   VAR_3 = 1;

   VAR_2 = 1;
  } else if (!(!VAR_0->flags.charging &&
   VAR_3 > VAR_0->bat_cap.prev_percent) || VAR_1) {




   FUNC_3(VAR_0->dev,
    "capacity changed from %d to %d (%d)\n",
    VAR_0->bat_cap.prev_percent,
    VAR_3,
    VAR_0->bat_cap.permille);
   VAR_0->bat_cap.prev_percent = VAR_3;
   VAR_0->bat_cap.prev_mah = VAR_0->bat_cap.mah;

   VAR_2 = 1;
  } else {
   FUNC_3(VAR_0->dev, "capacity not allowed to go up since "
    "no charger is connected: %d to %d (%d)\n",
    VAR_0->bat_cap.prev_percent,
    VAR_3,
    VAR_0->bat_cap.permille);
  }
 }

 if (VAR_2) {
  if (VAR_0->bm->capacity_scaling) {
   VAR_0->bat_cap.cap_scale.scaled_cap =
    FUNC_1(VAR_0);

   FUNC_4(VAR_0->dev, "capacity=%d (%d)\n",
    VAR_0->bat_cap.prev_percent,
    VAR_0->bat_cap.cap_scale.scaled_cap);
  }
  FUNC_5(VAR_0->fg_psy);
  if (VAR_0->flags.fully_charged && VAR_0->flags.force_full) {
   FUNC_3(VAR_0->dev, "Battery full, notifying.\n");
   VAR_0->flags.force_full = 0;
   FUNC_6(&VAR_0->fg_kobject, ((void*)0), "charge_full");
  }
  FUNC_6(&VAR_0->fg_kobject, ((void*)0), "charge_now");
 }
}
