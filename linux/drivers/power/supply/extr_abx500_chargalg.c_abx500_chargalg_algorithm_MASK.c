
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_14__ {int safety_timer_expired; scalar_t__ btemp_underover; scalar_t__ usb_wd_expired; scalar_t__ ac_wd_expired; scalar_t__ btemp_lowhigh; int maintenance_timer_expired; scalar_t__ usbchargernotok; scalar_t__ mainextchnotok; scalar_t__ batt_ovv; scalar_t__ main_ovv; scalar_t__ vbus_ovv; scalar_t__ usb_thermal_prot; scalar_t__ main_thermal_prot; scalar_t__ batt_rem; int usb_cv_active; int ac_cv_active; int vbus_collapsed; scalar_t__ batt_unknown; } ;
struct TYPE_11__ {int percent; int temp; int inst_curr; int avg_curr; int volt; } ;
struct TYPE_10__ {int curr_step; } ;
struct TYPE_9__ {int conn_chg; int online_chg; scalar_t__ ac_chg_ok; scalar_t__ usb_chg_ok; int usb_iset; int usb_vset; int ac_iset; int ac_vset; int usb_curr; int ac_curr; int charger_type; } ;
struct TYPE_8__ {int usb_suspended; int ac_suspended; } ;
struct abx500_chargalg {int charge_state; int maintenance_chg; int chargalg_work; int chargalg_wq; TYPE_7__ events; int chargalg_psy; void* charge_status; TYPE_6__* bm; TYPE_4__ batt_data; int eoc_cnt; TYPE_3__ curr_status; TYPE_2__ chg_info; TYPE_1__ susp_status; int dev; int parent; } ;
struct TYPE_13__ {size_t batt_id; TYPE_5__* bat_type; int no_maintenance; int chg_unknown_bat; } ;
struct TYPE_12__ {int normal_cur_lvl; int maint_a_cur_lvl; int maint_b_cur_lvl; int low_high_cur_lvl; int low_high_vol_lvl; int maint_b_vol_lvl; int maint_b_chg_timer_h; int maint_a_vol_lvl; int maint_a_chg_timer_h; int recharge_cap; int normal_vol_lvl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct abx500_chargalg*,int,int ,int ) ;
 int FUNC_1 (struct abx500_chargalg*) ;
 int FUNC_2 (struct abx500_chargalg*) ;
 int FUNC_3 (struct abx500_chargalg*) ;
 int FUNC_4 (struct abx500_chargalg*) ;
 int FUNC_5 (struct abx500_chargalg*) ;
 int FUNC_6 (struct abx500_chargalg*) ;
 int VAR_8 ;
 int FUNC_7 (struct abx500_chargalg*) ;
 int FUNC_8 (struct abx500_chargalg*,int ,int) ;
 int FUNC_9 (struct abx500_chargalg*,int ) ;
 int FUNC_10 (struct abx500_chargalg*) ;
 int FUNC_11 (struct abx500_chargalg*,int const) ;
 int FUNC_12 (struct abx500_chargalg*) ;
 int FUNC_13 (struct abx500_chargalg*) ;
 int FUNC_14 (struct abx500_chargalg*) ;
 int FUNC_15 (struct abx500_chargalg*,int,int ,int ) ;
 int FUNC_16 (int ,int *,int ,int ) ;
 int FUNC_17 (int ,char*,int ,int ,int ,int ,int ,int,int ,int ,void*,int,int,int,int,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_18 (int ,char*,int) ;
 int FUNC_19 (struct abx500_chargalg*) ;
 int FUNC_20 (struct abx500_chargalg*) ;
 scalar_t__ FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int VAR_9 ;
 int FUNC_23 (int ,int *) ;
 int * VAR_10 ;

__attribute__((used)) static void FUNC_24(struct abx500_chargalg *VAR_11)
{
 int VAR_12;
 int VAR_13;
 int VAR_14;


 FUNC_16(VAR_9, ((void*)0),
  VAR_11->chargalg_psy, VAR_8);

 FUNC_6(VAR_11);
 FUNC_5(VAR_11);
 FUNC_3(VAR_11);

 VAR_12 = FUNC_1(VAR_11);
 FUNC_4(VAR_11);

 if (FUNC_21(VAR_11->parent)) {
  VAR_13 = FUNC_2(VAR_11);
  if (VAR_13 < 0)
   FUNC_18(VAR_11->dev, "Checking charger is enabled error"
     ": Returned Value %d\n", VAR_13);
 }






 if (!VAR_12 ||
  (VAR_11->events.batt_unknown && !VAR_11->bm->chg_unknown_bat)) {
  if (VAR_11->charge_state != 151) {
   VAR_11->events.safety_timer_expired = 0;
   FUNC_11(VAR_11, 150);
  }
 }


 else if (VAR_11->charge_state == 136 ||
  VAR_11->charge_state == 137) {

 }


 else if (VAR_11->events.safety_timer_expired) {
  if (VAR_11->charge_state != 139)
   FUNC_11(VAR_11,
    138);
 }






 else if (VAR_11->events.batt_rem) {
  if (VAR_11->charge_state != 155)
   FUNC_11(VAR_11, 154);
 }

 else if (VAR_11->events.mainextchnotok || VAR_11->events.usbchargernotok) {




  if (VAR_11->charge_state != 153 &&
    !VAR_11->events.vbus_collapsed)
   FUNC_11(VAR_11, 152);
 }

 else if (VAR_11->events.vbus_ovv ||
   VAR_11->events.main_ovv ||
   VAR_11->events.batt_ovv ||
   !VAR_11->chg_info.usb_chg_ok ||
   !VAR_11->chg_info.ac_chg_ok) {
  if (VAR_11->charge_state != 141)
   FUNC_11(VAR_11, 140);
 }

 else if (VAR_11->events.main_thermal_prot ||
  VAR_11->events.usb_thermal_prot) {
  if (VAR_11->charge_state != 149)
   FUNC_11(VAR_11,
    148);
 }

 else if (VAR_11->events.btemp_underover) {
  if (VAR_11->charge_state != 133)
   FUNC_11(VAR_11,
    132);
 }

 else if (VAR_11->events.ac_wd_expired ||
  VAR_11->events.usb_wd_expired) {
  if (VAR_11->charge_state != 129)
   FUNC_11(VAR_11, 128);
 }

 else if (VAR_11->events.btemp_lowhigh) {
  if (VAR_11->charge_state != 135)
   FUNC_11(VAR_11, 134);
 }

 FUNC_17(VAR_11->dev,
  "[CHARGALG] Vb %d Ib_avg %d Ib_inst %d Tb %d Cap %d Maint %d "
  "State %s Active_chg %d Chg_status %d AC %d USB %d "
  "AC_online %d USB_online %d AC_CV %d USB_CV %d AC_I %d "
  "USB_I %d AC_Vset %d AC_Iset %d USB_Vset %d USB_Iset %d\n",
  VAR_11->batt_data.volt,
  VAR_11->batt_data.avg_curr,
  VAR_11->batt_data.inst_curr,
  VAR_11->batt_data.temp,
  VAR_11->batt_data.percent,
  VAR_11->maintenance_chg,
  VAR_10[VAR_11->charge_state],
  VAR_11->chg_info.charger_type,
  VAR_11->charge_status,
  VAR_11->chg_info.conn_chg & VAR_0,
  VAR_11->chg_info.conn_chg & VAR_7,
  VAR_11->chg_info.online_chg & VAR_0,
  VAR_11->chg_info.online_chg & VAR_7,
  VAR_11->events.ac_cv_active,
  VAR_11->events.usb_cv_active,
  VAR_11->chg_info.ac_curr,
  VAR_11->chg_info.usb_curr,
  VAR_11->chg_info.ac_vset,
  VAR_11->chg_info.ac_iset,
  VAR_11->chg_info.usb_vset,
  VAR_11->chg_info.usb_iset);

 switch (VAR_11->charge_state) {
 case 150:
  FUNC_12(VAR_11);
  VAR_11->charge_status = VAR_4;
  FUNC_11(VAR_11, 151);


 case 151:
  break;

 case 136:
  if (VAR_11->susp_status.ac_suspended)
   FUNC_0(VAR_11, 0, 0, 0);
  if (VAR_11->susp_status.usb_suspended)
   FUNC_15(VAR_11, 0, 0, 0);
  FUNC_14(VAR_11);
  FUNC_13(VAR_11);
  VAR_11->charge_status = VAR_6;
  VAR_11->maintenance_chg = 0;
  FUNC_11(VAR_11, 137);
  FUNC_22(VAR_11->chargalg_psy);


 case 137:

  break;

 case 154:
  FUNC_12(VAR_11);
  FUNC_11(VAR_11, 155);


 case 155:
  if (!VAR_11->events.batt_rem)
   FUNC_11(VAR_11, 142);
  break;

 case 148:
  FUNC_12(VAR_11);
  FUNC_11(VAR_11, 149);


 case 149:
  if (!VAR_11->events.main_thermal_prot &&
    !VAR_11->events.usb_thermal_prot)
   FUNC_11(VAR_11, 142);
  break;

 case 140:
  FUNC_12(VAR_11);
  FUNC_11(VAR_11, 141);


 case 141:
  if (!VAR_11->events.vbus_ovv &&
    !VAR_11->events.main_ovv &&
    !VAR_11->events.batt_ovv &&
    VAR_11->chg_info.usb_chg_ok &&
    VAR_11->chg_info.ac_chg_ok)
   FUNC_11(VAR_11, 142);
  break;

 case 152:
  FUNC_12(VAR_11);
  FUNC_11(VAR_11, 153);


 case 153:
  if (!VAR_11->events.mainextchnotok &&
    !VAR_11->events.usbchargernotok)
   FUNC_11(VAR_11, 142);
  break;

 case 138:
  FUNC_12(VAR_11);
  FUNC_11(VAR_11, 139);


 case 139:

  break;

 case 142:
  if (VAR_11->curr_status.curr_step == VAR_2)
   FUNC_12(VAR_11);
  else {
   VAR_14 = VAR_11->bm->bat_type[
    VAR_11->bm->batt_id].normal_cur_lvl
    * VAR_11->curr_status.curr_step
    / VAR_1;
   FUNC_8(VAR_11,
    VAR_11->bm->bat_type[VAR_11->bm->batt_id]
    .normal_vol_lvl, VAR_14);
  }

  FUNC_11(VAR_11, 143);
  FUNC_10(VAR_11);
  FUNC_13(VAR_11);
  FUNC_20(VAR_11);
  VAR_11->charge_status = VAR_3;
  VAR_11->eoc_cnt = 0;
  VAR_11->maintenance_chg = 0;
  FUNC_22(VAR_11->chargalg_psy);

  break;

 case 143:
  FUNC_19(VAR_11);
  if (VAR_11->charge_status == VAR_5 &&
   VAR_11->maintenance_chg) {
   if (VAR_11->bm->no_maintenance)
    FUNC_11(VAR_11,
     130);
   else
    FUNC_11(VAR_11,
     146);
  }
  break;


 case 130:
  FUNC_7(VAR_11);
  FUNC_11(VAR_11, 131);


 case 131:
  if (VAR_11->batt_data.percent <=
      VAR_11->bm->bat_type[VAR_11->bm->batt_id].
      recharge_cap)
   FUNC_11(VAR_11, 142);
  break;

 case 146:
  FUNC_14(VAR_11);
  FUNC_9(VAR_11,
   VAR_11->bm->bat_type[
    VAR_11->bm->batt_id].maint_a_chg_timer_h);
  FUNC_8(VAR_11,
   VAR_11->bm->bat_type[
    VAR_11->bm->batt_id].maint_a_vol_lvl,
   VAR_11->bm->bat_type[
    VAR_11->bm->batt_id].maint_a_cur_lvl);
  FUNC_11(VAR_11, 147);
  FUNC_22(VAR_11->chargalg_psy);


 case 147:
  if (VAR_11->events.maintenance_timer_expired) {
   FUNC_13(VAR_11);
   FUNC_11(VAR_11, 144);
  }
  break;

 case 144:
  FUNC_9(VAR_11,
   VAR_11->bm->bat_type[
    VAR_11->bm->batt_id].maint_b_chg_timer_h);
  FUNC_8(VAR_11,
   VAR_11->bm->bat_type[
    VAR_11->bm->batt_id].maint_b_vol_lvl,
   VAR_11->bm->bat_type[
    VAR_11->bm->batt_id].maint_b_cur_lvl);
  FUNC_11(VAR_11, 145);
  FUNC_22(VAR_11->chargalg_psy);


 case 145:
  if (VAR_11->events.maintenance_timer_expired) {
   FUNC_13(VAR_11);
   FUNC_11(VAR_11, 142);
  }
  break;

 case 134:
  FUNC_8(VAR_11,
   VAR_11->bm->bat_type[
    VAR_11->bm->batt_id].low_high_vol_lvl,
   VAR_11->bm->bat_type[
    VAR_11->bm->batt_id].low_high_cur_lvl);
  FUNC_13(VAR_11);
  VAR_11->charge_status = VAR_3;
  FUNC_11(VAR_11, 135);
  FUNC_22(VAR_11->chargalg_psy);


 case 135:
  if (!VAR_11->events.btemp_lowhigh)
   FUNC_11(VAR_11, 142);
  break;

 case 128:
  FUNC_12(VAR_11);
  FUNC_11(VAR_11, 129);


 case 129:
  if (!VAR_11->events.ac_wd_expired &&
    !VAR_11->events.usb_wd_expired)
   FUNC_11(VAR_11, 142);
  break;

 case 132:
  FUNC_12(VAR_11);
  FUNC_11(VAR_11, 133);


 case 133:
  if (!VAR_11->events.btemp_underover)
   FUNC_11(VAR_11, 142);
  break;
 }


 if (VAR_11->charge_state == 142 ||
   VAR_11->charge_state == 146 ||
   VAR_11->charge_state == 144)
  FUNC_23(VAR_11->chargalg_wq, &VAR_11->chargalg_work);
}
