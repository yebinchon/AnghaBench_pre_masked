
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct i2c_device_id {int driver_data; } ;
struct i2c_client {int name; int dev; int adapter; } ;
struct backlight_properties {void* max_brightness; int type; } ;
struct TYPE_4__ {int kobj; } ;
struct TYPE_3__ {void* brightness; } ;
struct backlight_device {TYPE_2__ dev; TYPE_1__ props; } ;
struct adp8860_bl {int gdwn_dis; int en_ambl_sens; struct backlight_device* bl; int revid; int lock; scalar_t__ current_brightness; int id; struct adp8860_backlight_platform_data* pdata; struct i2c_client* client; } ;
struct adp8860_backlight_platform_data {scalar_t__ num_leds; int gdwn_dis; int en_ambl_sens; } ;
typedef int props ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

 void* VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (struct backlight_device*) ;
 int FUNC_3 (struct backlight_device*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct backlight_device*) ;
 int FUNC_5 (struct i2c_client*) ;
 int FUNC_6 (struct i2c_client*,int ,int *) ;
 int FUNC_7 (struct backlight_device*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char*) ;
 struct adp8860_backlight_platform_data* FUNC_10 (int *) ;
 int FUNC_11 (int *,char*,int ,int ) ;
 struct backlight_device* FUNC_12 (int *,int ,int *,struct adp8860_bl*,int *,struct backlight_properties*) ;
 struct adp8860_bl* FUNC_13 (int *,int,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (struct i2c_client*,struct adp8860_bl*) ;
 int FUNC_16 (struct backlight_properties*,int ,int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int *) ;
 int FUNC_19 (int *,int *) ;

__attribute__((used)) static int FUNC_20(struct i2c_client *VAR_11,
     const struct i2c_device_id *VAR_12)
{
 struct backlight_device *VAR_13;
 struct adp8860_bl *VAR_14;
 struct adp8860_backlight_platform_data *VAR_15 =
  FUNC_10(&VAR_11->dev);
 struct backlight_properties VAR_16;
 uint8_t VAR_17;
 int VAR_18;

 if (!FUNC_14(VAR_11->adapter,
     VAR_8)) {
  FUNC_9(&VAR_11->dev, "SMBUS Byte Data not Supported\n");
  return -VAR_4;
 }

 if (!VAR_15) {
  FUNC_9(&VAR_11->dev, "no platform data?\n");
  return -VAR_3;
 }

 VAR_14 = FUNC_13(&VAR_11->dev, sizeof(*VAR_14), VAR_7);
 if (VAR_14 == ((void*)0))
  return -VAR_6;

 VAR_18 = FUNC_6(VAR_11, VAR_1, &VAR_17);
 if (VAR_18 < 0)
  return VAR_18;

 switch (FUNC_1(VAR_17)) {
 case 128:
  VAR_14->gdwn_dis = !!VAR_15->gdwn_dis;

 case 130:
  VAR_14->en_ambl_sens = !!VAR_15->en_ambl_sens;
  break;
 case 129:
  VAR_14->gdwn_dis = !!VAR_15->gdwn_dis;
  break;
 default:
  FUNC_9(&VAR_11->dev, "failed to probe\n");
  return -VAR_5;
 }



 VAR_14->revid = FUNC_0(VAR_17);
 VAR_14->client = VAR_11;
 VAR_14->pdata = VAR_15;
 VAR_14->id = VAR_12->driver_data;
 VAR_14->current_brightness = 0;
 FUNC_15(VAR_11, VAR_14);

 FUNC_16(&VAR_16, 0, sizeof(VAR_16));
 VAR_16.type = VAR_2;
 VAR_16.max_brightness = VAR_0;

 FUNC_17(&VAR_14->lock);

 VAR_13 = FUNC_12(&VAR_11->dev,
    FUNC_8(&VAR_11->dev),
    &VAR_11->dev, VAR_14, &VAR_10, &VAR_16);
 if (FUNC_2(VAR_13)) {
  FUNC_9(&VAR_11->dev, "failed to register backlight\n");
  return FUNC_3(VAR_13);
 }

 VAR_13->props.brightness = VAR_0;

 VAR_14->bl = VAR_13;

 if (VAR_14->en_ambl_sens)
  VAR_18 = FUNC_18(&VAR_13->dev.kobj,
   &VAR_9);

 if (VAR_18) {
  FUNC_9(&VAR_11->dev, "failed to register sysfs\n");
  return VAR_18;
 }

 VAR_18 = FUNC_4(VAR_13);
 if (VAR_18) {
  VAR_18 = -VAR_4;
  goto out;
 }

 FUNC_7(VAR_13);

 FUNC_11(&VAR_11->dev, "%s Rev.%d Backlight\n",
  VAR_11->name, VAR_14->revid);

 if (VAR_15->num_leds)
  FUNC_5(VAR_11);

 return 0;

out:
 if (VAR_14->en_ambl_sens)
  FUNC_19(&VAR_14->bl->dev.kobj,
   &VAR_9);

 return VAR_18;
}
