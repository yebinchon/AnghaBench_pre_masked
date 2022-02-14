
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
struct power_supply {TYPE_2__* desc; int num_supplicants; scalar_t__ supplied_to; } ;
struct device {int dummy; } ;
struct TYPE_8__ {int percent; int volt; int temp; int inst_curr; int avg_curr; } ;
struct TYPE_7__ {int batt_rem; int mainextchnotok; int main_thermal_prot; int main_ovv; int ac_wd_expired; int usbchargernotok; int usb_thermal_prot; int vbus_ovv; int usb_wd_expired; int ac_cv_active; int usb_cv_active; int batt_unknown; int vbus_collapsed; } ;
struct TYPE_5__ {int conn_chg; int prev_conn_chg; int online_chg; int prev_online_chg; int ac_volt; int usb_volt; int ac_curr; int usb_curr; } ;
struct abx500_chargalg {TYPE_4__ batt_data; TYPE_3__ events; TYPE_1__ chg_info; int chargalg_wd_work; int chargalg_wq; void* usb_chg; void* ac_chg; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;
struct TYPE_6__ {int num_properties; int* properties; scalar_t__ type; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct power_supply* FUNC_0 (struct device*) ;
 int FUNC_1 (char const**,int ,int ) ;
 struct abx500_chargalg* FUNC_2 (struct power_supply*) ;
 scalar_t__ FUNC_3 (struct power_supply*,int,union power_supply_propval*) ;
 void* FUNC_4 (struct power_supply*) ;
 int FUNC_5 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_2, void *VAR_3)
{
 struct power_supply *VAR_4;
 struct power_supply *VAR_5 = FUNC_0(VAR_2);
 const char **VAR_6 = (const char **)VAR_5->supplied_to;
 struct abx500_chargalg *VAR_7;
 union power_supply_propval VAR_8;
 int VAR_9;
 bool VAR_10 = 0;

 VAR_4 = (struct power_supply *)VAR_3;
 VAR_7 = FUNC_2(VAR_4);

 VAR_9 = FUNC_1(VAR_6, VAR_5->num_supplicants, VAR_4->desc->name);
 if (VAR_9 < 0)
  return 0;






 if (!FUNC_3(VAR_5, 140, &VAR_8)) {
  VAR_7->batt_data.percent = VAR_8.intval;
  VAR_10 = 1;
 }


 for (VAR_9 = 0; VAR_9 < VAR_5->desc->num_properties; VAR_9++) {
  enum power_supply_property VAR_11;
  VAR_11 = VAR_5->desc->properties[VAR_9];




  if (!VAR_7->ac_chg &&
   VAR_5->desc->type == 129)
   VAR_7->ac_chg = FUNC_4(VAR_5);
  else if (!VAR_7->usb_chg &&
   VAR_5->desc->type == 128)
   VAR_7->usb_chg = FUNC_4(VAR_5);

  if (FUNC_3(VAR_5, VAR_11, &VAR_8))
   continue;
  switch (VAR_11) {
  case 135:
   switch (VAR_5->desc->type) {
   case 130:

    if (VAR_8.intval)
     VAR_7->events.batt_rem = 0;

    else
     VAR_7->events.batt_rem = 1;
    break;
   case 129:

    if (!VAR_8.intval &&
     (VAR_7->chg_info.conn_chg & VAR_0)) {
     VAR_7->chg_info.prev_conn_chg =
      VAR_7->chg_info.conn_chg;
     VAR_7->chg_info.conn_chg &= ~VAR_0;
    }

    else if (VAR_8.intval &&
     !(VAR_7->chg_info.conn_chg & VAR_0)) {
     VAR_7->chg_info.prev_conn_chg =
      VAR_7->chg_info.conn_chg;
     VAR_7->chg_info.conn_chg |= VAR_0;
    }
    break;
   case 128:

    if (!VAR_8.intval &&
     (VAR_7->chg_info.conn_chg & VAR_1)) {
     VAR_7->chg_info.prev_conn_chg =
      VAR_7->chg_info.conn_chg;
     VAR_7->chg_info.conn_chg &= ~VAR_1;
    }

    else if (VAR_8.intval &&
     !(VAR_7->chg_info.conn_chg & VAR_1)) {
     VAR_7->chg_info.prev_conn_chg =
      VAR_7->chg_info.conn_chg;
     VAR_7->chg_info.conn_chg |= VAR_1;
    }
    break;
   default:
    break;
   }
   break;

  case 136:
   switch (VAR_5->desc->type) {
   case 130:
    break;
   case 129:

    if (!VAR_8.intval &&
     (VAR_7->chg_info.online_chg & VAR_0)) {
     VAR_7->chg_info.prev_online_chg =
      VAR_7->chg_info.online_chg;
     VAR_7->chg_info.online_chg &= ~VAR_0;
    }

    else if (VAR_8.intval &&
     !(VAR_7->chg_info.online_chg & VAR_0)) {
     VAR_7->chg_info.prev_online_chg =
      VAR_7->chg_info.online_chg;
     VAR_7->chg_info.online_chg |= VAR_0;
     FUNC_5(VAR_7->chargalg_wq,
      &VAR_7->chargalg_wd_work, 0);
    }
    break;
   case 128:

    if (!VAR_8.intval &&
     (VAR_7->chg_info.online_chg & VAR_1)) {
     VAR_7->chg_info.prev_online_chg =
      VAR_7->chg_info.online_chg;
     VAR_7->chg_info.online_chg &= ~VAR_1;
    }

    else if (VAR_8.intval &&
     !(VAR_7->chg_info.online_chg & VAR_1)) {
     VAR_7->chg_info.prev_online_chg =
      VAR_7->chg_info.online_chg;
     VAR_7->chg_info.online_chg |= VAR_1;
     FUNC_5(VAR_7->chargalg_wq,
      &VAR_7->chargalg_wd_work, 0);
    }
    break;
   default:
    break;
   }
   break;

  case 137:
   switch (VAR_5->desc->type) {
   case 130:
    break;
   case 129:
    switch (VAR_8.intval) {
    case 141:
     VAR_7->events.mainextchnotok = 1;
     VAR_7->events.main_thermal_prot = 0;
     VAR_7->events.main_ovv = 0;
     VAR_7->events.ac_wd_expired = 0;
     break;
    case 145:
     VAR_7->events.ac_wd_expired = 1;
     VAR_7->events.mainextchnotok = 0;
     VAR_7->events.main_ovv = 0;
     VAR_7->events.main_thermal_prot = 0;
     break;
    case 146:
    case 143:
     VAR_7->events.main_thermal_prot = 1;
     VAR_7->events.mainextchnotok = 0;
     VAR_7->events.main_ovv = 0;
     VAR_7->events.ac_wd_expired = 0;
     break;
    case 142:
     VAR_7->events.main_ovv = 1;
     VAR_7->events.mainextchnotok = 0;
     VAR_7->events.main_thermal_prot = 0;
     VAR_7->events.ac_wd_expired = 0;
     break;
    case 144:
     VAR_7->events.main_thermal_prot = 0;
     VAR_7->events.mainextchnotok = 0;
     VAR_7->events.main_ovv = 0;
     VAR_7->events.ac_wd_expired = 0;
     break;
    default:
     break;
    }
    break;

   case 128:
    switch (VAR_8.intval) {
    case 141:
     VAR_7->events.usbchargernotok = 1;
     VAR_7->events.usb_thermal_prot = 0;
     VAR_7->events.vbus_ovv = 0;
     VAR_7->events.usb_wd_expired = 0;
     break;
    case 145:
     VAR_7->events.usb_wd_expired = 1;
     VAR_7->events.usbchargernotok = 0;
     VAR_7->events.usb_thermal_prot = 0;
     VAR_7->events.vbus_ovv = 0;
     break;
    case 146:
    case 143:
     VAR_7->events.usb_thermal_prot = 1;
     VAR_7->events.usbchargernotok = 0;
     VAR_7->events.vbus_ovv = 0;
     VAR_7->events.usb_wd_expired = 0;
     break;
    case 142:
     VAR_7->events.vbus_ovv = 1;
     VAR_7->events.usbchargernotok = 0;
     VAR_7->events.usb_thermal_prot = 0;
     VAR_7->events.usb_wd_expired = 0;
     break;
    case 144:
     VAR_7->events.usbchargernotok = 0;
     VAR_7->events.usb_thermal_prot = 0;
     VAR_7->events.vbus_ovv = 0;
     VAR_7->events.usb_wd_expired = 0;
     break;
    default:
     break;
    }
   default:
    break;
   }
   break;

  case 131:
   switch (VAR_5->desc->type) {
   case 130:
    VAR_7->batt_data.volt = VAR_8.intval / 1000;
    break;
   case 129:
    VAR_7->chg_info.ac_volt = VAR_8.intval / 1000;
    break;
   case 128:
    VAR_7->chg_info.usb_volt = VAR_8.intval / 1000;
    break;
   default:
    break;
   }
   break;

  case 132:
   switch (VAR_5->desc->type) {
   case 129:


    if (VAR_8.intval)
     VAR_7->events.ac_cv_active = 1;
    else
     VAR_7->events.ac_cv_active = 0;

    break;
   case 128:


    if (VAR_8.intval)
     VAR_7->events.usb_cv_active = 1;
    else
     VAR_7->events.usb_cv_active = 0;

    break;
   default:
    break;
   }
   break;

  case 134:
   switch (VAR_5->desc->type) {
   case 130:
    if (VAR_8.intval)
     VAR_7->events.batt_unknown = 0;
    else
     VAR_7->events.batt_unknown = 1;

    break;
   default:
    break;
   }
   break;

  case 133:
   VAR_7->batt_data.temp = VAR_8.intval / 10;
   break;

  case 138:
   switch (VAR_5->desc->type) {
   case 129:
     VAR_7->chg_info.ac_curr =
      VAR_8.intval / 1000;
     break;
   case 128:
     VAR_7->chg_info.usb_curr =
      VAR_8.intval / 1000;
    break;
   case 130:
    VAR_7->batt_data.inst_curr = VAR_8.intval / 1000;
    break;
   default:
    break;
   }
   break;

  case 139:
   switch (VAR_5->desc->type) {
   case 130:
    VAR_7->batt_data.avg_curr = VAR_8.intval / 1000;
    break;
   case 128:
    if (VAR_8.intval)
     VAR_7->events.vbus_collapsed = 1;
    else
     VAR_7->events.vbus_collapsed = 0;
    break;
   default:
    break;
   }
   break;
  case 140:
   if (!VAR_10)
    VAR_7->batt_data.percent = VAR_8.intval;
   break;
  default:
   break;
  }
 }
 return 0;
}
