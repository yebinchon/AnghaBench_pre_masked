
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; int strval; } ;
struct power_supply {int dummy; } ;
struct port_data {int psy_online; int psy_status; int psy_current_max; int psy_voltage_max_design; int psy_voltage_now; int psy_usb_type; int manufacturer; int model_name; struct charger_data* charger; } ;
struct device {int dummy; } ;
struct cros_ec_device {int mkbp_event_supported; } ;
struct charger_data {struct device* dev; struct cros_ec_device* ec_device; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct port_data*,int) ;
 int FUNC_1 (struct device*,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 struct port_data* FUNC_2 (struct power_supply*) ;

__attribute__((used)) static int FUNC_3(struct power_supply *VAR_4,
           enum power_supply_property VAR_5,
           union power_supply_propval *VAR_6)
{
 struct port_data *VAR_7 = FUNC_2(VAR_4);
 struct charger_data *VAR_8 = VAR_7->charger;
 struct cros_ec_device *VAR_9 = VAR_8->ec_device;
 struct device *VAR_10 = VAR_8->dev;
 int VAR_11;


 switch (VAR_5) {
 case 132:
  if (VAR_9->mkbp_event_supported || VAR_7->psy_online)
   break;

 case 137:
 case 129:
 case 128:
  VAR_11 = FUNC_0(VAR_7, 1);
  if (VAR_11 < 0) {
   FUNC_1(VAR_10, "Failed to get port status (err:0x%x)\n",
    VAR_11);
   return -VAR_1;
  }
  break;
 default:
  break;
 }

 switch (VAR_5) {
 case 132:
  VAR_6->intval = VAR_7->psy_online;
  break;
 case 131:
  VAR_6->intval = VAR_7->psy_status;
  break;
 case 137:
  VAR_6->intval = VAR_7->psy_current_max * 1000;
  break;
 case 129:
  VAR_6->intval = VAR_7->psy_voltage_max_design * 1000;
  break;
 case 128:
  VAR_6->intval = VAR_7->psy_voltage_now * 1000;
  break;
 case 130:
  VAR_6->intval = VAR_7->psy_usb_type;
  break;
 case 136:
  if (VAR_2 == VAR_0)
   VAR_6->intval = -1;
  else
   VAR_6->intval = VAR_2 * 1000;
  break;
 case 135:
  if (VAR_3 == VAR_0)
   VAR_6->intval = -1;
  else
   VAR_6->intval = VAR_3 * 1000;
  break;
 case 133:
  VAR_6->strval = VAR_7->model_name;
  break;
 case 134:
  VAR_6->strval = VAR_7->manufacturer;
  break;
 default:
  return -VAR_1;
 }

 return 0;
}
