
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct power_supply_config {struct adp5061_state* drv_data; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;
struct adp5061_state {int psy; int regmap; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,char*) ;
 struct adp5061_state* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,int *,struct power_supply_config*) ;
 int FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (struct i2c_client*,struct adp5061_state*) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_5,
    const struct i2c_device_id *VAR_6)
{
 struct power_supply_config VAR_7 = {};
 struct adp5061_state *VAR_8;

 VAR_8 = FUNC_3(&VAR_5->dev, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->client = VAR_5;
 VAR_8->regmap = FUNC_5(VAR_5,
       &VAR_4);
 if (FUNC_0(VAR_8->regmap)) {
  FUNC_2(&VAR_5->dev, "Failed to initialize register map\n");
  return -VAR_0;
 }

 FUNC_6(VAR_5, VAR_8);
 VAR_7.drv_data = VAR_8;

 VAR_8->psy = FUNC_4(&VAR_5->dev,
          &VAR_3,
          &VAR_7);

 if (FUNC_0(VAR_8->psy)) {
  FUNC_2(&VAR_5->dev, "Failed to register power supply\n");
  return FUNC_1(VAR_8->psy);
 }

 return 0;
}
