
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct ot200_backlight_data {int current_brightness; } ;
struct backlight_properties {int max_brightness; int brightness; int type; } ;
struct backlight_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct backlight_device*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct backlight_device*) ;
 int VAR_12 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int *,char*,...) ;
 int FUNC_7 (int *) ;
 struct backlight_device* FUNC_8 (int *,int ,int *,struct ot200_backlight_data*,int *,struct backlight_properties*) ;
 scalar_t__ FUNC_9 (int *,int ,char*) ;
 struct ot200_backlight_data* FUNC_10 (int *,int,int ) ;
 int VAR_13 ;
 int FUNC_11 (struct platform_device*,struct backlight_device*) ;
 int VAR_14 ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_15)
{
 struct backlight_device *VAR_16;
 struct ot200_backlight_data *VAR_17;
 struct backlight_properties VAR_18;
 int VAR_19 = 0;


 if (FUNC_9(&VAR_15->dev, VAR_4,
    "ot200 backlight dimmer") < 0) {
  FUNC_6(&VAR_15->dev, "failed to request GPIO %d\n", VAR_4);
  return -VAR_1;
 }


 VAR_14 = FUNC_3(7, VAR_8);
 if (!VAR_14) {
  FUNC_6(&VAR_15->dev, "MFGPT 7 not available\n");
  return -VAR_1;
 }

 VAR_17 = FUNC_10(&VAR_15->dev, sizeof(*VAR_17), VAR_3);
 if (!VAR_17) {
  VAR_19 = -VAR_2;
  goto error_devm_kzalloc;
 }


 FUNC_2(VAR_4, VAR_6);
 FUNC_2(VAR_4, VAR_5);


 FUNC_5(VAR_14, VAR_9, 0);
 FUNC_5(VAR_14, VAR_10, VAR_7);
 FUNC_5(VAR_14, VAR_11, VAR_12);

 VAR_17->current_brightness = 100;
 VAR_18.max_brightness = 100;
 VAR_18.brightness = 100;
 VAR_18.type = VAR_0;

 VAR_16 = FUNC_8(&VAR_15->dev, FUNC_7(&VAR_15->dev),
     &VAR_15->dev, VAR_17, &VAR_13,
     &VAR_18);
 if (FUNC_0(VAR_16)) {
  FUNC_6(&VAR_15->dev, "failed to register backlight\n");
  VAR_19 = FUNC_1(VAR_16);
  goto error_devm_kzalloc;
 }

 FUNC_11(VAR_15, VAR_16);

 return 0;

error_devm_kzalloc:
 FUNC_4(VAR_14);
 return VAR_19;
}
