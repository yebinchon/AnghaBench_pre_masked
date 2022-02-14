
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int strval; int intval; } ;
struct rt9455_info {int dummy; } ;
struct power_supply {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct rt9455_info* FUNC_0 (struct power_supply*) ;
 int FUNC_1 (struct rt9455_info*,union power_supply_propval*) ;
 int FUNC_2 (struct rt9455_info*,union power_supply_propval*) ;
 int FUNC_3 (struct rt9455_info*,union power_supply_propval*) ;
 int FUNC_4 (struct rt9455_info*,union power_supply_propval*) ;
 int FUNC_5 (struct rt9455_info*,union power_supply_propval*) ;
 int FUNC_6 (struct rt9455_info*,union power_supply_propval*) ;
 int FUNC_7 (struct rt9455_info*,union power_supply_propval*) ;
 int FUNC_8 (struct rt9455_info*,union power_supply_propval*) ;
 int FUNC_9 (struct rt9455_info*,union power_supply_propval*) ;

__attribute__((used)) static int FUNC_10(struct power_supply *VAR_4,
           enum power_supply_property VAR_5,
           union power_supply_propval *VAR_6)
{
 struct rt9455_info *VAR_7 = FUNC_0(VAR_4);

 switch (VAR_5) {
 case 128:
  return FUNC_6(VAR_7, VAR_6);
 case 134:
  return FUNC_4(VAR_7, VAR_6);
 case 130:
  return FUNC_1(VAR_7, VAR_6);
 case 131:
  return FUNC_5(VAR_7, VAR_6);
 case 138:
  return FUNC_2(VAR_7, VAR_6);
 case 137:
  return FUNC_3(VAR_7, VAR_6);
 case 136:
  return FUNC_8(VAR_7, VAR_6);
 case 135:
  return FUNC_9(VAR_7, VAR_6);
 case 129:
  VAR_6->intval = VAR_1;
  return 0;
 case 139:
  return FUNC_7(VAR_7, VAR_6);
 case 132:
  VAR_6->strval = VAR_3;
  return 0;
 case 133:
  VAR_6->strval = VAR_2;
  return 0;
 default:
  return -VAR_0;
 }
}
