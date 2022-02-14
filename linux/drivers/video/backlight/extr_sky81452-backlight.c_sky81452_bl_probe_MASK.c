
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct sky81452_bl_platform_data {char* name; TYPE_1__ dev; int gpio_enable; } ;
struct regmap {int dummy; } ;
struct device {int parent; } ;
struct platform_device {struct device dev; } ;
struct backlight_properties {int max_brightness; } ;
struct backlight_device {char* name; TYPE_1__ dev; int gpio_enable; } ;
typedef int props ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sky81452_bl_platform_data*) ;
 int FUNC_1 (struct sky81452_bl_platform_data*) ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct device*,char*,int) ;
 struct regmap* FUNC_3 (int ) ;
 struct sky81452_bl_platform_data* FUNC_4 (struct device*) ;
 struct sky81452_bl_platform_data* FUNC_5 (struct device*,char const*,struct device*,struct regmap*,int *,struct backlight_properties*) ;
 int FUNC_6 (struct device*,int ,int ,char*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct backlight_properties*,int ,int) ;
 int FUNC_9 (struct platform_device*,struct sky81452_bl_platform_data*) ;
 int VAR_3 ;
 int FUNC_10 (struct regmap*,struct sky81452_bl_platform_data*) ;
 int VAR_4 ;
 struct sky81452_bl_platform_data* FUNC_11 (struct device*) ;
 int FUNC_12 (int *,int *) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct regmap *VAR_7 = FUNC_3(VAR_6->parent);
 struct sky81452_bl_platform_data *VAR_8 = FUNC_4(VAR_6);
 struct backlight_device *VAR_9;
 struct backlight_properties VAR_10;
 const char *VAR_11;
 int VAR_12;

 if (!VAR_8) {
  VAR_8 = FUNC_11(VAR_6);
  if (FUNC_0(VAR_8))
   return FUNC_1(VAR_8);
 }

 if (FUNC_7(VAR_8->gpio_enable)) {
  VAR_12 = FUNC_6(VAR_6, VAR_8->gpio_enable,
     VAR_0, "sky81452-en");
  if (VAR_12 < 0) {
   FUNC_2(VAR_6, "failed to request GPIO. err=%d\n", VAR_12);
   return VAR_12;
  }
 }

 VAR_12 = FUNC_10(VAR_7, VAR_8);
 if (VAR_12 < 0) {
  FUNC_2(VAR_6, "failed to initialize. err=%d\n", VAR_12);
  return VAR_12;
 }

 FUNC_8(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.max_brightness = VAR_2,
 VAR_11 = VAR_8->name ? VAR_8->name : VAR_1;
 VAR_9 = FUNC_5(VAR_6, VAR_11, VAR_6, VAR_7,
      &VAR_4, &VAR_10);
 if (FUNC_0(VAR_9)) {
  FUNC_2(VAR_6, "failed to register. err=%ld\n", FUNC_1(VAR_9));
  return FUNC_1(VAR_9);
 }

 FUNC_9(VAR_5, VAR_9);

 VAR_12 = FUNC_12(&VAR_9->dev.kobj, &VAR_3);
 if (VAR_12 < 0) {
  FUNC_2(VAR_6, "failed to create attribute. err=%d\n", VAR_12);
  return VAR_12;
 }

 return VAR_12;
}
