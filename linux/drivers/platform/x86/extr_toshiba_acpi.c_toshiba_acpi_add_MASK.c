
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_12__ {char* name; int max_brightness; int brightness_get; int brightness_set; int flags; } ;
struct TYPE_10__ {char* name; int * fops; int minor; } ;
struct toshiba_acpi_dev {char const* method_hci; int kbd_function_keys_supported; int tr_backlight_supported; int illumination_led_registered; int eco_led_registered; scalar_t__ kbd_mode; int kbd_type; int kbd_led_registered; int touchpad_supported; int usb_rapid_charge_supported; int usb_sleep_music_supported; int panel_power_on_supported; int usb_three_supported; int video_supported; int fan_supported; int sysfs_created; struct acpi_device* acpi_dev; scalar_t__ wwan_supported; TYPE_5__* indio_dev; scalar_t__ accelerometer_supported; TYPE_4__ kbd_led; scalar_t__ kbd_illum_supported; TYPE_4__ eco_led; scalar_t__ eco_supported; TYPE_4__ led_dev; scalar_t__ illumination_supported; scalar_t__ hotkey_event_type; int special_functions; TYPE_2__ miscdev; } ;
struct TYPE_11__ {int kobj; } ;
struct acpi_device {TYPE_3__ dev; struct toshiba_acpi_dev* driver_data; int handle; } ;
struct TYPE_9__ {TYPE_3__* parent; } ;
struct TYPE_13__ {char* name; int num_channels; int channels; int modes; TYPE_1__ dev; int * info; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct toshiba_acpi_dev*) ;
 int FUNC_2 (TYPE_3__*,struct toshiba_acpi_dev*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (struct toshiba_acpi_dev*,int *) ;
 int FUNC_5 (struct toshiba_acpi_dev*,int *) ;
 int FUNC_6 (struct toshiba_acpi_dev*,int *) ;
 TYPE_5__* FUNC_7 (int) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (struct toshiba_acpi_dev*) ;
 struct toshiba_acpi_dev* FUNC_11 (int,int ) ;
 int FUNC_12 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (struct toshiba_acpi_dev*) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (struct toshiba_acpi_dev*) ;
 struct toshiba_acpi_dev* VAR_9 ;
 int VAR_10 ;
 int FUNC_19 (struct acpi_device*) ;
 int FUNC_20 (struct toshiba_acpi_dev*) ;
 scalar_t__ FUNC_21 (struct toshiba_acpi_dev*) ;
 int FUNC_22 (struct toshiba_acpi_dev*) ;
 int VAR_11 ;
 int FUNC_23 (struct toshiba_acpi_dev*) ;
 int FUNC_24 (struct toshiba_acpi_dev*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_25 (struct toshiba_acpi_dev*,int *) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_26 (struct toshiba_acpi_dev*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_27 (struct toshiba_acpi_dev*) ;
 int FUNC_28 (struct toshiba_acpi_dev*,int *) ;
 int FUNC_29 (struct toshiba_acpi_dev*,int *) ;
 int FUNC_30 (struct toshiba_acpi_dev*,int *) ;
 int FUNC_31 (struct toshiba_acpi_dev*) ;
 int FUNC_32 (struct toshiba_acpi_dev*,int *) ;
 int FUNC_33 (struct toshiba_acpi_dev*,int *) ;
 int FUNC_34 (struct toshiba_acpi_dev*) ;

__attribute__((used)) static int FUNC_35(struct acpi_device *VAR_20)
{
 struct toshiba_acpi_dev *VAR_21;
 const char *VAR_22;
 u32 VAR_23;
 int VAR_24 = 0;

 if (VAR_9)
  return -VAR_0;

 FUNC_15("Toshiba Laptop ACPI Extras version %s\n",
        VAR_8);

 VAR_22 = FUNC_3(VAR_20->handle);
 if (!VAR_22) {
  FUNC_14("HCI interface not found\n");
  return -VAR_1;
 }

 VAR_21 = FUNC_11(sizeof(*VAR_21), VAR_3);
 if (!VAR_21)
  return -VAR_2;
 VAR_21->acpi_dev = VAR_20;
 VAR_21->method_hci = VAR_22;
 VAR_21->miscdev.minor = VAR_6;
 VAR_21->miscdev.name = "toshiba_acpi";
 VAR_21->miscdev.fops = &VAR_10;

 VAR_24 = FUNC_13(&VAR_21->miscdev);
 if (VAR_24) {
  FUNC_14("Failed to register miscdevice\n");
  FUNC_10(VAR_21);
  return VAR_24;
 }

 VAR_20->driver_data = VAR_21;
 FUNC_2(&VAR_20->dev, VAR_21);
 VAR_24 = FUNC_25(VAR_21, &VAR_21->special_functions);
 VAR_21->kbd_function_keys_supported = !VAR_24;

 VAR_21->hotkey_event_type = 0;
 if (FUNC_21(VAR_21))
  FUNC_15("Unable to activate hotkeys\n");


 VAR_24 = FUNC_5(VAR_21, &VAR_23);
 VAR_21->tr_backlight_supported = !VAR_24;

 VAR_24 = FUNC_20(VAR_21);
 if (VAR_24)
  goto error;

 FUNC_26(VAR_21);
 if (VAR_21->illumination_supported) {
  VAR_21->led_dev.name = "toshiba::illumination";
  VAR_21->led_dev.max_brightness = 1;
  VAR_21->led_dev.brightness_set = VAR_17;
  VAR_21->led_dev.brightness_get = VAR_16;
  if (!FUNC_12(&VAR_20->dev, &VAR_21->led_dev))
   VAR_21->illumination_led_registered = 1;
 }

 FUNC_24(VAR_21);
 if (VAR_21->eco_supported) {
  VAR_21->eco_led.name = "toshiba::eco_mode";
  VAR_21->eco_led.max_brightness = 1;
  VAR_21->eco_led.brightness_set = VAR_13;
  VAR_21->eco_led.brightness_get = VAR_12;
  if (!FUNC_12(&VAR_21->acpi_dev->dev, &VAR_21->eco_led))
   VAR_21->eco_led_registered = 1;
 }

 FUNC_27(VAR_21);





 if (VAR_21->kbd_illum_supported &&
     (VAR_21->kbd_mode == VAR_7 || VAR_21->kbd_type == 2)) {
  VAR_21->kbd_led.name = "toshiba::kbd_backlight";
  VAR_21->kbd_led.flags = VAR_5;
  VAR_21->kbd_led.max_brightness = 1;
  VAR_21->kbd_led.brightness_set = VAR_19;
  VAR_21->kbd_led.brightness_get = VAR_18;
  if (!FUNC_12(&VAR_21->acpi_dev->dev, &VAR_21->kbd_led))
   VAR_21->kbd_led_registered = 1;
 }

 VAR_24 = FUNC_29(VAR_21, &VAR_23);
 VAR_21->touchpad_supported = !VAR_24;

 FUNC_18(VAR_21);
 if (VAR_21->accelerometer_supported) {
  VAR_21->indio_dev = FUNC_7(sizeof(*VAR_21));
  if (!VAR_21->indio_dev) {
   FUNC_14("Unable to allocate iio device\n");
   goto iio_error;
  }

  FUNC_15("Registering Toshiba accelerometer iio device\n");

  VAR_21->indio_dev->info = &VAR_15;
  VAR_21->indio_dev->name = "Toshiba accelerometer";
  VAR_21->indio_dev->dev.parent = &VAR_20->dev;
  VAR_21->indio_dev->modes = VAR_4;
  VAR_21->indio_dev->channels = VAR_14;
  VAR_21->indio_dev->num_channels =
     FUNC_0(VAR_14);

  VAR_24 = FUNC_9(VAR_21->indio_dev);
  if (VAR_24 < 0) {
   FUNC_14("Unable to register iio device\n");
   FUNC_8(VAR_21->indio_dev);
  }
 }
iio_error:

 FUNC_31(VAR_21);

 VAR_24 = FUNC_30(VAR_21, &VAR_23);
 VAR_21->usb_rapid_charge_supported = !VAR_24;

 VAR_24 = FUNC_32(VAR_21, &VAR_23);
 VAR_21->usb_sleep_music_supported = !VAR_24;

 VAR_24 = FUNC_28(VAR_21, &VAR_23);
 VAR_21->panel_power_on_supported = !VAR_24;

 VAR_24 = FUNC_33(VAR_21, &VAR_23);
 VAR_21->usb_three_supported = !VAR_24;

 VAR_24 = FUNC_6(VAR_21, &VAR_23);
 VAR_21->video_supported = !VAR_24;

 VAR_24 = FUNC_4(VAR_21, &VAR_23);
 VAR_21->fan_supported = !VAR_24;

 FUNC_34(VAR_21);
 if (VAR_21->wwan_supported)
  FUNC_22(VAR_21);

 FUNC_23(VAR_21);

 FUNC_16(VAR_21);

 VAR_24 = FUNC_17(&VAR_21->acpi_dev->dev.kobj,
     &VAR_11);
 if (VAR_24) {
  VAR_21->sysfs_created = 0;
  goto error;
 }
 VAR_21->sysfs_created = !VAR_24;

 FUNC_1(VAR_21);

 VAR_9 = VAR_21;

 return 0;

error:
 FUNC_19(VAR_20);
 return VAR_24;
}
