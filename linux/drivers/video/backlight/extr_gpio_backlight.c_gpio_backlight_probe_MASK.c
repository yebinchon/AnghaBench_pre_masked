
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ fwnode; } ;
struct platform_device {TYPE_2__ dev; } ;
struct gpio_backlight_platform_data {char* name; int gpio; scalar_t__ def_value; int fbdev; } ;
struct gpio_backlight {int gpiod; TYPE_2__* dev; scalar_t__ def_value; int fbdev; } ;
struct backlight_properties {int max_brightness; int type; } ;
struct TYPE_9__ {int brightness; int power; } ;
struct backlight_device {TYPE_1__ props; } ;
typedef int props ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 scalar_t__ FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (struct backlight_device*) ;
 int FUNC_2 (struct backlight_device*) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 struct gpio_backlight_platform_data* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 struct backlight_device* FUNC_6 (TYPE_2__*,int ,TYPE_2__*,struct gpio_backlight*,int *,struct backlight_properties*) ;
 int FUNC_7 (TYPE_2__*,int ,unsigned long,char*) ;
 struct gpio_backlight* FUNC_8 (TYPE_2__*,int,int ) ;
 int FUNC_9 (struct gpio_backlight*) ;
 int VAR_8 ;
 int FUNC_10 (struct platform_device*,struct gpio_backlight*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct backlight_properties*,int ,int) ;
 int FUNC_13 (struct platform_device*,struct backlight_device*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_9)
{
 struct gpio_backlight_platform_data *VAR_10 =
  FUNC_4(&VAR_9->dev);
 struct backlight_properties VAR_11;
 struct backlight_device *VAR_12;
 struct gpio_backlight *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_8(&VAR_9->dev, sizeof(*VAR_13), VAR_4);
 if (VAR_13 == ((void*)0))
  return -VAR_3;

 VAR_13->dev = &VAR_9->dev;

 if (VAR_9->dev.fwnode) {
  VAR_14 = FUNC_10(VAR_9, VAR_13);
  if (VAR_14)
   return VAR_14;
 } else if (VAR_10) {





  unsigned long VAR_15 = VAR_5;

  VAR_13->fbdev = VAR_10->fbdev;
  VAR_13->def_value = VAR_10->def_value;
  VAR_15 |= VAR_13->def_value ? VAR_6 : VAR_7;

  VAR_14 = FUNC_7(VAR_13->dev, VAR_10->gpio, VAR_15,
         VAR_10 ? VAR_10->name : "backlight");
  if (VAR_14 < 0) {
   FUNC_3(&VAR_9->dev, "unable to request GPIO\n");
   return VAR_14;
  }
  VAR_13->gpiod = FUNC_11(VAR_10->gpio);
  if (!VAR_13->gpiod)
   return -VAR_1;
 } else {
  FUNC_3(&VAR_9->dev,
   "failed to find platform data or device tree node.\n");
  return -VAR_2;
 }

 FUNC_12(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.type = VAR_0;
 VAR_11.max_brightness = 1;
 VAR_12 = FUNC_6(&VAR_9->dev, FUNC_5(&VAR_9->dev),
     &VAR_9->dev, VAR_13, &VAR_8,
     &VAR_11);
 if (FUNC_0(VAR_12)) {
  FUNC_3(&VAR_9->dev, "failed to register backlight\n");
  return FUNC_1(VAR_12);
 }

 VAR_12->props.power = FUNC_9(VAR_13);
 VAR_12->props.brightness = 1;

 FUNC_2(VAR_12);

 FUNC_13(VAR_9, VAR_12);
 return 0;
}
