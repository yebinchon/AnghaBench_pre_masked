
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct generic_bl_info {int limit_mask; char* name; int default_intensity; int max_intensity; } ;
struct backlight_properties {int max_brightness; int type; } ;
struct TYPE_2__ {int brightness; int power; } ;
struct backlight_device {TYPE_1__ props; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (struct backlight_device*) ;
 int FUNC_2 (struct backlight_device*) ;
 struct generic_bl_info* VAR_2 ;
 struct generic_bl_info* FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 struct backlight_device* FUNC_5 (int *,char const*,int *,int *,int *,struct backlight_properties*) ;
 struct backlight_device* VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (struct backlight_properties*,int ,int) ;
 int FUNC_7 (struct platform_device*,struct backlight_device*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_5)
{
 struct backlight_properties VAR_6;
 struct generic_bl_info *VAR_7 = FUNC_3(&VAR_5->dev);
 const char *VAR_8 = "generic-bl";
 struct backlight_device *VAR_9;

 VAR_2 = VAR_7;
 if (!VAR_7->limit_mask)
  VAR_7->limit_mask = -1;

 if (VAR_7->name)
  VAR_8 = VAR_7->name;

 FUNC_6(&VAR_6, 0, sizeof(struct backlight_properties));
 VAR_6.type = VAR_0;
 VAR_6.max_brightness = VAR_7->max_intensity;
 VAR_9 = FUNC_5(&VAR_5->dev, VAR_8, &VAR_5->dev,
     ((void*)0), &VAR_4, &VAR_6);
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);

 FUNC_7(VAR_5, VAR_9);

 VAR_9->props.power = VAR_1;
 VAR_9->props.brightness = VAR_7->default_intensity;
 FUNC_2(VAR_9);

 VAR_3 = VAR_9;

 FUNC_4(&VAR_5->dev, "Generic Backlight Driver Initialized.\n");
 return 0;
}
