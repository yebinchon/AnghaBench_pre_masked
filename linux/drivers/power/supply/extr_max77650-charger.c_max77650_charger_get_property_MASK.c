
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {void* intval; } ;
struct power_supply {int dummy; } ;
struct max77650_charger_data {int map; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;



 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 struct max77650_charger_data* FUNC_2 (struct power_supply*) ;
 int FUNC_3 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_4(struct power_supply *VAR_10,
      enum power_supply_property VAR_11,
      union power_supply_propval *VAR_12)
{
 struct max77650_charger_data *VAR_13 = FUNC_2(VAR_10);
 int VAR_14, VAR_15;

 switch (VAR_11) {
 case 128:
  VAR_14 = FUNC_3(VAR_13->map, VAR_1, &VAR_15);
  if (VAR_14)
   return VAR_14;

  if (FUNC_0(VAR_15)) {
   VAR_12->intval = VAR_6;
   break;
  }

  switch (FUNC_1(VAR_15)) {
  case 141:
  case 131:
  case 132:
  case 133:
   VAR_12->intval = VAR_8;
   break;
  case 134:
  case 140:
  case 139:
  case 136:
  case 135:
  case 138:
  case 137:
   VAR_12->intval = VAR_6;
   break;
  case 142:
   VAR_12->intval = VAR_7;
   break;
  default:
   VAR_12->intval = VAR_9;
  }
  break;
 case 129:
  VAR_14 = FUNC_3(VAR_13->map, VAR_1, &VAR_15);
  if (VAR_14)
   return VAR_14;

  VAR_12->intval = FUNC_0(VAR_15);
  break;
 case 130:
  VAR_14 = FUNC_3(VAR_13->map, VAR_1, &VAR_15);
  if (VAR_14)
   return VAR_14;

  if (!FUNC_0(VAR_15)) {
   VAR_12->intval = VAR_3;
   break;
  }

  switch (FUNC_1(VAR_15)) {
  case 134:
  case 140:
  case 139:
  case 136:
  case 135:
   VAR_12->intval = VAR_2;
   break;
  case 138:
  case 137:
   VAR_12->intval = VAR_4;
   break;
  default:
   VAR_12->intval = VAR_5;
  }
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
