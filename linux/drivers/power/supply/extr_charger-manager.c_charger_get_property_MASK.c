
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct power_supply {int dummy; } ;
struct charger_manager {struct charger_desc* desc; int emergency_stop; } ;
struct charger_desc {int fullbatt_uV; int psy_fuel_gauge; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct charger_manager*,int*) ;
 int FUNC_1 (struct charger_manager*,int*) ;
 int FUNC_2 (struct charger_manager*) ;
 int FUNC_3 (struct charger_manager*) ;
 int FUNC_4 (struct charger_manager*) ;
 int FUNC_5 (struct charger_manager*) ;
 struct power_supply* FUNC_6 (int ) ;
 struct charger_manager* FUNC_7 (struct power_supply*) ;
 int FUNC_8 (struct power_supply*,int const,union power_supply_propval*) ;
 int FUNC_9 (struct power_supply*) ;

__attribute__((used)) static int FUNC_10(struct power_supply *VAR_8,
  enum power_supply_property VAR_9,
  union power_supply_propval *VAR_10)
{
 struct charger_manager *VAR_11 = FUNC_7(VAR_8);
 struct charger_desc *VAR_12 = VAR_11->desc;
 struct power_supply *VAR_13 = ((void*)0);
 int VAR_14 = 0;
 int VAR_15;

 switch (VAR_9) {
 case 131:
  if (FUNC_3(VAR_11))
   VAR_10->intval = VAR_5;
  else if (FUNC_4(VAR_11))
   VAR_10->intval = VAR_7;
  else
   VAR_10->intval = VAR_6;
  break;
 case 134:
  if (VAR_11->emergency_stop > 0)
   VAR_10->intval = VAR_4;
  else if (VAR_11->emergency_stop < 0)
   VAR_10->intval = VAR_2;
  else
   VAR_10->intval = VAR_3;
  break;
 case 132:
  if (FUNC_2(VAR_11))
   VAR_10->intval = 1;
  else
   VAR_10->intval = 0;
  break;
 case 128:
  VAR_14 = FUNC_1(VAR_11, &VAR_10->intval);
  break;
 case 135:
  VAR_13 = FUNC_6(VAR_11->desc->psy_fuel_gauge);
  if (!VAR_13) {
   VAR_14 = -VAR_1;
   break;
  }
  VAR_14 = FUNC_8(VAR_13,
    135, VAR_10);
  break;
 case 130:
 case 129:
  return FUNC_0(VAR_11, &VAR_10->intval);
 case 138:
  if (!FUNC_2(VAR_11)) {

   VAR_10->intval = 100;
   break;
  }

  VAR_13 = FUNC_6(VAR_11->desc->psy_fuel_gauge);
  if (!VAR_13) {
   VAR_14 = -VAR_1;
   break;
  }

  VAR_14 = FUNC_8(VAR_13,
     138, VAR_10);
  if (VAR_14)
   break;

  if (VAR_10->intval > 100) {
   VAR_10->intval = 100;
   break;
  }
  if (VAR_10->intval < 0)
   VAR_10->intval = 0;


  if (FUNC_3(VAR_11))
   break;





  VAR_14 = FUNC_1(VAR_11, &VAR_15);
  if (VAR_14) {

   VAR_14 = 0;
   break;
  }

  if (VAR_12->fullbatt_uV > 0 && VAR_15 >= VAR_12->fullbatt_uV &&
      !FUNC_3(VAR_11)) {
   VAR_10->intval = 100;
   break;
  }

  break;
 case 133:
  if (FUNC_4(VAR_11))
   VAR_10->intval = 1;
  else
   VAR_10->intval = 0;
  break;
 case 137:
  if (FUNC_5(VAR_11))
   VAR_10->intval = 1;
  else
   VAR_10->intval = 0;
  VAR_14 = 0;
  break;
 case 136:
  if (FUNC_3(VAR_11)) {
   VAR_13 = FUNC_6(
     VAR_11->desc->psy_fuel_gauge);
   if (!VAR_13) {
    VAR_14 = -VAR_1;
    break;
   }

   VAR_14 = FUNC_8(VAR_13,
      136,
      VAR_10);
   if (VAR_14) {
    VAR_10->intval = 1;
    VAR_14 = 0;
   } else {

    VAR_10->intval = (VAR_10->intval > 0) ?
      VAR_10->intval : 1;
   }
  } else {
   VAR_10->intval = 0;
  }
  break;
 default:
  return -VAR_0;
 }
 if (VAR_13)
  FUNC_9(VAR_13);
 return VAR_14;
}
