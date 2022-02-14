
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct power_supply {int dummy; } ;
struct bq24735 {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bq24735*) ;
 int FUNC_1 (struct bq24735*) ;
 struct bq24735* FUNC_2 (struct power_supply*) ;

__attribute__((used)) static int FUNC_3(struct power_supply *VAR_4,
     enum power_supply_property VAR_5,
     union power_supply_propval *VAR_6)
{
 struct bq24735 *VAR_7 = FUNC_2(VAR_4);

 switch (VAR_5) {
 case 129:
  VAR_6->intval = FUNC_1(VAR_7) ? 1 : 0;
  break;
 case 128:
  switch (FUNC_0(VAR_7)) {
  case 1:
   VAR_6->intval = VAR_1;
   break;
  case 0:
   VAR_6->intval = VAR_2;
   break;
  default:
   VAR_6->intval = VAR_3;
   break;
  }
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
