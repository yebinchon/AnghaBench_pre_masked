
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fujitsu_bl {struct backlight_device* bl_device; int max_brightness; int brightness_level; } ;
struct backlight_properties {int type; int max_brightness; int brightness; } ;
struct backlight_device {int dummy; } ;
struct acpi_device {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (struct backlight_device*) ;
 struct fujitsu_bl* FUNC_2 (struct acpi_device*) ;
 struct backlight_device* FUNC_3 (int *,char*,int *,struct acpi_device*,int *,struct backlight_properties const*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct acpi_device *VAR_2)
{
 struct fujitsu_bl *VAR_3 = FUNC_2(VAR_2);
 const struct backlight_properties VAR_4 = {
  .brightness = VAR_3->brightness_level,
  .max_brightness = VAR_3->max_brightness - 1,
  .type = VAR_0
 };
 struct backlight_device *VAR_5;

 VAR_5 = FUNC_3(&VAR_2->dev, "fujitsu-laptop",
         &VAR_2->dev, VAR_2,
         &VAR_1, &VAR_4);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_3->bl_device = VAR_5;

 return 0;
}
