
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* vcharge_max; void* vcharge_min; void* vbat_charge_restart; void* vbat_charge_stop; void* vbat_charge_start; void* vbat_crit; void* vbat_low; int tbat_restart; int tbat_high; int tbat_low; } ;
struct da9030_charger {TYPE_1__ thresholds; } ;
struct da9030_battery_info {int vcharge_max; int vcharge_min; int vbat_charge_restart; int vbat_charge_stop; int vbat_charge_start; int vbat_crit; int vbat_low; int tbat_restart; int tbat_high; int tbat_low; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct da9030_charger *VAR_0,
           struct da9030_battery_info *VAR_1)
{
 VAR_0->thresholds.tbat_low = VAR_1->tbat_low;
 VAR_0->thresholds.tbat_high = VAR_1->tbat_high;
 VAR_0->thresholds.tbat_restart = VAR_1->tbat_restart;

 VAR_0->thresholds.vbat_low =
  FUNC_0(VAR_1->vbat_low);
 VAR_0->thresholds.vbat_crit =
  FUNC_0(VAR_1->vbat_crit);
 VAR_0->thresholds.vbat_charge_start =
  FUNC_0(VAR_1->vbat_charge_start);
 VAR_0->thresholds.vbat_charge_stop =
  FUNC_0(VAR_1->vbat_charge_stop);
 VAR_0->thresholds.vbat_charge_restart =
  FUNC_0(VAR_1->vbat_charge_restart);

 VAR_0->thresholds.vcharge_min =
  FUNC_0(VAR_1->vcharge_min);
 VAR_0->thresholds.vcharge_max =
  FUNC_0(VAR_1->vcharge_max);
}
