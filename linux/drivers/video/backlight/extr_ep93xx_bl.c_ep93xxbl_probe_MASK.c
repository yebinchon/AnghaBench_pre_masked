
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int start; } ;
struct platform_device {int dev; int name; } ;
struct ep93xxbl {int mmio; } ;
struct backlight_properties {int max_brightness; int type; } ;
struct TYPE_2__ {int brightness; } ;
struct backlight_device {TYPE_1__ props; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (struct backlight_device*) ;
 struct backlight_device* FUNC_2 (int *,int ,int *,struct ep93xxbl*,int *,struct backlight_properties*) ;
 int FUNC_3 (int *,int ,int ) ;
 struct ep93xxbl* FUNC_4 (int *,int,int ) ;
 int VAR_7 ;
 int FUNC_5 (struct backlight_device*) ;
 int FUNC_6 (struct backlight_properties*,int ,int) ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 int FUNC_8 (struct platform_device*,struct backlight_device*) ;
 int FUNC_9 (struct resource*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_8)
{
 struct ep93xxbl *VAR_9;
 struct backlight_device *VAR_10;
 struct backlight_properties VAR_11;
 struct resource *VAR_12;

 VAR_9 = FUNC_4(&VAR_8->dev, sizeof(*VAR_9), VAR_5);
 if (!VAR_9)
  return -VAR_1;

 VAR_12 = FUNC_7(VAR_8, VAR_6, 0);
 if (!VAR_12)
  return -VAR_2;
 VAR_9->mmio = FUNC_3(&VAR_8->dev, VAR_12->start,
          FUNC_9(VAR_12));
 if (!VAR_9->mmio)
  return -VAR_2;

 FUNC_6(&VAR_11, 0, sizeof(struct backlight_properties));
 VAR_11.type = VAR_0;
 VAR_11.max_brightness = VAR_4;
 VAR_10 = FUNC_2(&VAR_8->dev, VAR_8->name, &VAR_8->dev,
     VAR_9, &VAR_7, &VAR_11);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);

 VAR_10->props.brightness = VAR_3;

 FUNC_8(VAR_8, VAR_10);

 FUNC_5(VAR_10);

 return 0;
}
