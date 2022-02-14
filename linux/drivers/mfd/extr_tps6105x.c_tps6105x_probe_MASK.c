
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps6105x_platform_data {int mode; } ;
struct tps6105x {struct tps6105x_platform_data* pdata; struct i2c_client* client; int regmap; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;




 int FUNC_2 (int *,char*) ;
 struct tps6105x_platform_data* FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,int) ;
 struct tps6105x* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (struct i2c_client*,int *) ;
 int FUNC_8 (struct i2c_client*,struct tps6105x*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct tps6105x*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (struct tps6105x*) ;

__attribute__((used)) static int FUNC_12(struct i2c_client *VAR_8,
   const struct i2c_device_id *VAR_9)
{
 struct tps6105x *VAR_10;
 struct tps6105x_platform_data *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_3(&VAR_8->dev);
 if (!VAR_11) {
  FUNC_2(&VAR_8->dev, "missing platform data\n");
  return -VAR_0;
 }

 VAR_10 = FUNC_6(&VAR_8->dev, sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->regmap = FUNC_7(VAR_8, &VAR_6);
 if (FUNC_0(VAR_10->regmap))
  return FUNC_1(VAR_10->regmap);

 FUNC_8(VAR_8, VAR_10);
 VAR_10->client = VAR_8;
 VAR_10->pdata = VAR_11;

 VAR_12 = FUNC_11(VAR_10);
 if (VAR_12) {
  FUNC_2(&VAR_8->dev, "chip initialization failed\n");
  return VAR_12;
 }

 VAR_12 = FUNC_10(VAR_10, &VAR_4);
 if (VAR_12)
  return VAR_12;

 switch (VAR_11->mode) {
 case 131:
  FUNC_4(&VAR_8->dev,
    "present, not used for anything, only GPIO\n");
  break;
 case 130:
  VAR_12 = FUNC_10(VAR_10, &VAR_5);
  break;
 case 129:
  VAR_12 = FUNC_10(VAR_10, &VAR_3);
  break;
 case 128:
  VAR_12 = FUNC_10(VAR_10, &VAR_7);
  break;
 default:
  FUNC_5(&VAR_8->dev, "invalid mode: %d\n", VAR_11->mode);
  break;
 }

 if (VAR_12)
  FUNC_9(&VAR_8->dev);

 return VAR_12;
}
