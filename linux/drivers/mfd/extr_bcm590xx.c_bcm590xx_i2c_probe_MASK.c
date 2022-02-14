
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int dummy; } ;
struct i2c_client {int addr; int dev; int adapter; } ;
struct bcm590xx {struct i2c_client* i2c_sec; struct i2c_client* regmap_sec; struct i2c_client* regmap_pri; struct i2c_client* i2c_pri; int * dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,char*,...) ;
 struct bcm590xx* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,int,int ,int ,int *,int ,int *) ;
 void* FUNC_7 (struct i2c_client*,int *) ;
 struct i2c_client* FUNC_8 (int ,int) ;
 int FUNC_9 (struct i2c_client*,struct bcm590xx*) ;
 int FUNC_10 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_5,
         const struct i2c_device_id *VAR_6)
{
 struct bcm590xx *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_5(&VAR_5->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_9(VAR_5, VAR_7);
 VAR_7->dev = &VAR_5->dev;
 VAR_7->i2c_pri = VAR_5;

 VAR_7->regmap_pri = FUNC_7(VAR_5,
       &VAR_3);
 if (FUNC_2(VAR_7->regmap_pri)) {
  VAR_8 = FUNC_3(VAR_7->regmap_pri);
  FUNC_4(&VAR_5->dev, "primary regmap init failed: %d\n", VAR_8);
  return VAR_8;
 }


 VAR_7->i2c_sec = FUNC_8(VAR_5->adapter,
       VAR_5->addr | FUNC_1(2));
 if (FUNC_2(VAR_7->i2c_sec)) {
  FUNC_4(&VAR_5->dev, "failed to add secondary I2C device\n");
  return FUNC_3(VAR_7->i2c_sec);
 }
 FUNC_9(VAR_7->i2c_sec, VAR_7);

 VAR_7->regmap_sec = FUNC_7(VAR_7->i2c_sec,
      &VAR_4);
 if (FUNC_2(VAR_7->regmap_sec)) {
  VAR_8 = FUNC_3(VAR_7->regmap_sec);
  FUNC_4(&VAR_7->i2c_sec->dev,
   "secondary regmap init failed: %d\n", VAR_8);
  goto err;
 }

 VAR_8 = FUNC_6(&VAR_5->dev, -1, VAR_2,
       FUNC_0(VAR_2), ((void*)0), 0, ((void*)0));
 if (VAR_8 < 0) {
  FUNC_4(&VAR_5->dev, "failed to add sub-devices: %d\n", VAR_8);
  goto err;
 }

 return 0;

err:
 FUNC_10(VAR_7->i2c_sec);
 return VAR_8;
}
