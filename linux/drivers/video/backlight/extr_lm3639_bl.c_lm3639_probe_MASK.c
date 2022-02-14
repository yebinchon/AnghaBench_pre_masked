
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct lm3639_platform_data {int max_brt_led; int init_brt_led; } ;
struct TYPE_7__ {char* name; int max_brightness; int brightness_set; } ;
struct lm3639_chip_data {TYPE_3__* bled; TYPE_1__ cdev_flash; TYPE_1__ cdev_torch; int * dev; TYPE_3__* regmap; struct lm3639_platform_data* pdata; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int adapter; } ;
struct device {int dummy; } ;
struct backlight_properties {int max_brightness; int brightness; int type; } ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_6 ;
 int FUNC_2 (int *,char*,...) ;
 struct lm3639_platform_data* FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 TYPE_3__* FUNC_6 (int *,char*,int *,struct lm3639_chip_data*,int *,struct backlight_properties*) ;
 struct lm3639_chip_data* FUNC_7 (int *,int,int ) ;
 TYPE_3__* FUNC_8 (struct i2c_client*,int *) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct i2c_client*,struct lm3639_chip_data*) ;
 int FUNC_11 (struct device*,TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int VAR_7 ;
 int FUNC_13 (struct lm3639_chip_data*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_11,
      const struct i2c_device_id *VAR_12)
{
 int VAR_13;
 struct lm3639_chip_data *VAR_14;
 struct lm3639_platform_data *VAR_15 = FUNC_3(&VAR_11->dev);
 struct backlight_properties VAR_16;

 if (!FUNC_9(VAR_11->adapter, VAR_5)) {
  FUNC_2(&VAR_11->dev, "i2c functionality check fail.\n");
  return -VAR_3;
 }

 if (VAR_15 == ((void*)0)) {
  FUNC_2(&VAR_11->dev, "Needs Platform Data.\n");
  return -VAR_1;
 }

 VAR_14 = FUNC_7(&VAR_11->dev,
        sizeof(struct lm3639_chip_data), VAR_4);
 if (!VAR_14)
  return -VAR_2;

 VAR_14->pdata = VAR_15;
 VAR_14->dev = &VAR_11->dev;

 VAR_14->regmap = FUNC_8(VAR_11, &VAR_9);
 if (FUNC_0(VAR_14->regmap)) {
  VAR_13 = FUNC_1(VAR_14->regmap);
  FUNC_2(&VAR_11->dev, "fail : allocate register map: %d\n",
   VAR_13);
  return VAR_13;
 }
 FUNC_10(VAR_11, VAR_14);


 VAR_13 = FUNC_13(VAR_14);
 if (VAR_13 < 0) {
  FUNC_2(&VAR_11->dev, "fail : chip init\n");
  goto err_out;
 }


 VAR_16.type = VAR_0;
 VAR_16.brightness = VAR_15->init_brt_led;
 VAR_16.max_brightness = VAR_15->max_brt_led;
 VAR_14->bled =
     FUNC_6(VAR_14->dev, "lm3639_bled",
        VAR_14->dev, VAR_14, &VAR_7,
        &VAR_16);
 if (FUNC_0(VAR_14->bled)) {
  FUNC_2(&VAR_11->dev, "fail : backlight register\n");
  VAR_13 = FUNC_1(VAR_14->bled);
  goto err_out;
 }

 VAR_13 = FUNC_4(&(VAR_14->bled->dev), &VAR_6);
 if (VAR_13 < 0) {
  FUNC_2(&VAR_11->dev, "failed : add sysfs entries\n");
  goto err_out;
 }


 VAR_14->cdev_flash.name = "lm3639_flash";
 VAR_14->cdev_flash.max_brightness = 16;
 VAR_14->cdev_flash.brightness_set = VAR_8;
 VAR_13 = FUNC_11((struct device *)
        &VAR_11->dev, &VAR_14->cdev_flash);
 if (VAR_13 < 0) {
  FUNC_2(&VAR_11->dev, "fail : flash register\n");
  goto err_flash;
 }


 VAR_14->cdev_torch.name = "lm3639_torch";
 VAR_14->cdev_torch.max_brightness = 8;
 VAR_14->cdev_torch.brightness_set = VAR_10;
 VAR_13 = FUNC_11((struct device *)
        &VAR_11->dev, &VAR_14->cdev_torch);
 if (VAR_13 < 0) {
  FUNC_2(&VAR_11->dev, "fail : torch register\n");
  goto err_torch;
 }

 return 0;

err_torch:
 FUNC_12(&VAR_14->cdev_flash);
err_flash:
 FUNC_5(&(VAR_14->bled->dev), &VAR_6);
err_out:
 return VAR_13;
}
