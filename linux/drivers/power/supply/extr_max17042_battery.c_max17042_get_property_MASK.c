
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
typedef void* u64 ;
typedef int u32 ;
struct regmap {int dummy; } ;
struct power_supply {int dummy; } ;
struct max17042_chip {TYPE_1__* pdata; int chip_type; int init_complete; struct regmap* regmap; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;
struct TYPE_2__ {int r_sns; int temp_min; int temp_max; int enable_current_sense; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (void*,int) ;
 int FUNC_1 (struct max17042_chip*,int*) ;
 int FUNC_2 (struct max17042_chip*,int*) ;
 int FUNC_3 (struct max17042_chip*,int*) ;
 struct max17042_chip* FUNC_4 (struct power_supply*) ;
 int FUNC_5 (struct regmap*,int ,int*) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct power_supply *VAR_22,
       enum power_supply_property VAR_23,
       union power_supply_propval *VAR_24)
{
 struct max17042_chip *VAR_25 = FUNC_4(VAR_22);
 struct regmap *VAR_26 = VAR_25->regmap;
 int VAR_27;
 u32 VAR_28;
 u64 VAR_29;

 if (!VAR_25->init_complete)
  return -VAR_0;

 switch (VAR_23) {
 case 140:
  VAR_27 = FUNC_2(VAR_25, &VAR_24->intval);
  if (VAR_27 < 0)
   return VAR_27;
  break;
 case 142:
  VAR_27 = FUNC_5(VAR_26, VAR_13, &VAR_28);
  if (VAR_27 < 0)
   return VAR_27;

  if (VAR_28 & VAR_14)
   VAR_24->intval = 0;
  else
   VAR_24->intval = 1;
  break;
 case 139:
  VAR_24->intval = VAR_21;
  break;
 case 144:
  VAR_27 = FUNC_5(VAR_26, VAR_5, &VAR_28);
  if (VAR_27 < 0)
   return VAR_27;

  VAR_24->intval = VAR_28;
  break;
 case 132:
  VAR_27 = FUNC_5(VAR_26, VAR_8, &VAR_28);
  if (VAR_27 < 0)
   return VAR_27;

  VAR_24->intval = VAR_28 >> 8;
  VAR_24->intval *= 20000;
  break;
 case 131:
  VAR_27 = FUNC_5(VAR_26, VAR_8, &VAR_28);
  if (VAR_27 < 0)
   return VAR_27;

  VAR_24->intval = (VAR_28 & 0xff) * 20000;
  break;
 case 130:
  if (VAR_25->chip_type == VAR_19)
   VAR_27 = FUNC_5(VAR_26, VAR_17, &VAR_28);
  else
   VAR_27 = FUNC_5(VAR_26, VAR_18, &VAR_28);
  if (VAR_27 < 0)
   return VAR_27;

  VAR_24->intval = VAR_28 >> 7;
  VAR_24->intval *= 10000;
  break;
 case 129:
  VAR_27 = FUNC_5(VAR_26, VAR_16, &VAR_28);
  if (VAR_27 < 0)
   return VAR_27;

  VAR_24->intval = VAR_28 * 625 / 8;
  break;
 case 133:
  VAR_27 = FUNC_5(VAR_26, VAR_3, &VAR_28);
  if (VAR_27 < 0)
   return VAR_27;

  VAR_24->intval = VAR_28 * 625 / 8;
  break;
 case 128:
  VAR_27 = FUNC_5(VAR_26, VAR_9, &VAR_28);
  if (VAR_27 < 0)
   return VAR_27;

  VAR_24->intval = VAR_28 * 625 / 8;
  break;
 case 151:
  VAR_27 = FUNC_5(VAR_26, VAR_12, &VAR_28);
  if (VAR_27 < 0)
   return VAR_27;

  VAR_24->intval = VAR_28 >> 8;
  break;
 case 148:
  VAR_27 = FUNC_5(VAR_26, VAR_6, &VAR_28);
  if (VAR_27 < 0)
   return VAR_27;

  VAR_29 = VAR_28 * 5000000ll;
  FUNC_0(VAR_29, VAR_25->pdata->r_sns);
  VAR_24->intval = VAR_29;
  break;
 case 149:
  VAR_27 = FUNC_5(VAR_26, VAR_7, &VAR_28);
  if (VAR_27 < 0)
   return VAR_27;

  VAR_29 = VAR_28 * 5000000ll;
  FUNC_0(VAR_29, VAR_25->pdata->r_sns);
  VAR_24->intval = VAR_29;
  break;
 case 147:
  VAR_27 = FUNC_5(VAR_26, VAR_11, &VAR_28);
  if (VAR_27 < 0)
   return VAR_27;

  VAR_29 = VAR_28 * 5000000ll;
  FUNC_0(VAR_29, VAR_25->pdata->r_sns);
  VAR_24->intval = VAR_29;
  break;
 case 150:
  VAR_27 = FUNC_5(VAR_26, VAR_10, &VAR_28);
  if (VAR_27 < 0)
   return VAR_27;

  VAR_24->intval = VAR_28 * 1000 / 2;
  break;
 case 138:
  VAR_27 = FUNC_3(VAR_25, &VAR_24->intval);
  if (VAR_27 < 0)
   return VAR_27;
  break;
 case 136:
  VAR_27 = FUNC_5(VAR_26, VAR_15, &VAR_28);
  if (VAR_27 < 0)
   return VAR_27;

  VAR_24->intval = FUNC_6(VAR_28 & 0xff, 7) * 10;
  break;
 case 137:
  VAR_27 = FUNC_5(VAR_26, VAR_15, &VAR_28);
  if (VAR_27 < 0)
   return VAR_27;

  VAR_24->intval = FUNC_6(VAR_28 >> 8, 7) * 10;
  break;
 case 134:
  VAR_24->intval = VAR_25->pdata->temp_min;
  break;
 case 135:
  VAR_24->intval = VAR_25->pdata->temp_max;
  break;
 case 143:
  VAR_27 = FUNC_1(VAR_25, &VAR_24->intval);
  if (VAR_27 < 0)
   return VAR_27;
  break;
 case 141:
  VAR_24->intval = VAR_20;
  break;
 case 145:
  if (VAR_25->pdata->enable_current_sense) {
   VAR_27 = FUNC_5(VAR_26, VAR_4, &VAR_28);
   if (VAR_27 < 0)
    return VAR_27;

   VAR_24->intval = FUNC_6(VAR_28, 15);
   VAR_24->intval *= 1562500 / VAR_25->pdata->r_sns;
  } else {
   return -VAR_1;
  }
  break;
 case 146:
  if (VAR_25->pdata->enable_current_sense) {
   VAR_27 = FUNC_5(VAR_26, VAR_2, &VAR_28);
   if (VAR_27 < 0)
    return VAR_27;

   VAR_24->intval = FUNC_6(VAR_28, 15);
   VAR_24->intval *= 1562500 / VAR_25->pdata->r_sns;
  } else {
   return -VAR_1;
  }
  break;
 default:
  return -VAR_1;
 }
 return 0;
}
