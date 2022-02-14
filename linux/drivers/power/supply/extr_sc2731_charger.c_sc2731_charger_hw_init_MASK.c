
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sc2731_charger_info {int regmap; scalar_t__ base; int psy_usb; int dev; } ;
struct power_supply_battery_info {int charge_term_current_ua; int constant_charge_voltage_max_uv; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,struct power_supply_battery_info*) ;
 int FUNC_2 (int ,struct power_supply_battery_info*) ;
 int FUNC_3 (int ,scalar_t__,int,int) ;

__attribute__((used)) static int FUNC_4(struct sc2731_charger_info *VAR_9)
{
 struct power_supply_battery_info VAR_10 = { };
 u32 VAR_11, VAR_12, VAR_13, VAR_14;
 int VAR_15;


 VAR_15 = FUNC_3(VAR_9->regmap, VAR_3,
     VAR_0, VAR_0);
 if (VAR_15)
  return VAR_15;

 VAR_15 = FUNC_1(VAR_9->psy_usb, &VAR_10);
 if (VAR_15) {
  FUNC_0(VAR_9->dev, "no battery information is supplied\n");






  VAR_13 = 0x2;
  VAR_14 = 0x1;
 } else {
  VAR_11 = VAR_10.charge_term_current_ua / 1000;

  if (VAR_11 <= 90)
   VAR_13 = 0;
  else if (VAR_11 >= 265)
   VAR_13 = 0x7;
  else
   VAR_13 = ((VAR_11 - 90) / 25) + 1;

  VAR_12 = VAR_10.constant_charge_voltage_max_uv / 1000;

  if (VAR_12 > 4500)
   VAR_12 = 4500;

  if (VAR_12 > 4200)
   VAR_14 = (VAR_12 - 4200) / 100;
  else
   VAR_14 = 0;

  FUNC_2(VAR_9->psy_usb, &VAR_10);
 }


 VAR_15 = FUNC_3(VAR_9->regmap, VAR_9->base + VAR_2,
     VAR_4, VAR_13);
 if (VAR_15)
  goto error;


 VAR_15 = FUNC_3(VAR_9->regmap, VAR_9->base + VAR_1,
     VAR_7 |
     VAR_5,
     (VAR_14 << VAR_8) |
     (0x6 << VAR_6));
 if (VAR_15)
  goto error;

 return 0;

error:
 FUNC_3(VAR_9->regmap, VAR_3, VAR_0, 0);
 return VAR_15;
}
