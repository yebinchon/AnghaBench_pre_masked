
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt5033_battery {int regmap; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 struct rt5033_battery* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_1)
{
 struct rt5033_battery *VAR_2 = FUNC_0(VAR_1);
 u32 VAR_3;

 FUNC_1(VAR_2->regmap, VAR_0, &VAR_3);

 return VAR_3;
}
