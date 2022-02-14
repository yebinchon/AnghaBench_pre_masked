
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_device {int bits_per_word; int dev; } ;
struct TYPE_3__ {int brightness; } ;
struct lcd_device {TYPE_1__ props; } ;
struct backlight_properties {int max_brightness; int type; } ;
struct backlight_device {TYPE_1__ props; } ;
struct ams369fg06 {int power; TYPE_2__* lcd_pd; struct lcd_device* bd; struct lcd_device* ld; int * dev; struct spi_device* spi; } ;
struct TYPE_4__ {int lcd_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct lcd_device*) ;
 int VAR_7 ;
 int FUNC_1 (struct lcd_device*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct ams369fg06*,int ) ;
 int FUNC_3 (int *,char*) ;
 TYPE_2__* FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 struct lcd_device* FUNC_6 (int *,char*,int *,struct ams369fg06*,int *,struct backlight_properties*) ;
 struct ams369fg06* FUNC_7 (int *,int,int ) ;
 struct lcd_device* FUNC_8 (int *,char*,int *,struct ams369fg06*,int *) ;
 int FUNC_9 (struct backlight_properties*,int ,int) ;
 int FUNC_10 (struct spi_device*,struct ams369fg06*) ;
 int FUNC_11 (struct spi_device*) ;

__attribute__((used)) static int FUNC_12(struct spi_device *VAR_10)
{
 int VAR_11 = 0;
 struct ams369fg06 *VAR_12 = ((void*)0);
 struct lcd_device *VAR_13 = ((void*)0);
 struct backlight_device *VAR_14 = ((void*)0);
 struct backlight_properties VAR_15;

 VAR_12 = FUNC_7(&VAR_10->dev, sizeof(struct ams369fg06), VAR_6);
 if (!VAR_12)
  return -VAR_3;


 VAR_10->bits_per_word = 16;

 VAR_11 = FUNC_11(VAR_10);
 if (VAR_11 < 0) {
  FUNC_3(&VAR_10->dev, "spi setup failed.\n");
  return VAR_11;
 }

 VAR_12->spi = VAR_10;
 VAR_12->dev = &VAR_10->dev;

 VAR_12->lcd_pd = FUNC_4(&VAR_10->dev);
 if (!VAR_12->lcd_pd) {
  FUNC_3(&VAR_10->dev, "platform data is NULL\n");
  return -VAR_2;
 }

 VAR_13 = FUNC_8(&VAR_10->dev, "ams369fg06", &VAR_10->dev, VAR_12,
     &VAR_9);
 if (FUNC_0(VAR_13))
  return FUNC_1(VAR_13);

 VAR_12->ld = VAR_13;

 FUNC_9(&VAR_15, 0, sizeof(struct backlight_properties));
 VAR_15.type = VAR_0;
 VAR_15.max_brightness = VAR_7;

 VAR_14 = FUNC_6(&VAR_10->dev, "ams369fg06-bl",
     &VAR_10->dev, VAR_12,
     &VAR_8, &VAR_15);
 if (FUNC_0(VAR_14))
  return FUNC_1(VAR_14);

 VAR_14->props.brightness = VAR_1;
 VAR_12->bd = VAR_14;

 if (!VAR_12->lcd_pd->lcd_enabled) {





  VAR_12->power = VAR_4;

  FUNC_2(VAR_12, VAR_5);
 } else {
  VAR_12->power = VAR_5;
 }

 FUNC_10(VAR_10, VAR_12);

 FUNC_5(&VAR_10->dev, "ams369fg06 panel driver has been probed.\n");

 return 0;
}
