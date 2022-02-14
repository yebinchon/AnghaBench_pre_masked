
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt5033_battery {int regmap; } ;
struct i2c_client {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;



 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 struct rt5033_battery* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int ,unsigned int,int*) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_7,
  enum power_supply_property VAR_8)
{
 struct rt5033_battery *VAR_9 = FUNC_0(VAR_7);
 unsigned int VAR_10, VAR_11;
 int VAR_12;
 u32 VAR_13, VAR_14;

 switch (VAR_8) {
 case 129:
  VAR_10 = VAR_5;
  VAR_11 = VAR_6;
  break;
 case 130:
  VAR_10 = VAR_1;
  VAR_11 = VAR_2;
  break;
 case 128:
  VAR_10 = VAR_3;
  VAR_11 = VAR_4;
  break;
 default:
  return -VAR_0;
 }

 FUNC_1(VAR_9->regmap, VAR_10, &VAR_13);
 FUNC_1(VAR_9->regmap, VAR_11, &VAR_14);

 VAR_12 = ((VAR_13 << 4) + (VAR_14 >> 4)) * 1250 / 1000;

 return VAR_12;
}
