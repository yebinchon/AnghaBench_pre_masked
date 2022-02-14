
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct power_supply {int dummy; } ;
struct axp20x_usb_power {int regmap; int axp20x_id; int vbus_i; int vbus_v; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (unsigned int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;







 int FUNC_2 (struct axp20x_usb_power*,int*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct axp20x_usb_power*,int*) ;
 int FUNC_5 (int ,int*) ;
 struct axp20x_usb_power* FUNC_6 (struct power_supply*) ;
 int FUNC_7 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_8(struct power_supply *VAR_15,
 enum power_supply_property VAR_16, union power_supply_propval *VAR_17)
{
 struct axp20x_usb_power *VAR_18 = FUNC_6(VAR_15);
 unsigned int VAR_19, VAR_20;
 int VAR_21;

 switch (VAR_16) {
 case 129:
  VAR_21 = FUNC_7(VAR_18->regmap, VAR_6, &VAR_20);
  if (VAR_21)
   return VAR_21;

  VAR_17->intval = FUNC_0(VAR_20);
  return 0;
 case 128:
  if (FUNC_1(VAR_10)) {
   VAR_21 = FUNC_5(VAR_18->vbus_v,
        &VAR_17->intval);
   if (VAR_21)
    return VAR_21;





   VAR_17->intval *= 1000;
   return 0;
  }

  VAR_21 = FUNC_3(VAR_18->regmap,
       VAR_8, 12);
  if (VAR_21 < 0)
   return VAR_21;

  VAR_17->intval = VAR_21 * 1700;
  return 0;
 case 134:
  if (VAR_18->axp20x_id == VAR_9)
   return FUNC_4(VAR_18, &VAR_17->intval);
  return FUNC_2(VAR_18, &VAR_17->intval);
 case 133:
  if (FUNC_1(VAR_10)) {
   VAR_21 = FUNC_5(VAR_18->vbus_i,
        &VAR_17->intval);
   if (VAR_21)
    return VAR_21;





   VAR_17->intval *= 1000;
   return 0;
  }

  VAR_21 = FUNC_3(VAR_18->regmap,
       VAR_7, 12);
  if (VAR_21 < 0)
   return VAR_21;

  VAR_17->intval = VAR_21 * 375;
  return 0;
 default:
  break;
 }


 VAR_21 = FUNC_7(VAR_18->regmap, VAR_1, &VAR_19);
 if (VAR_21)
  return VAR_21;

 switch (VAR_16) {
 case 132:
  if (!(VAR_19 & VAR_2)) {
   VAR_17->intval = VAR_13;
   break;
  }

  VAR_17->intval = VAR_12;

  if (VAR_18->axp20x_id == VAR_0) {
   VAR_21 = FUNC_7(VAR_18->regmap,
       VAR_4, &VAR_20);
   if (VAR_21)
    return VAR_21;

   if (!(VAR_20 & VAR_5))
    VAR_17->intval =
     VAR_14;
  }
  break;
 case 130:
  VAR_17->intval = !!(VAR_19 & VAR_2);
  break;
 case 131:
  VAR_17->intval = !!(VAR_19 & VAR_3);
  break;
 default:
  return -VAR_11;
 }

 return 0;
}
