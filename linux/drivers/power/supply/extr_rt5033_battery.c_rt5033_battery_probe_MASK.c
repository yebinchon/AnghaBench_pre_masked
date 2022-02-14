
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt5033_battery {int psy; int regmap; struct i2c_client* client; } ;
struct power_supply_config {struct rt5033_battery* drv_data; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 struct rt5033_battery* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (struct i2c_client*,int *) ;
 int FUNC_5 (struct i2c_adapter*,int ) ;
 int FUNC_6 (struct i2c_client*,struct rt5033_battery*) ;
 int FUNC_7 (int *,int *,struct power_supply_config*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_6,
  const struct i2c_device_id *VAR_7)
{
 struct i2c_adapter *VAR_8 = VAR_6->adapter;
 struct power_supply_config VAR_9 = {};
 struct rt5033_battery *VAR_10;
 u32 VAR_11;

 if (!FUNC_5(VAR_8, VAR_3))
  return -VAR_1;

 VAR_10 = FUNC_3(&VAR_6->dev, sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->client = VAR_6;
 VAR_10->regmap = FUNC_4(VAR_6,
   &VAR_5);
 if (FUNC_0(VAR_10->regmap)) {
  FUNC_2(&VAR_6->dev, "Failed to initialize regmap\n");
  return -VAR_0;
 }

 FUNC_6(VAR_6, VAR_10);
 VAR_9.drv_data = VAR_10;

 VAR_10->psy = FUNC_7(&VAR_6->dev,
          &VAR_4, &VAR_9);
 if (FUNC_0(VAR_10->psy)) {
  FUNC_2(&VAR_6->dev, "Failed to register power supply\n");
  VAR_11 = FUNC_1(VAR_10->psy);
  return VAR_11;
 }

 return 0;
}
