
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {scalar_t__ id; int dev; } ;
struct backlight_properties {int type; } ;
struct TYPE_2__ {scalar_t__ max_brightness; int brightness; int power; } ;
struct backlight_device {TYPE_1__ props; } ;
struct aat2870_bl_platform_data {scalar_t__ channels; scalar_t__ max_current; scalar_t__ max_brightness; } ;
struct aat2870_bl_driver_data {scalar_t__ channels; scalar_t__ max_current; scalar_t__ brightness; struct backlight_device* bd; struct platform_device* pdev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (struct backlight_device*) ;
 int VAR_9 ;
 int FUNC_2 (struct backlight_device*) ;
 int FUNC_3 (int *,char*,...) ;
 struct aat2870_bl_platform_data* FUNC_4 (int *) ;
 struct backlight_device* FUNC_5 (int *,char*,int *,struct aat2870_bl_driver_data*,int *,struct backlight_properties*) ;
 struct aat2870_bl_driver_data* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (struct backlight_properties*,int ,int) ;
 int FUNC_8 (struct platform_device*,struct aat2870_bl_driver_data*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_10)
{
 struct aat2870_bl_platform_data *VAR_11 = FUNC_4(&VAR_10->dev);
 struct aat2870_bl_driver_data *VAR_12;
 struct backlight_device *VAR_13;
 struct backlight_properties VAR_14;
 int VAR_15 = 0;

 if (!VAR_11) {
  FUNC_3(&VAR_10->dev, "No platform data\n");
  VAR_15 = -VAR_6;
  goto out;
 }

 if (VAR_10->id != VAR_2) {
  FUNC_3(&VAR_10->dev, "Invalid device ID, %d\n", VAR_10->id);
  VAR_15 = -VAR_4;
  goto out;
 }

 VAR_12 = FUNC_6(&VAR_10->dev,
      sizeof(struct aat2870_bl_driver_data),
      VAR_8);
 if (!VAR_12) {
  VAR_15 = -VAR_5;
  goto out;
 }

 FUNC_7(&VAR_14, 0, sizeof(struct backlight_properties));

 VAR_14.type = VAR_3;
 VAR_13 = FUNC_5(&VAR_10->dev, "aat2870-backlight",
     &VAR_10->dev, VAR_12, &VAR_9,
     &VAR_14);
 if (FUNC_0(VAR_13)) {
  FUNC_3(&VAR_10->dev,
   "Failed allocate memory for backlight device\n");
  VAR_15 = FUNC_1(VAR_13);
  goto out;
 }

 VAR_12->pdev = VAR_10;
 FUNC_8(VAR_10, VAR_12);

 VAR_12->bd = VAR_13;

 if (VAR_11->channels > 0)
  VAR_12->channels = VAR_11->channels;
 else
  VAR_12->channels = VAR_0;

 if (VAR_11->max_current > 0)
  VAR_12->max_current = VAR_11->max_current;
 else
  VAR_12->max_current = VAR_1;

 if (VAR_11->max_brightness > 0)
  VAR_13->props.max_brightness = VAR_11->max_brightness;
 else
  VAR_13->props.max_brightness = 255;

 VAR_12->brightness = 0;
 VAR_13->props.power = VAR_7;
 VAR_13->props.brightness = VAR_13->props.max_brightness;

 VAR_15 = FUNC_2(VAR_13);
 if (VAR_15 < 0) {
  FUNC_3(&VAR_10->dev, "Failed to initialize\n");
  return VAR_15;
 }

 return 0;

out:
 return VAR_15;
}
