
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct power_supply_battery_info {int voltage_min_design_uv; int voltage_max_design_uv; } ;
struct power_supply {int dummy; } ;
struct ingenic_battery {int channel; struct power_supply_battery_info info; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (int ,int*) ;
 struct ingenic_battery* FUNC_1 (struct power_supply*) ;

__attribute__((used)) static int FUNC_2(struct power_supply *VAR_4,
     enum power_supply_property VAR_5,
     union power_supply_propval *VAR_6)
{
 struct ingenic_battery *VAR_7 = FUNC_1(VAR_4);
 struct power_supply_battery_info *VAR_8 = &VAR_7->info;
 int VAR_9;

 switch (VAR_5) {
 case 131:
  VAR_9 = FUNC_0(VAR_7->channel, &VAR_6->intval);
  VAR_6->intval *= 1000;
  if (VAR_6->intval < VAR_8->voltage_min_design_uv)
   VAR_6->intval = VAR_1;
  else if (VAR_6->intval > VAR_8->voltage_max_design_uv)
   VAR_6->intval = VAR_3;
  else
   VAR_6->intval = VAR_2;
  return VAR_9;
 case 128:
  VAR_9 = FUNC_0(VAR_7->channel, &VAR_6->intval);
  VAR_6->intval *= 1000;
  return VAR_9;
 case 129:
  VAR_6->intval = VAR_8->voltage_min_design_uv;
  return 0;
 case 130:
  VAR_6->intval = VAR_8->voltage_max_design_uv;
  return 0;
 default:
  return -VAR_0;
 };
}
