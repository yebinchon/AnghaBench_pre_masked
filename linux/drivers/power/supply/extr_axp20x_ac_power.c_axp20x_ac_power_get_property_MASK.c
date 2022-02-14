
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct power_supply {int dummy; } ;
struct axp20x_ac_power {int regmap; int acin_i; int acin_v; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;







 int FUNC_2 (int ,int*) ;
 struct axp20x_ac_power* FUNC_3 (struct power_supply*) ;
 int FUNC_4 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_5(struct power_supply *VAR_7,
     enum power_supply_property VAR_8,
     union power_supply_propval *VAR_9)
{
 struct axp20x_ac_power *VAR_10 = FUNC_3(VAR_7);
 int VAR_11, VAR_12;

 switch (VAR_8) {
 case 133:
  VAR_11 = FUNC_4(VAR_10->regmap, VAR_0, &VAR_12);
  if (VAR_11)
   return VAR_11;

  if (VAR_12 & VAR_2) {
   VAR_9->intval = VAR_5;
   return 0;
  }

  VAR_9->intval = VAR_6;
  return 0;

 case 130:
  VAR_11 = FUNC_4(VAR_10->regmap, VAR_0, &VAR_12);
  if (VAR_11)
   return VAR_11;

  VAR_9->intval = !!(VAR_12 & VAR_2);
  return 0;

 case 131:
  VAR_11 = FUNC_4(VAR_10->regmap, VAR_0, &VAR_12);
  if (VAR_11)
   return VAR_11;

  VAR_9->intval = !!(VAR_12 & VAR_1);
  return 0;

 case 128:
  VAR_11 = FUNC_2(VAR_10->acin_v, &VAR_9->intval);
  if (VAR_11)
   return VAR_11;


  VAR_9->intval *= 1000;

  return 0;

 case 134:
  VAR_11 = FUNC_2(VAR_10->acin_i, &VAR_9->intval);
  if (VAR_11)
   return VAR_11;


  VAR_9->intval *= 1000;

  return 0;

 case 129:
  VAR_11 = FUNC_4(VAR_10->regmap, VAR_3, &VAR_12);
  if (VAR_11)
   return VAR_11;

  VAR_9->intval = FUNC_1(VAR_12);

  return 0;

 case 132:
  VAR_11 = FUNC_4(VAR_10->regmap, VAR_3, &VAR_12);
  if (VAR_11)
   return VAR_11;

  VAR_9->intval = FUNC_0(VAR_12);

  if (VAR_9->intval > 4000000)
   VAR_9->intval = 4000000;

  return 0;

 default:
  return -VAR_4;
 }

 return -VAR_4;
}
