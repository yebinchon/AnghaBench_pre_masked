
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {void* intval; int strval; } ;
struct power_supply {int dummy; } ;
struct bq24257_state {int fault; void* power_good; int status; } ;
struct TYPE_2__ {size_t ichg; size_t vbat; size_t iterm; } ;
struct bq24257_device {size_t chip; TYPE_1__ init_data; int lock; struct bq24257_state state; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct bq24257_device*,union power_supply_propval*) ;
 void** VAR_17 ;
 void** VAR_18 ;
 void** VAR_19 ;
 int * VAR_20 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct bq24257_device* FUNC_3 (struct power_supply*) ;

__attribute__((used)) static int FUNC_4(struct power_supply *VAR_21,
          enum power_supply_property VAR_22,
          union power_supply_propval *VAR_23)
{
 struct bq24257_device *VAR_24 = FUNC_3(VAR_21);
 struct bq24257_state VAR_25;

 FUNC_1(&VAR_24->lock);
 VAR_25 = VAR_24->state;
 FUNC_2(&VAR_24->lock);

 switch (VAR_22) {
 case 128:
  if (!VAR_25.power_good)
   VAR_23->intval = VAR_10;
  else if (VAR_25.status == VAR_16)
   VAR_23->intval = VAR_12;
  else if (VAR_25.status == VAR_15)
   VAR_23->intval = VAR_9;
  else if (VAR_25.status == VAR_14)
   VAR_23->intval = VAR_11;
  else
   VAR_23->intval = VAR_13;
  break;

 case 131:
  VAR_23->strval = VAR_1;
  break;

 case 130:
  VAR_23->strval = VAR_20[VAR_24->chip];
  break;

 case 129:
  VAR_23->intval = VAR_25.power_good;
  break;

 case 133:
  switch (VAR_25.fault) {
  case 141:
   VAR_23->intval = VAR_4;
   break;

  case 142:
  case 144:
   VAR_23->intval = VAR_6;
   break;

  case 139:
  case 143:
   VAR_23->intval = VAR_5;
   break;

  case 140:
   VAR_23->intval = VAR_7;
   break;

  default:
   VAR_23->intval = VAR_8;
   break;
  }

  break;

 case 137:
  VAR_23->intval = VAR_17[VAR_24->init_data.ichg];
  break;

 case 136:
  VAR_23->intval = VAR_17[VAR_0 - 1];
  break;

 case 135:
  VAR_23->intval = VAR_19[VAR_24->init_data.vbat];
  break;

 case 134:
  VAR_23->intval = VAR_19[VAR_2 - 1];
  break;

 case 138:
  VAR_23->intval = VAR_18[VAR_24->init_data.iterm];
  break;

 case 132:
  return FUNC_0(VAR_24, VAR_23);

 default:
  return -VAR_3;
 }

 return 0;
}
