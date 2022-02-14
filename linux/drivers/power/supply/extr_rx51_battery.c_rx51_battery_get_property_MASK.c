
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct rx51_device_info {int dummy; } ;
struct power_supply {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;






 int VAR_3 ;
 struct rx51_device_info* FUNC_0 (struct power_supply*) ;
 int FUNC_1 (struct rx51_device_info*) ;
 int FUNC_2 (struct rx51_device_info*) ;
 int FUNC_3 (struct rx51_device_info*) ;

__attribute__((used)) static int FUNC_4(struct power_supply *VAR_4,
     enum power_supply_property VAR_5,
     union power_supply_propval *VAR_6)
{
 struct rx51_device_info *VAR_7 = FUNC_0(VAR_4);

 switch (VAR_5) {
 case 131:
  VAR_6->intval = VAR_3;
  break;
 case 129:
  VAR_6->intval = 4200000;
  break;
 case 132:
  VAR_6->intval = FUNC_3(VAR_7) ? 1 : 0;
  break;
 case 128:
  VAR_6->intval = FUNC_3(VAR_7);
  break;
 case 130:
  VAR_6->intval = FUNC_2(VAR_7);
  break;
 case 133:
  VAR_6->intval = FUNC_1(VAR_7);
  break;
 default:
  return -VAR_0;
 }

 if (VAR_6->intval == VAR_1 || VAR_6->intval == VAR_2)
  return -VAR_0;

 return 0;
}
