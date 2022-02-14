
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct platform_device {int dev; int name; } ;
struct pandora_private {int old_state; } ;
struct backlight_properties {int type; void* max_brightness; } ;
struct TYPE_2__ {void* brightness; } ;
struct backlight_device {TYPE_1__ props; } ;
typedef int props ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct backlight_device*) ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct backlight_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct backlight_device*) ;
 int FUNC_3 (int *,char*) ;
 struct backlight_device* FUNC_4 (int *,int ,int *,struct pandora_private*,int *,struct backlight_properties*) ;
 struct pandora_private* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (struct backlight_properties*,int ,int) ;
 int VAR_11 ;
 int FUNC_7 (struct platform_device*,struct backlight_device*) ;
 int FUNC_8 (int ,int*,int ) ;
 int FUNC_9 (int ,int,int ) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_12)
{
 struct backlight_properties VAR_13;
 struct backlight_device *VAR_14;
 struct pandora_private *VAR_15;
 u8 VAR_16;

 VAR_15 = FUNC_5(&VAR_12->dev, sizeof(*VAR_15), VAR_2);
 if (!VAR_15) {
  FUNC_3(&VAR_12->dev, "failed to allocate driver private data\n");
  return -VAR_1;
 }

 FUNC_6(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.max_brightness = VAR_3;
 VAR_13.type = VAR_0;
 VAR_14 = FUNC_4(&VAR_12->dev, VAR_12->name, &VAR_12->dev,
     VAR_15, &VAR_11, &VAR_13);
 if (FUNC_0(VAR_14)) {
  FUNC_3(&VAR_12->dev, "failed to register backlight\n");
  return FUNC_1(VAR_14);
 }

 FUNC_7(VAR_12, VAR_14);


 FUNC_9(VAR_7, 0x80, VAR_10);

 VAR_15->old_state = VAR_4;
 VAR_14->props.brightness = VAR_3;
 FUNC_2(VAR_14);


 FUNC_8(VAR_5, &VAR_16, VAR_6);
 VAR_16 &= ~VAR_9;
 VAR_16 |= VAR_8;
 FUNC_9(VAR_5, VAR_16, VAR_6);

 return 0;
}
