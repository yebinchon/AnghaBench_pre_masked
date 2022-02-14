
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct led_classdev {char* name; int brightness_get; int brightness_set; int flags; int max_brightness; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int *,char*,int ,int ) ;
 struct led_classdev* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *,struct led_classdev*) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_9)
{
 struct led_classdev *VAR_10;
 acpi_handle VAR_11;
 acpi_status VAR_12;
 int VAR_13;


 VAR_12 = FUNC_1(VAR_2,
     VAR_0,
     &VAR_11);
 if (FUNC_0(VAR_12)) {
  FUNC_2(&VAR_9->dev, "Unable to find ACPI device %s: %d\n",
   VAR_0, VAR_12);
  return -VAR_4;
 }

 VAR_10 = FUNC_3(&VAR_9->dev, sizeof(*VAR_10), VAR_5);
 if (!VAR_10)
  return -VAR_3;

 VAR_10->name = "chromeos::kbd_backlight";
 VAR_10->max_brightness = VAR_1;
 VAR_10->flags |= VAR_6;
 VAR_10->brightness_set = VAR_8;
 VAR_10->brightness_get = VAR_7;

 VAR_13 = FUNC_4(&VAR_9->dev, VAR_10);
 if (VAR_13)
  return VAR_13;

 return 0;
}
