
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {long intval; } ;
struct power_supply {int dummy; } ;
struct ds2760_device_info {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;


 int FUNC_0 (struct ds2760_device_info*,long) ;
 int FUNC_1 (struct ds2760_device_info*,long) ;
 struct ds2760_device_info* FUNC_2 (struct power_supply*) ;

__attribute__((used)) static int FUNC_3(struct power_supply *VAR_1,
           enum power_supply_property VAR_2,
           const union power_supply_propval *VAR_3)
{
 struct ds2760_device_info *VAR_4 = FUNC_2(VAR_1);

 switch (VAR_2) {
 case 129:

  FUNC_1(VAR_4, VAR_3->intval / 1000L);
  break;

 case 128:

  FUNC_0(VAR_4, VAR_3->intval);
  break;

 default:
  return -VAR_0;
 }

 return 0;
}
