
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ charging; scalar_t__ calibrate; } ;
struct TYPE_3__ {int prev_level; int prev_percent; int prev_mah; int level; int permille; int mah; int max_mah; int max_mah_design; } ;
struct ab8500_fg {int recovery_needed; int high_curr_mode; int discharge_state; int charge_state; TYPE_2__ flags; int accu_charge; int avg_curr; int inst_curr; int vbat; TYPE_1__ bat_cap; int dev; } ;


 int FUNC_0 (struct ab8500_fg*) ;
 int FUNC_1 (struct ab8500_fg*) ;
 int FUNC_2 (struct ab8500_fg*) ;
 int FUNC_3 (int ,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,scalar_t__,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct ab8500_fg *VAR_0)
{
 if (VAR_0->flags.calibrate)
  FUNC_0(VAR_0);
 else {
  if (VAR_0->flags.charging)
   FUNC_1(VAR_0);
  else
   FUNC_2(VAR_0);
 }

 FUNC_3(VAR_0->dev, "[FG_DATA] %d %d %d %d %d %d %d %d %d %d "
  "%d %d %d %d %d %d %d\n",
  VAR_0->bat_cap.max_mah_design,
  VAR_0->bat_cap.max_mah,
  VAR_0->bat_cap.mah,
  VAR_0->bat_cap.permille,
  VAR_0->bat_cap.level,
  VAR_0->bat_cap.prev_mah,
  VAR_0->bat_cap.prev_percent,
  VAR_0->bat_cap.prev_level,
  VAR_0->vbat,
  VAR_0->inst_curr,
  VAR_0->avg_curr,
  VAR_0->accu_charge,
  VAR_0->flags.charging,
  VAR_0->charge_state,
  VAR_0->discharge_state,
  VAR_0->high_curr_mode,
  VAR_0->recovery_needed);
}
