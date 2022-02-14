
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union power_supply_propval {int intval; int strval; } ;
struct power_supply {int dummy; } ;
struct TYPE_3__ {scalar_t__ flags; int health; int power_avg; int energy; int cycle_count; int charge_full; int time_to_full; int time_to_empty_avg; int time_to_empty; int temperature; int capacity; } ;
struct TYPE_4__ {int work; } ;
struct bq27xxx_device_info {TYPE_1__ cache; int charge_design_full; int lock; TYPE_2__ work; scalar_t__ last_update; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bq27xxx_device_info*,union power_supply_propval*) ;
 int FUNC_1 (struct bq27xxx_device_info*,union power_supply_propval*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct bq27xxx_device_info*) ;
 int FUNC_4 (struct bq27xxx_device_info*,union power_supply_propval*) ;
 int FUNC_5 (struct bq27xxx_device_info*,union power_supply_propval*) ;
 int FUNC_6 (int ,union power_supply_propval*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct bq27xxx_device_info* FUNC_10 (struct power_supply*) ;
 scalar_t__ FUNC_11 (scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct power_supply *VAR_5,
     enum power_supply_property VAR_6,
     union power_supply_propval *VAR_7)
{
 int VAR_8 = 0;
 struct bq27xxx_device_info *VAR_9 = FUNC_10(VAR_5);

 FUNC_8(&VAR_9->lock);
 if (FUNC_11(VAR_9->last_update + 5 * VAR_3)) {
  FUNC_7(&VAR_9->work);
  FUNC_2(&VAR_9->work.work);
 }
 FUNC_9(&VAR_9->lock);

 if (VAR_6 != 136 && VAR_9->cache.flags < 0)
  return -VAR_2;

 switch (VAR_6) {
 case 135:
  VAR_8 = FUNC_4(VAR_9, VAR_7);
  break;
 case 128:
  VAR_8 = FUNC_5(VAR_9, VAR_7);
  break;
 case 136:
  VAR_7->intval = VAR_9->cache.flags < 0 ? 0 : 1;
  break;
 case 143:
  VAR_8 = FUNC_1(VAR_9, VAR_7);
  break;
 case 148:
  VAR_8 = FUNC_6(VAR_9->cache.capacity, VAR_7);
  break;
 case 147:
  VAR_8 = FUNC_0(VAR_9, VAR_7);
  break;
 case 133:
  VAR_8 = FUNC_6(VAR_9->cache.temperature, VAR_7);
  if (VAR_8 == 0)
   VAR_7->intval -= 2731;
  break;
 case 131:
  VAR_8 = FUNC_6(VAR_9->cache.time_to_empty, VAR_7);
  break;
 case 132:
  VAR_8 = FUNC_6(VAR_9->cache.time_to_empty_avg, VAR_7);
  break;
 case 130:
  VAR_8 = FUNC_6(VAR_9->cache.time_to_full, VAR_7);
  break;
 case 134:
  VAR_7->intval = VAR_4;
  break;
 case 144:
  VAR_8 = FUNC_6(FUNC_3(VAR_9), VAR_7);
  break;
 case 146:
  VAR_8 = FUNC_6(VAR_9->cache.charge_full, VAR_7);
  break;
 case 145:
  VAR_8 = FUNC_6(VAR_9->charge_design_full, VAR_7);
  break;




 case 141:
 case 129:
  return -VAR_1;
 case 142:
  VAR_8 = FUNC_6(VAR_9->cache.cycle_count, VAR_7);
  break;
 case 140:
  VAR_8 = FUNC_6(VAR_9->cache.energy, VAR_7);
  break;
 case 137:
  VAR_8 = FUNC_6(VAR_9->cache.power_avg, VAR_7);
  break;
 case 139:
  VAR_8 = FUNC_6(VAR_9->cache.health, VAR_7);
  break;
 case 138:
  VAR_7->strval = VAR_0;
  break;
 default:
  return -VAR_1;
 }

 return VAR_8;
}
