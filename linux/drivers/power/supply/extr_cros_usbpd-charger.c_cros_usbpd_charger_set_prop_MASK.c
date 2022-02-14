
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
typedef int u16 ;
struct power_supply {int dummy; } ;
struct port_data {struct charger_data* charger; } ;
struct device {int dummy; } ;
struct charger_data {struct device* dev; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (struct charger_data*,int,int) ;
 int FUNC_1 (struct device*,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 struct port_data* FUNC_2 (struct power_supply*) ;

__attribute__((used)) static int FUNC_3(struct power_supply *VAR_5,
           enum power_supply_property VAR_6,
           const union power_supply_propval *VAR_7)
{
 struct port_data *VAR_8 = FUNC_2(VAR_5);
 struct charger_data *VAR_9 = VAR_8->charger;
 struct device *VAR_10 = VAR_9->dev;
 u16 VAR_11;
 int VAR_12;


 if (VAR_7->intval >= VAR_2 * 1000)
  return -VAR_1;

 if (VAR_7->intval < 0)
  VAR_11 = VAR_0;
 else
  VAR_11 = VAR_7->intval / 1000;

 switch (VAR_6) {
 case 129:
  VAR_12 = FUNC_0(VAR_9, VAR_11,
       VAR_4);
  if (VAR_12 < 0)
   break;

  VAR_3 = VAR_11;
  if (VAR_3 == VAR_0)
   FUNC_1(VAR_10,
     "External Current Limit cleared for all ports\n");
  else
   FUNC_1(VAR_10,
     "External Current Limit set to %dmA for all ports\n",
     VAR_3);
  break;
 case 128:
  VAR_12 = FUNC_0(VAR_9,
       VAR_3,
       VAR_11);
  if (VAR_12 < 0)
   break;

  VAR_4 = VAR_11;
  if (VAR_4 == VAR_0)
   FUNC_1(VAR_10,
     "External Voltage Limit cleared for all ports\n");
  else
   FUNC_1(VAR_10,
     "External Voltage Limit set to %dmV for all ports\n",
     VAR_4);
  break;
 default:
  VAR_12 = -VAR_1;
 }

 return VAR_12;
}
