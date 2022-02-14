
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; int strval; } ;
struct power_supply {int dummy; } ;
struct pmu_battery_info {int flags; int charge; int max_charge; int amperage; int voltage; int time_remaining; } ;
struct pmu_battery_dev {struct pmu_battery_info* pbi; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct pmu_battery_info*) ;
 int VAR_7 ;
 struct pmu_battery_dev* FUNC_1 (struct power_supply*) ;

__attribute__((used)) static int FUNC_2(struct power_supply *VAR_8,
    enum power_supply_property VAR_9,
    union power_supply_propval *VAR_10)
{
 struct pmu_battery_dev *VAR_11 = FUNC_1(VAR_8);
 struct pmu_battery_info *VAR_12 = VAR_11->pbi;

 switch (VAR_9) {
 case 130:
  if (VAR_12->flags & VAR_1)
   VAR_10->intval = VAR_4;
  else if (VAR_7 & VAR_3)
   VAR_10->intval = VAR_6;
  else
   VAR_10->intval = VAR_5;
  break;
 case 131:
  VAR_10->intval = !!(VAR_12->flags & VAR_2);
  break;
 case 132:
  VAR_10->strval = FUNC_0(VAR_12);
  break;
 case 134:
  VAR_10->intval = VAR_12->charge * 1000;
  break;
 case 133:
  VAR_10->intval = VAR_12->max_charge * 1000;
  break;
 case 135:
  VAR_10->intval = VAR_12->amperage * 1000;
  break;
 case 128:
  VAR_10->intval = VAR_12->voltage * 1000;
  break;
 case 129:
  VAR_10->intval = VAR_12->time_remaining;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
