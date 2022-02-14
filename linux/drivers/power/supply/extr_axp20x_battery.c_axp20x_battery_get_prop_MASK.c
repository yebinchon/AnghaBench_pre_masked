
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
struct power_supply {int dummy; } ;
struct iio_channel {int dummy; } ;
struct axp20x_batt_ps {int max_ccc; struct iio_channel* batt_v; int regmap; TYPE_1__* data; struct iio_channel* batt_dischrg_i; struct iio_channel* batt_chrg_i; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;
struct TYPE_2__ {int (* get_max_voltage ) (struct axp20x_batt_ps*,int*) ;int has_fg_valid; } ;


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
 int FUNC_0 (struct axp20x_batt_ps*,int*) ;
 int FUNC_1 (struct iio_channel*,int*) ;
 struct axp20x_batt_ps* FUNC_2 (struct power_supply*) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (struct axp20x_batt_ps*,int*) ;

__attribute__((used)) static int FUNC_5(struct power_supply *VAR_17,
       enum power_supply_property VAR_18,
       union power_supply_propval *VAR_19)
{
 struct axp20x_batt_ps *VAR_20 = FUNC_2(VAR_17);
 struct iio_channel *VAR_21;
 int VAR_22 = 0, VAR_23, VAR_24;

 switch (VAR_18) {
 case 132:
 case 133:
  VAR_22 = FUNC_3(VAR_20->regmap, VAR_5,
      &VAR_23);
  if (VAR_22)
   return VAR_22;

  VAR_19->intval = !!(VAR_23 & VAR_4);
  break;

 case 131:
  VAR_22 = FUNC_3(VAR_20->regmap, VAR_2,
      &VAR_23);
  if (VAR_22)
   return VAR_22;

  if (VAR_23 & VAR_6) {
   VAR_19->intval = VAR_13;
   return 0;
  }

  VAR_22 = FUNC_1(VAR_20->batt_dischrg_i,
       &VAR_24);
  if (VAR_22)
   return VAR_22;

  if (VAR_24) {
   VAR_19->intval = VAR_14;
   return 0;
  }

  VAR_22 = FUNC_3(VAR_20->regmap, VAR_1, &VAR_24);
  if (VAR_22)
   return VAR_22;





  if ((VAR_24 & VAR_0) == 100)
   VAR_19->intval = VAR_15;
  else
   VAR_19->intval = VAR_16;
  break;

 case 134:
  VAR_22 = FUNC_3(VAR_20->regmap, VAR_5,
      &VAR_24);
  if (VAR_22)
   return VAR_22;

  if (VAR_24 & VAR_3) {
   VAR_19->intval = VAR_11;
   return 0;
  }

  VAR_19->intval = VAR_12;
  break;

 case 137:
  VAR_22 = FUNC_0(VAR_20,
        &VAR_19->intval);
  if (VAR_22)
   return VAR_22;
  break;

 case 136:
  VAR_19->intval = VAR_20->max_ccc;
  break;

 case 135:
  VAR_22 = FUNC_3(VAR_20->regmap, VAR_2,
      &VAR_23);
  if (VAR_22)
   return VAR_22;

  if (VAR_23 & VAR_6)
   VAR_21 = VAR_20->batt_chrg_i;
  else
   VAR_21 = VAR_20->batt_dischrg_i;

  VAR_22 = FUNC_1(VAR_21, &VAR_19->intval);
  if (VAR_22)
   return VAR_22;


  VAR_19->intval *= 1000;
  break;

 case 138:

  VAR_22 = FUNC_3(VAR_20->regmap, VAR_5,
      &VAR_23);
  if (VAR_22)
   return VAR_22;

  if (!(VAR_23 & VAR_4)) {
   VAR_19->intval = 100;
   return 0;
  }

  VAR_22 = FUNC_3(VAR_20->regmap, VAR_1, &VAR_23);
  if (VAR_22)
   return VAR_22;

  if (VAR_20->data->has_fg_valid && !(VAR_23 & VAR_9))
   return -VAR_10;





  VAR_19->intval = VAR_23 & VAR_0;
  break;

 case 130:
  return VAR_20->data->get_max_voltage(VAR_20,
         &VAR_19->intval);

 case 129:
  VAR_22 = FUNC_3(VAR_20->regmap, VAR_7, &VAR_23);
  if (VAR_22)
   return VAR_22;

  VAR_19->intval = 2600000 + 100000 * (VAR_23 & VAR_8);
  break;

 case 128:
  VAR_22 = FUNC_1(VAR_20->batt_v,
       &VAR_19->intval);
  if (VAR_22)
   return VAR_22;


  VAR_19->intval *= 1000;
  break;

 default:
  return -VAR_10;
 }

 return 0;
}
