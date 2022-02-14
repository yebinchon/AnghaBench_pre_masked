
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct i2c_device_id {int driver_data; } ;
struct i2c_client {int dev; int adapter; } ;
struct backlight_properties {int brightness; int max_brightness; int type; } ;
struct TYPE_2__ {int kobj; } ;
struct backlight_device {TYPE_1__ dev; } ;
struct adp8870_bl {struct backlight_device* bl; struct adp8870_backlight_platform_data* pdata; int revid; int lock; scalar_t__ current_brightness; int id; struct i2c_client* client; } ;
struct adp8870_backlight_platform_data {scalar_t__ en_ambl_sens; scalar_t__ num_leds; } ;
typedef int props ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (struct backlight_device*) ;
 int FUNC_3 (struct backlight_device*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (struct backlight_device*) ;
 int FUNC_5 (struct i2c_client*) ;
 int FUNC_6 (struct i2c_client*,int ,int *) ;
 int FUNC_7 (struct backlight_device*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char*) ;
 struct adp8870_backlight_platform_data* FUNC_10 (int *) ;
 int FUNC_11 (int *,char*,int ) ;
 struct backlight_device* FUNC_12 (int *,int ,int *,struct adp8870_bl*,int *,struct backlight_properties*) ;
 struct adp8870_bl* FUNC_13 (int *,int,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (struct i2c_client*,struct adp8870_bl*) ;
 int FUNC_16 (struct backlight_properties*,int ,int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int *) ;
 int FUNC_19 (int *,int *) ;

__attribute__((used)) static int FUNC_20(struct i2c_client *VAR_12,
     const struct i2c_device_id *VAR_13)
{
 struct backlight_properties VAR_14;
 struct backlight_device *VAR_15;
 struct adp8870_bl *VAR_16;
 struct adp8870_backlight_platform_data *VAR_17 =
  FUNC_10(&VAR_12->dev);
 uint8_t VAR_18;
 int VAR_19;

 if (!FUNC_14(VAR_12->adapter,
     VAR_9)) {
  FUNC_9(&VAR_12->dev, "SMBUS Byte Data not Supported\n");
  return -VAR_5;
 }

 if (!VAR_17) {
  FUNC_9(&VAR_12->dev, "no platform data?\n");
  return -VAR_4;
 }

 VAR_19 = FUNC_6(VAR_12, VAR_2, &VAR_18);
 if (VAR_19 < 0)
  return -VAR_5;

 if (FUNC_1(VAR_18) != VAR_0) {
  FUNC_9(&VAR_12->dev, "failed to probe\n");
  return -VAR_6;
 }

 VAR_16 = FUNC_13(&VAR_12->dev, sizeof(*VAR_16), VAR_8);
 if (VAR_16 == ((void*)0))
  return -VAR_7;

 VAR_16->revid = FUNC_0(VAR_18);
 VAR_16->client = VAR_12;
 VAR_16->pdata = VAR_17;
 VAR_16->id = VAR_13->driver_data;
 VAR_16->current_brightness = 0;
 FUNC_15(VAR_12, VAR_16);

 FUNC_17(&VAR_16->lock);

 FUNC_16(&VAR_14, 0, sizeof(VAR_14));
 VAR_14.type = VAR_3;
 VAR_14.max_brightness = VAR_14.brightness = VAR_1;
 VAR_15 = FUNC_12(&VAR_12->dev,
    FUNC_8(&VAR_12->dev),
    &VAR_12->dev, VAR_16, &VAR_11, &VAR_14);
 if (FUNC_2(VAR_15)) {
  FUNC_9(&VAR_12->dev, "failed to register backlight\n");
  return FUNC_3(VAR_15);
 }

 VAR_16->bl = VAR_15;

 if (VAR_17->en_ambl_sens) {
  VAR_19 = FUNC_18(&VAR_15->dev.kobj,
   &VAR_10);
  if (VAR_19) {
   FUNC_9(&VAR_12->dev, "failed to register sysfs\n");
   return VAR_19;
  }
 }

 VAR_19 = FUNC_4(VAR_15);
 if (VAR_19) {
  VAR_19 = -VAR_5;
  goto out;
 }

 FUNC_7(VAR_15);

 FUNC_11(&VAR_12->dev, "Rev.%d Backlight\n", VAR_16->revid);

 if (VAR_17->num_leds)
  FUNC_5(VAR_12);

 return 0;

out:
 if (VAR_16->pdata->en_ambl_sens)
  FUNC_19(&VAR_16->bl->dev.kobj,
   &VAR_10);

 return VAR_19;
}
