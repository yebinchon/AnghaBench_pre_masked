
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {void* intval; } ;
struct power_supply {int dummy; } ;
struct goldfish_battery_data {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_0 (struct goldfish_battery_data*,int ) ;
 void* VAR_12 ;
 struct goldfish_battery_data* FUNC_1 (struct power_supply*) ;

__attribute__((used)) static int FUNC_2(struct power_supply *VAR_13,
     enum power_supply_property VAR_14,
     union power_supply_propval *VAR_15)
{
 struct goldfish_battery_data *VAR_16 = FUNC_1(VAR_13);
 int VAR_17 = 0;

 switch (VAR_14) {
 case 131:
  VAR_15->intval = FUNC_0(VAR_16, VAR_8);
  break;
 case 133:
  VAR_15->intval = FUNC_0(VAR_16, VAR_6);
  break;
 case 132:
  VAR_15->intval = FUNC_0(VAR_16, VAR_7);
  break;
 case 130:
  VAR_15->intval = VAR_12;
  break;
 case 139:
  VAR_15->intval = FUNC_0(VAR_16, VAR_0);
  break;
 case 128:
  VAR_15->intval = FUNC_0(VAR_16, VAR_10);
  break;
 case 129:
  VAR_15->intval = FUNC_0(VAR_16, VAR_9);
  break;
 case 138:
  VAR_15->intval = FUNC_0(VAR_16,
          VAR_1);
  break;
 case 135:
  VAR_15->intval = FUNC_0(VAR_16, VAR_4);
  break;
 case 136:
  VAR_15->intval = FUNC_0(VAR_16, VAR_3);
  break;
 case 137:
  VAR_15->intval = FUNC_0(VAR_16,
          VAR_2);
  break;
 case 134:
  VAR_15->intval = FUNC_0(VAR_16, VAR_5);
  break;
 default:
  VAR_17 = -VAR_11;
  break;
 }

 return VAR_17;
}
