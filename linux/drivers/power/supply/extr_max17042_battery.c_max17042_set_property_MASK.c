
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
typedef int u32 ;
struct regmap {int dummy; } ;
struct power_supply {int dummy; } ;
struct max17042_chip {struct regmap* regmap; } ;
typedef int int8_t ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;


 struct max17042_chip* FUNC_0 (struct power_supply*) ;
 int FUNC_1 (struct regmap*,int ,int*) ;
 int FUNC_2 (struct regmap*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct power_supply *VAR_2,
       enum power_supply_property VAR_3,
       const union power_supply_propval *VAR_4)
{
 struct max17042_chip *VAR_5 = FUNC_0(VAR_2);
 struct regmap *VAR_6 = VAR_5->regmap;
 int VAR_7 = 0;
 u32 VAR_8;
 int8_t VAR_9;

 switch (VAR_3) {
 case 128:
  VAR_7 = FUNC_1(VAR_6, VAR_1, &VAR_8);
  if (VAR_7 < 0)
   return VAR_7;


  VAR_9 = VAR_4->intval / 10;

  if (VAR_9 >= (int8_t)(VAR_8 >> 8))
   VAR_9 = (int8_t)(VAR_8 >> 8) - 1;

  VAR_8 = (VAR_8 & 0xff00) + VAR_9;
  VAR_7 = FUNC_2(VAR_6, VAR_1, VAR_8);
  break;
 case 129:
  VAR_7 = FUNC_1(VAR_6, VAR_1, &VAR_8);
  if (VAR_7 < 0)
   return VAR_7;


  VAR_9 = VAR_4->intval / 10;

  if (VAR_9 <= (int8_t)(VAR_8 & 0xff))
   VAR_9 = (int8_t)(VAR_8 & 0xff) + 1;

  VAR_8 = (VAR_8 & 0xff) + (VAR_9 << 8);
  VAR_7 = FUNC_2(VAR_6, VAR_1, VAR_8);
  break;
 default:
  VAR_7 = -VAR_0;
 }

 return VAR_7;
}
