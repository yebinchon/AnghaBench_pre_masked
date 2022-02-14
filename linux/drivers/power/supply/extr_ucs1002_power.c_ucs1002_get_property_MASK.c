
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int strval; int intval; } ;
struct ucs1002_info {int present; } ;
struct power_supply {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;
 struct ucs1002_info* FUNC_0 (struct power_supply*) ;
 int FUNC_1 (struct ucs1002_info*,union power_supply_propval*) ;
 int FUNC_2 (struct ucs1002_info*,union power_supply_propval*) ;
 int FUNC_3 (struct ucs1002_info*,union power_supply_propval*) ;
 int FUNC_4 (struct ucs1002_info*,union power_supply_propval*) ;
 int FUNC_5 (struct ucs1002_info*,union power_supply_propval*) ;
 int FUNC_6 (struct ucs1002_info*,union power_supply_propval*) ;

__attribute__((used)) static int FUNC_7(struct power_supply *VAR_2,
    enum power_supply_property VAR_3,
    union power_supply_propval *VAR_4)
{
 struct ucs1002_info *VAR_5 = FUNC_0(VAR_2);

 switch (VAR_3) {
 case 130:
  return FUNC_5(VAR_5, VAR_4);
 case 135:
  return FUNC_1(VAR_5, VAR_4);
 case 133:
  return FUNC_2(VAR_5, VAR_4);
 case 134:
  return FUNC_4(VAR_5, VAR_4);
 case 128:
  return FUNC_6(VAR_5, VAR_4);
 case 132:
  return FUNC_3(VAR_5, VAR_4);
 case 129:
  VAR_4->intval = VAR_5->present;
  return 0;
 case 131:
  VAR_4->strval = VAR_1;
  return 0;
 default:
  return -VAR_0;
 }
}
