
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct omap_backlight_config {int default_intensity; } ;
struct omap_backlight {int * dev; struct omap_backlight_config* pdata; scalar_t__ current_intensity; int powermode; } ;
struct backlight_properties {int max_brightness; int type; } ;
struct TYPE_2__ {int brightness; int fb_blank; } ;
struct backlight_device {TYPE_1__ props; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct backlight_device*) ;
 int VAR_6 ;
 int FUNC_1 (struct backlight_device*) ;
 int VAR_7 ;
 struct omap_backlight_config* FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 struct backlight_device* FUNC_4 (int *,char*,int *,struct omap_backlight*,int *,struct backlight_properties*) ;
 struct omap_backlight* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (struct backlight_properties*,int ,int) ;
 int FUNC_7 (int ) ;
 int VAR_8 ;
 int FUNC_8 (struct backlight_device*) ;
 int FUNC_9 (struct platform_device*,struct backlight_device*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_9)
{
 struct backlight_properties VAR_10;
 struct backlight_device *VAR_11;
 struct omap_backlight *VAR_12;
 struct omap_backlight_config *VAR_13 = FUNC_2(&VAR_9->dev);

 if (!VAR_13)
  return -VAR_2;

 VAR_12 = FUNC_5(&VAR_9->dev, sizeof(struct omap_backlight),
     VAR_5);
 if (FUNC_10(!VAR_12))
  return -VAR_1;

 FUNC_6(&VAR_10, 0, sizeof(struct backlight_properties));
 VAR_10.type = VAR_0;
 VAR_10.max_brightness = VAR_6;
 VAR_11 = FUNC_4(&VAR_9->dev, "omap-bl", &VAR_9->dev,
     VAR_12, &VAR_8, &VAR_10);
 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);

 VAR_12->powermode = VAR_3;
 VAR_12->current_intensity = 0;

 VAR_12->pdata = VAR_13;
 VAR_12->dev = &VAR_9->dev;

 FUNC_9(VAR_9, VAR_11);

 FUNC_7(VAR_7);

 VAR_11->props.fb_blank = VAR_4;
 VAR_11->props.brightness = VAR_13->default_intensity;
 FUNC_8(VAR_11);

 FUNC_3(&VAR_9->dev, "OMAP LCD backlight initialised\n");

 return 0;
}
