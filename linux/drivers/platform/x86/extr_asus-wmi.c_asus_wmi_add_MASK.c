
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct platform_driver {int dummy; } ;
struct TYPE_3__ {int driver; } ;
struct platform_device {TYPE_1__ dev; } ;
struct asus_wmi_driver {int wlan_ctrl_by_user; int event_guid; TYPE_2__* quirks; int (* detect_quirks ) (struct asus_wmi_driver*) ;struct platform_device* platform_device; } ;
struct asus_wmi {int fnlock_locked; struct platform_device* platform_device; struct asus_wmi_driver* driver; } ;
typedef int acpi_status ;
struct TYPE_4__ {scalar_t__ wmi_backlight_set_devstate; scalar_t__ xusb2pr; scalar_t__ wmi_backlight_native; scalar_t__ wmi_backlight_power; scalar_t__ wmi_force_als_set; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct asus_wmi*) ;
 int FUNC_5 (struct asus_wmi*) ;
 int FUNC_6 (struct asus_wmi*) ;
 int FUNC_7 (struct asus_wmi*) ;
 int FUNC_8 (struct asus_wmi*) ;
 int FUNC_9 (struct asus_wmi*) ;
 int FUNC_10 (struct asus_wmi*,int ,int*) ;
 scalar_t__ FUNC_11 (struct asus_wmi*) ;
 int FUNC_12 (struct asus_wmi*) ;
 int FUNC_13 (struct asus_wmi*) ;
 int FUNC_14 (struct asus_wmi*) ;
 int FUNC_15 (struct asus_wmi*) ;
 int FUNC_16 (struct asus_wmi*) ;
 int VAR_10 ;
 int FUNC_17 (struct asus_wmi*) ;
 int FUNC_18 (struct asus_wmi*) ;
 int FUNC_19 (struct asus_wmi*) ;
 int FUNC_20 () ;
 int FUNC_21 (int ,int,int *) ;
 int FUNC_22 (struct asus_wmi*) ;
 int FUNC_23 (struct platform_device*) ;
 int FUNC_24 (struct platform_device*) ;
 char* FUNC_25 (int ) ;
 int FUNC_26 (struct asus_wmi*) ;
 int FUNC_27 (struct asus_wmi*) ;
 struct asus_wmi* FUNC_28 (int,int ) ;
 int FUNC_29 (struct platform_device*,struct asus_wmi*) ;
 int FUNC_30 (char*,int ) ;
 int FUNC_31 (char const*,char*) ;
 int FUNC_32 (struct asus_wmi_driver*) ;
 struct asus_wmi_driver* FUNC_33 (struct platform_driver*) ;
 struct platform_driver* FUNC_34 (int ) ;
 int FUNC_35 (int ,int ,struct asus_wmi*) ;

__attribute__((used)) static int FUNC_36(struct platform_device *VAR_11)
{
 struct platform_driver *VAR_12 = FUNC_34(VAR_11->dev.driver);
 struct asus_wmi_driver *VAR_13 = FUNC_33(VAR_12);
 struct asus_wmi *VAR_14;
 const char *VAR_15;
 acpi_status VAR_16;
 int VAR_17;
 u32 VAR_18;

 VAR_14 = FUNC_28(sizeof(struct asus_wmi), VAR_7);
 if (!VAR_14)
  return -VAR_6;

 VAR_14->driver = VAR_13;
 VAR_14->platform_device = VAR_11;
 VAR_13->platform_device = VAR_11;
 FUNC_29(VAR_14->platform_device, VAR_14);

 if (VAR_13->detect_quirks)
  VAR_13->detect_quirks(VAR_14->driver);

 VAR_17 = FUNC_17(VAR_14);
 if (VAR_17)
  goto fail_platform;

 VAR_17 = FUNC_26(VAR_14);
 if (VAR_17)
  goto fail_fan_boost_mode;

 VAR_17 = FUNC_24(VAR_14->platform_device);
 if (VAR_17)
  goto fail_sysfs;

 VAR_17 = FUNC_14(VAR_14);
 if (VAR_17)
  goto fail_input;

 VAR_17 = FUNC_8(VAR_14);

 VAR_17 = FUNC_12(VAR_14);
 if (VAR_17)
  goto fail_hwmon;

 VAR_17 = FUNC_16(VAR_14);
 if (VAR_17)
  goto fail_leds;

 FUNC_10(VAR_14, VAR_1, &VAR_18);
 if (VAR_18 & (VAR_2 | VAR_3))
  VAR_14->driver->wlan_ctrl_by_user = 1;

 if (!(VAR_14->driver->wlan_ctrl_by_user && FUNC_3())) {
  VAR_17 = FUNC_19(VAR_14);
  if (VAR_17)
   goto fail_rfkill;
 }

 if (VAR_14->driver->quirks->wmi_force_als_set)
  FUNC_20();



 VAR_15 = FUNC_25(VAR_4);
 if (VAR_15 && !FUNC_31(VAR_15, "3"))
  FUNC_2(VAR_9);

 if (VAR_14->driver->quirks->wmi_backlight_power)
  FUNC_2(VAR_9);

 if (VAR_14->driver->quirks->wmi_backlight_native)
  FUNC_2(VAR_8);

 if (VAR_14->driver->quirks->xusb2pr)
  FUNC_22(VAR_14);

 if (FUNC_1() == VAR_9) {
  VAR_17 = FUNC_5(VAR_14);
  if (VAR_17 && VAR_17 != -VAR_5)
   goto fail_backlight;
 } else if (VAR_14->driver->quirks->wmi_backlight_set_devstate)
  VAR_17 = FUNC_21(VAR_0, 2, ((void*)0));

 if (FUNC_11(VAR_14)) {
  VAR_14->fnlock_locked = 1;
  FUNC_9(VAR_14);
 }

 VAR_16 = FUNC_35(VAR_14->driver->event_guid,
         VAR_10, VAR_14);
 if (FUNC_0(VAR_16)) {
  FUNC_30("Unable to register notify handler - %d\n", VAR_16);
  VAR_17 = -VAR_5;
  goto fail_wmi_handler;
 }

 FUNC_6(VAR_14);

 FUNC_7(VAR_14);

 return 0;

fail_wmi_handler:
 FUNC_4(VAR_14);
fail_backlight:
 FUNC_18(VAR_14);
fail_rfkill:
 FUNC_15(VAR_14);
fail_leds:
fail_hwmon:
 FUNC_13(VAR_14);
fail_input:
 FUNC_23(VAR_14->platform_device);
fail_sysfs:
fail_fan_boost_mode:
fail_platform:
 FUNC_27(VAR_14);
 return VAR_17;
}
