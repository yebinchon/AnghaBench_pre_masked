
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; int strval; } ;
struct power_supply {int dummy; } ;
struct compal_data {int bat_serial_number; int bat_manufacturer_name; int bat_model_name; } ;
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
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 struct compal_data* FUNC_9 (struct power_supply*) ;

__attribute__((used)) static int FUNC_10(struct power_supply *VAR_12,
    enum power_supply_property VAR_13,
    union power_supply_propval *VAR_14)
{
 struct compal_data *VAR_15 = FUNC_9(VAR_12);

 switch (VAR_13) {
 case 133:
  VAR_14->intval = FUNC_3();
  break;
 case 139:
  VAR_14->intval = FUNC_1();
  break;
 case 135:
  VAR_14->intval = FUNC_2();
  break;
 case 132:
  VAR_14->intval = FUNC_4();
  break;
 case 129:
  VAR_14->intval = FUNC_7(VAR_10) * 1000;
  break;
 case 128:
  VAR_14->intval = FUNC_7(VAR_11) * 1000;
  break;
 case 140:
  VAR_14->intval = FUNC_5(VAR_6) * 1000;
  break;
 case 141:
  VAR_14->intval = FUNC_5(VAR_5) * 1000;
  break;
 case 136:
  VAR_14->intval = FUNC_8(VAR_7) * 1000000;
  break;
 case 143:
  VAR_14->intval = FUNC_7(VAR_1) * 1000;
  break;
 case 142:
  VAR_14->intval = FUNC_7(VAR_4) * 1000;
  break;
 case 145:
  VAR_14->intval = FUNC_8(VAR_2);
  break;
 case 144:
  VAR_14->intval = VAR_3;
  break;
 case 147:
  VAR_14->intval = FUNC_8(VAR_0);
  break;
 case 146:
  VAR_14->intval = FUNC_0();
  break;





 case 131:
  VAR_14->intval = ((222 - (int)FUNC_8(VAR_8)) * 1000) >> 8;
  break;
 case 130:
  VAR_14->intval = FUNC_6(VAR_9) * 10;
  break;

 case 137:
  VAR_14->strval = VAR_15->bat_model_name;
  break;
 case 138:
  VAR_14->strval = VAR_15->bat_manufacturer_name;
  break;
 case 134:
  VAR_14->strval = VAR_15->bat_serial_number;
  break;
 default:
  break;
 }
 return 0;
}
