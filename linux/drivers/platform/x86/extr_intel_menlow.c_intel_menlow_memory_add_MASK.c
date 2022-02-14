
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kobj; } ;
struct thermal_cooling_device {TYPE_1__ device; } ;
struct TYPE_4__ {int kobj; } ;
struct acpi_device {TYPE_2__ dev; struct thermal_cooling_device* driver_data; int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct thermal_cooling_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct thermal_cooling_device*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 int FUNC_3 (int *,int *,char*) ;
 int FUNC_4 (int *,char*) ;
 struct thermal_cooling_device* FUNC_5 (char*,struct acpi_device*,int *) ;
 int FUNC_6 (struct thermal_cooling_device*) ;

__attribute__((used)) static int FUNC_7(struct acpi_device *VAR_5)
{
 int VAR_6 = -VAR_1;
 struct thermal_cooling_device *VAR_7;

 if (!VAR_5)
  return -VAR_0;

 if (!FUNC_2(VAR_5->handle, VAR_2))
  goto end;

 if (!FUNC_2(VAR_5->handle, VAR_3))
  goto end;

 VAR_7 = FUNC_5("Memory controller", VAR_5,
            &VAR_4);
 if (FUNC_0(VAR_7)) {
  VAR_6 = FUNC_1(VAR_7);
  goto end;
 }

 VAR_5->driver_data = VAR_7;
 VAR_6 = FUNC_3(&VAR_5->dev.kobj,
    &VAR_7->device.kobj, "thermal_cooling");
 if (VAR_6)
  goto unregister;

 VAR_6 = FUNC_3(&VAR_7->device.kobj,
    &VAR_5->dev.kobj, "device");
 if (VAR_6) {
  FUNC_4(&VAR_5->dev.kobj, "thermal_cooling");
  goto unregister;
 }

 end:
 return VAR_6;

 unregister:
 FUNC_6(VAR_7);
 return VAR_6;

}
