
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asus_laptop {int is_pega_lucid; struct acpi_device* device; int handle; } ;
struct acpi_device {struct asus_laptop* driver_data; int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (struct acpi_device*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct asus_laptop*) ;
 int FUNC_4 (struct asus_laptop*) ;
 int FUNC_5 (struct asus_laptop*) ;
 int FUNC_6 (struct asus_laptop*) ;
 int VAR_7 ;
 int FUNC_7 () ;
 int FUNC_8 (struct asus_laptop*) ;
 int FUNC_9 (struct asus_laptop*) ;
 int FUNC_10 (struct asus_laptop*) ;
 int FUNC_11 (struct asus_laptop*) ;
 int FUNC_12 (struct asus_laptop*) ;
 int FUNC_13 (struct asus_laptop*) ;
 int FUNC_14 (struct asus_laptop*) ;
 int FUNC_15 (struct asus_laptop*) ;
 int FUNC_16 (struct asus_laptop*) ;
 struct asus_laptop* FUNC_17 (int,int ) ;
 int FUNC_18 (struct asus_laptop*) ;
 int FUNC_19 (struct asus_laptop*) ;
 int FUNC_20 (struct asus_laptop*) ;
 int FUNC_21 (char*,int ) ;
 int FUNC_22 (int ,int ) ;

__attribute__((used)) static int FUNC_23(struct acpi_device *VAR_8)
{
 struct asus_laptop *VAR_9;
 int VAR_10;

 FUNC_21("Asus Laptop Support version %s\n",
    VAR_2);
 VAR_9 = FUNC_17(sizeof(struct asus_laptop), VAR_5);
 if (!VAR_9)
  return -VAR_4;
 VAR_9->handle = VAR_8->handle;
 FUNC_22(FUNC_1(VAR_8), VAR_1);
 FUNC_22(FUNC_0(VAR_8), VAR_0);
 VAR_8->driver_data = VAR_9;
 VAR_9->device = VAR_8;

 FUNC_7();

 VAR_10 = FUNC_3(VAR_9);
 if (VAR_10)
  goto fail_platform;





 VAR_9->is_pega_lucid = FUNC_6(VAR_9);
 VAR_10 = FUNC_13(VAR_9);
 if (VAR_10)
  goto fail_platform;

 if (FUNC_2() == VAR_6) {
  VAR_10 = FUNC_5(VAR_9);
  if (VAR_10)
   goto fail_backlight;
 }

 VAR_10 = FUNC_9(VAR_9);
 if (VAR_10)
  goto fail_input;

 VAR_10 = FUNC_11(VAR_9);
 if (VAR_10)
  goto fail_led;

 VAR_10 = FUNC_15(VAR_9);
 if (VAR_10 && VAR_10 != -VAR_3)
  goto fail_rfkill;

 VAR_10 = FUNC_19(VAR_9);
 if (VAR_10 && VAR_10 != -VAR_3)
  goto fail_pega_accel;

 VAR_10 = FUNC_20(VAR_9);
 if (VAR_10 && VAR_10 != -VAR_3)
  goto fail_pega_rfkill;

 VAR_7 = 1;
 return 0;

fail_pega_rfkill:
 FUNC_18(VAR_9);
fail_pega_accel:
 FUNC_14(VAR_9);
fail_rfkill:
 FUNC_10(VAR_9);
fail_led:
 FUNC_8(VAR_9);
fail_input:
 FUNC_4(VAR_9);
fail_backlight:
 FUNC_12(VAR_9);
fail_platform:
 FUNC_16(VAR_9);

 return VAR_10;
}
