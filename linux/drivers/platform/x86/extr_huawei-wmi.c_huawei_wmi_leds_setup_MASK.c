
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wmi_device {int dev; } ;
struct TYPE_2__ {char* name; int max_brightness; char* default_trigger; int flags; int * dev; int brightness; int brightness_set_blocking; } ;
struct huawei_wmi_priv {char* acpi_method; TYPE_1__ cdev; int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 struct huawei_wmi_priv* FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct wmi_device *VAR_3)
{
 struct huawei_wmi_priv *VAR_4 = FUNC_1(&VAR_3->dev);

 VAR_4->handle = FUNC_3();
 if (!VAR_4->handle)
  return 0;

 if (FUNC_0(VAR_4->handle, "SPIN"))
  VAR_4->acpi_method = "SPIN";
 else if (FUNC_0(VAR_4->handle, "WPIN"))
  VAR_4->acpi_method = "WPIN";
 else
  return 0;

 VAR_4->cdev.name = "platform::micmute";
 VAR_4->cdev.max_brightness = 1;
 VAR_4->cdev.brightness_set_blocking = VAR_2;
 VAR_4->cdev.default_trigger = "audio-micmute";
 VAR_4->cdev.brightness = FUNC_4(VAR_0);
 VAR_4->cdev.dev = &VAR_3->dev;
 VAR_4->cdev.flags = VAR_1;

 return FUNC_2(&VAR_3->dev, &VAR_4->cdev);
}
