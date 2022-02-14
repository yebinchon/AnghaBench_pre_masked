
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
typedef scalar_t__ u32 ;
struct power_supply {int dummy; } ;
struct TYPE_4__ {int offset; scalar_t__ accumulator; scalar_t__ sample; } ;
struct cpcap_battery_state_data {int temperature; int current_ua; int counter_uah; int voltage; TYPE_1__ cc; } ;
struct TYPE_5__ {int technology; int voltage_max_design; int voltage_min_design; int charge_full_design; } ;
struct TYPE_6__ {TYPE_2__ info; } ;
struct cpcap_battery_ddata {TYPE_3__ config; } ;
typedef int s64 ;
typedef scalar_t__ s32 ;
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
 void* FUNC_0 (struct cpcap_battery_ddata*) ;
 void* FUNC_1 (struct cpcap_battery_ddata*,scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (struct cpcap_battery_ddata*) ;
 int FUNC_3 (struct cpcap_battery_ddata*) ;
 struct cpcap_battery_state_data* FUNC_4 (struct cpcap_battery_ddata*) ;
 struct cpcap_battery_state_data* FUNC_5 (struct cpcap_battery_ddata*) ;
 int FUNC_6 (struct cpcap_battery_ddata*) ;
 void* FUNC_7 (int,int) ;
 struct cpcap_battery_ddata* FUNC_8 (struct power_supply*) ;

__attribute__((used)) static int FUNC_9(struct power_supply *VAR_12,
          enum power_supply_property VAR_13,
          union power_supply_propval *VAR_14)
{
 struct cpcap_battery_ddata *VAR_15 = FUNC_8(VAR_12);
 struct cpcap_battery_state_data *VAR_16, *VAR_17;
 u32 VAR_18;
 s32 VAR_19;
 int VAR_20;
 s64 VAR_21;

 VAR_20 = FUNC_6(VAR_15);
 if (VAR_20 < 0)
  return VAR_20;

 VAR_16 = FUNC_4(VAR_15);
 VAR_17 = FUNC_5(VAR_15);

 switch (VAR_13) {
 case 135:
  if (VAR_16->temperature > VAR_0)
   VAR_14->intval = 1;
  else
   VAR_14->intval = 0;
  break;
 case 133:
  if (FUNC_2(VAR_15)) {
   VAR_14->intval = VAR_11;
   break;
  }
  if (FUNC_0(VAR_15) < 0)
   VAR_14->intval = VAR_9;
  else
   VAR_14->intval = VAR_10;
  break;
 case 132:
  VAR_14->intval = VAR_15->config.info.technology;
  break;
 case 128:
  VAR_14->intval = FUNC_3(VAR_15);
  break;
 case 130:
  VAR_14->intval = VAR_15->config.info.voltage_max_design;
  break;
 case 129:
  VAR_14->intval = VAR_15->config.info.voltage_min_design;
  break;
 case 139:
  VAR_18 = VAR_16->cc.sample - VAR_17->cc.sample;
  if (!VAR_18) {
   VAR_14->intval = FUNC_0(VAR_15);
   break;
  }
  VAR_19 = VAR_16->cc.accumulator - VAR_17->cc.accumulator;
  VAR_14->intval = FUNC_1(VAR_15, VAR_18,
           VAR_19,
           VAR_16->cc.offset);
  break;
 case 138:
  VAR_14->intval = VAR_16->current_ua;
  break;
 case 141:
  VAR_14->intval = VAR_16->counter_uah;
  break;
 case 136:
  VAR_21 = (VAR_16->voltage / 10000) * VAR_16->current_ua;
  VAR_14->intval = FUNC_7(VAR_21, 100);
  break;
 case 137:
  VAR_18 = VAR_16->cc.sample - VAR_17->cc.sample;
  if (!VAR_18) {
   VAR_21 = FUNC_0(VAR_15);
   VAR_21 *= (VAR_16->voltage / 10000);
   VAR_14->intval = FUNC_7(VAR_21, 100);
   break;
  }
  VAR_19 = VAR_16->cc.accumulator - VAR_17->cc.accumulator;
  VAR_21 = FUNC_1(VAR_15, VAR_18, VAR_19,
          VAR_16->cc.offset);
  VAR_21 *= ((VAR_16->voltage + VAR_17->voltage) / 20000);
  VAR_14->intval = FUNC_7(VAR_21, 100);
  break;
 case 142:
  if (FUNC_2(VAR_15))
   VAR_14->intval = VAR_3;
  else if (VAR_16->voltage >= 3750000)
   VAR_14->intval = VAR_4;
  else if (VAR_16->voltage >= 3300000)
   VAR_14->intval = VAR_6;
  else if (VAR_16->voltage > 3100000)
   VAR_14->intval = VAR_5;
  else if (VAR_16->voltage <= 3100000)
   VAR_14->intval = VAR_2;
  else
   VAR_14->intval = VAR_7;
  break;
 case 140:
  VAR_14->intval = VAR_15->config.info.charge_full_design;
  break;
 case 134:
  VAR_14->intval = VAR_8;
  break;
 case 131:
  VAR_14->intval = VAR_16->temperature;
  break;
 default:
  return -VAR_1;
 }

 return 0;
}
