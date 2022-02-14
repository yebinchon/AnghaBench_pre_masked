
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct tw9910_video_info {int dummy; } ;
struct tw9910_priv {int * clk; int * pdn_gpio; int subdev; struct tw9910_video_info* info; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_6__ {struct tw9910_video_info* platform_data; } ;
struct i2c_client {TYPE_1__ dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 struct tw9910_priv* FUNC_6 (TYPE_1__*,int,int ) ;
 int * FUNC_7 (TYPE_1__*,char*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct i2c_adapter*,int ) ;
 int VAR_7 ;
 int FUNC_10 (struct i2c_client*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,struct i2c_client*,int *) ;

__attribute__((used)) static int FUNC_13(struct i2c_client *VAR_8,
   const struct i2c_device_id *VAR_9)

{
 struct tw9910_priv *VAR_10;
 struct tw9910_video_info *VAR_11;
 struct i2c_adapter *VAR_12 = VAR_8->adapter;
 int VAR_13;

 if (!VAR_8->dev.platform_data) {
  FUNC_4(&VAR_8->dev, "TW9910: missing platform data!\n");
  return -VAR_0;
 }

 VAR_11 = VAR_8->dev.platform_data;

 if (!FUNC_9(VAR_12, VAR_6)) {
  FUNC_4(&VAR_8->dev,
   "I2C-Adapter doesn't support I2C_FUNC_SMBUS_BYTE_DATA\n");
  return -VAR_1;
 }

 VAR_10 = FUNC_6(&VAR_8->dev, sizeof(*VAR_10), VAR_4);
 if (!VAR_10)
  return -VAR_3;

 VAR_10->info = VAR_11;

 FUNC_12(&VAR_10->subdev, VAR_8, &VAR_7);

 VAR_10->clk = FUNC_2(&VAR_8->dev, "xti");
 if (FUNC_1(VAR_10->clk) == -VAR_2) {
  VAR_10->clk = ((void*)0);
 } else if (FUNC_0(VAR_10->clk)) {
  FUNC_4(&VAR_8->dev, "Unable to get xti clock\n");
  return FUNC_1(VAR_10->clk);
 }

 VAR_10->pdn_gpio = FUNC_7(&VAR_8->dev, "pdn",
         VAR_5);
 if (FUNC_0(VAR_10->pdn_gpio)) {
  FUNC_5(&VAR_8->dev, "Unable to get GPIO \"pdn\"");
  VAR_13 = FUNC_1(VAR_10->pdn_gpio);
  goto error_clk_put;
 }

 VAR_13 = FUNC_10(VAR_8);
 if (VAR_13 < 0)
  goto error_gpio_put;

 VAR_13 = FUNC_11(&VAR_10->subdev);
 if (VAR_13)
  goto error_gpio_put;

 return VAR_13;

error_gpio_put:
 if (VAR_10->pdn_gpio)
  FUNC_8(VAR_10->pdn_gpio);
error_clk_put:
 FUNC_3(VAR_10->clk);

 return VAR_13;
}
