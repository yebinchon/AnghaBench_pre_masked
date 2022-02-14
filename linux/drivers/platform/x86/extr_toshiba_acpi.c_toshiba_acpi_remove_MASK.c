
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct toshiba_acpi_dev {scalar_t__ wwan_rfk; int eco_led; scalar_t__ eco_led_registered; int kbd_led; scalar_t__ kbd_led_registered; int led_dev; scalar_t__ illumination_led_registered; int backlight_dev; scalar_t__ hotkey_dev; int hotkey_work; scalar_t__ ntfy_supported; TYPE_2__* acpi_dev; scalar_t__ sysfs_created; scalar_t__ indio_dev; scalar_t__ accelerometer_supported; int miscdev; } ;
struct acpi_device {int dummy; } ;
struct TYPE_3__ {int kobj; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 struct toshiba_acpi_dev* FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct toshiba_acpi_dev*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct toshiba_acpi_dev*) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (int *,int *) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_14(struct acpi_device *VAR_3)
{
 struct toshiba_acpi_dev *VAR_4 = FUNC_0(VAR_3);

 FUNC_9(&VAR_4->miscdev);

 FUNC_10(VAR_4);

 if (VAR_4->accelerometer_supported && VAR_4->indio_dev) {
  FUNC_5(VAR_4->indio_dev);
  FUNC_4(VAR_4->indio_dev);
 }

 if (VAR_4->sysfs_created)
  FUNC_13(&VAR_4->acpi_dev->dev.kobj,
       &VAR_2);

 if (VAR_4->ntfy_supported) {
  FUNC_3(VAR_1);
  FUNC_2(&VAR_4->hotkey_work);
 }

 if (VAR_4->hotkey_dev)
  FUNC_6(VAR_4->hotkey_dev);

 FUNC_1(VAR_4->backlight_dev);

 if (VAR_4->illumination_led_registered)
  FUNC_8(&VAR_4->led_dev);

 if (VAR_4->kbd_led_registered)
  FUNC_8(&VAR_4->kbd_led);

 if (VAR_4->eco_led_registered)
  FUNC_8(&VAR_4->eco_led);

 if (VAR_4->wwan_rfk) {
  FUNC_12(VAR_4->wwan_rfk);
  FUNC_11(VAR_4->wwan_rfk);
 }

 if (VAR_0)
  VAR_0 = ((void*)0);

 FUNC_7(VAR_4);

 return 0;
}
