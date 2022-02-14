
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct spi_device {int dev; } ;
struct corgi_lcd_platform_data {int limit_mask; int kick_battery; int default_intensity; int max_intensity; int init_mode; } ;
struct corgi_lcd {int limit_mask; TYPE_2__* bl_dev; TYPE_2__* lcd_dev; int kick_battery; int mode; int power; struct spi_device* spi_dev; } ;
struct backlight_properties {int max_brightness; int type; } ;
struct TYPE_8__ {int power; int brightness; } ;
struct TYPE_9__ {TYPE_1__ props; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int *,char*) ;
 struct corgi_lcd_platform_data* FUNC_5 (int *) ;
 TYPE_2__* FUNC_6 (int *,char*,int *,struct corgi_lcd*,int *,struct backlight_properties*) ;
 struct corgi_lcd* FUNC_7 (int *,int,int ) ;
 TYPE_2__* FUNC_8 (int *,char*,int *,struct corgi_lcd*,int *) ;
 int FUNC_9 (struct backlight_properties*,int ,int) ;
 int FUNC_10 (struct corgi_lcd*,struct corgi_lcd_platform_data*) ;
 int FUNC_11 (struct spi_device*,struct corgi_lcd*) ;
 struct corgi_lcd* VAR_9 ;

__attribute__((used)) static int FUNC_12(struct spi_device *VAR_10)
{
 struct backlight_properties VAR_11;
 struct corgi_lcd_platform_data *VAR_12 = FUNC_5(&VAR_10->dev);
 struct corgi_lcd *VAR_13;
 int VAR_14 = 0;

 if (VAR_12 == ((void*)0)) {
  FUNC_4(&VAR_10->dev, "platform data not available\n");
  return -VAR_2;
 }

 VAR_13 = FUNC_7(&VAR_10->dev, sizeof(struct corgi_lcd), VAR_6);
 if (!VAR_13)
  return -VAR_3;

 VAR_13->spi_dev = VAR_10;

 VAR_13->lcd_dev = FUNC_8(&VAR_10->dev, "corgi_lcd",
      &VAR_10->dev, VAR_13, &VAR_8);
 if (FUNC_0(VAR_13->lcd_dev))
  return FUNC_1(VAR_13->lcd_dev);

 VAR_13->power = VAR_4;
 VAR_13->mode = (VAR_12) ? VAR_12->init_mode : VAR_1;

 FUNC_9(&VAR_11, 0, sizeof(struct backlight_properties));
 VAR_11.type = VAR_0;
 VAR_11.max_brightness = VAR_12->max_intensity;
 VAR_13->bl_dev = FUNC_6(&VAR_10->dev, "corgi_bl",
      &VAR_10->dev, VAR_13, &VAR_7,
      &VAR_11);
 if (FUNC_0(VAR_13->bl_dev))
  return FUNC_1(VAR_13->bl_dev);

 VAR_13->bl_dev->props.brightness = VAR_12->default_intensity;
 VAR_13->bl_dev->props.power = VAR_5;

 VAR_14 = FUNC_10(VAR_13, VAR_12);
 if (VAR_14)
  return VAR_14;

 VAR_13->kick_battery = VAR_12->kick_battery;

 FUNC_11(VAR_10, VAR_13);
 FUNC_3(VAR_13->lcd_dev, VAR_5);
 FUNC_2(VAR_13->bl_dev);

 VAR_13->limit_mask = VAR_12->limit_mask;
 VAR_9 = VAR_13;
 return 0;
}
