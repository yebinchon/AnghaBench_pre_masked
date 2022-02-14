
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ volt; scalar_t__ avg_curr; } ;
struct TYPE_5__ {scalar_t__ ac_cv_active; scalar_t__ usb_cv_active; } ;
struct abx500_chargalg {scalar_t__ charge_status; scalar_t__ charge_state; int maintenance_chg; scalar_t__ eoc_cnt; int dev; int chargalg_psy; TYPE_4__ batt_data; TYPE_3__* bm; TYPE_1__ events; } ;
struct TYPE_7__ {size_t batt_id; TYPE_2__* bat_type; } ;
struct TYPE_6__ {scalar_t__ termination_vol; scalar_t__ termination_curr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct abx500_chargalg *VAR_4)
{
 if (VAR_4->charge_status == VAR_1 &&
  VAR_4->charge_state == VAR_3 &&
  !VAR_4->maintenance_chg && (VAR_4->batt_data.volt >=
  VAR_4->bm->bat_type[VAR_4->bm->batt_id].termination_vol ||
  VAR_4->events.usb_cv_active || VAR_4->events.ac_cv_active) &&
  VAR_4->batt_data.avg_curr <
  VAR_4->bm->bat_type[VAR_4->bm->batt_id].termination_curr &&
  VAR_4->batt_data.avg_curr > 0) {
  if (++VAR_4->eoc_cnt >= VAR_0) {
   VAR_4->eoc_cnt = 0;
   VAR_4->charge_status = VAR_2;
   VAR_4->maintenance_chg = 1;
   FUNC_0(VAR_4->dev, "EOC reached!\n");
   FUNC_1(VAR_4->chargalg_psy);
  } else {
   FUNC_0(VAR_4->dev,
    " EOC limit reached for the %d"
    " time, out of %d before EOC\n",
    VAR_4->eoc_cnt,
    VAR_0);
  }
 } else {
  VAR_4->eoc_cnt = 0;
 }
}
