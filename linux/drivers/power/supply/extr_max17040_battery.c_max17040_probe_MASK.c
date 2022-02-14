
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct power_supply_config {struct max17040_chip* drv_data; } ;
struct max17040_chip {int work; int battery; int pdata; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_4__ {int platform_data; } ;
struct i2c_client {TYPE_1__ dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 struct max17040_chip* FUNC_4 (TYPE_1__*,int,int ) ;
 int FUNC_5 (struct i2c_adapter*,int ) ;
 int FUNC_6 (struct i2c_client*,struct max17040_chip*) ;
 int VAR_5 ;
 int FUNC_7 (struct i2c_client*) ;
 int FUNC_8 (struct i2c_client*) ;
 int VAR_6 ;
 int FUNC_9 (TYPE_1__*,int *,struct power_supply_config*) ;
 int FUNC_10 (int ,int *,int ) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_8,
   const struct i2c_device_id *VAR_9)
{
 struct i2c_adapter *VAR_10 = VAR_8->adapter;
 struct power_supply_config VAR_11 = {};
 struct max17040_chip *VAR_12;

 if (!FUNC_5(VAR_10, VAR_3))
  return -VAR_0;

 VAR_12 = FUNC_4(&VAR_8->dev, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_12->client = VAR_8;
 VAR_12->pdata = VAR_8->dev.platform_data;

 FUNC_6(VAR_8, VAR_12);
 VAR_11.drv_data = VAR_12;

 VAR_12->battery = FUNC_9(&VAR_8->dev,
    &VAR_5, &VAR_11);
 if (FUNC_1(VAR_12->battery)) {
  FUNC_3(&VAR_8->dev, "failed: power supply register\n");
  return FUNC_2(VAR_12->battery);
 }

 FUNC_8(VAR_8);
 FUNC_7(VAR_8);

 FUNC_0(&VAR_12->work, VAR_6);
 FUNC_10(VAR_7, &VAR_12->work,
      VAR_4);

 return 0;
}
