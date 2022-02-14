
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device_ops {int dummy; } ;
struct proc_thermal_device {int int340x_zone; struct acpi_device* adev; struct device* dev; } ;
struct device {int dummy; } ;
struct acpi_device {int handle; } ;
typedef int acpi_status ;


 struct acpi_device* FUNC_0 (struct device*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int *,unsigned long long*) ;
 int FUNC_5 (int ,int ,int ,void*) ;
 struct proc_thermal_device* FUNC_6 (struct device*,int,int ) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (struct acpi_device*,struct thermal_zone_device_ops*) ;
 int FUNC_9 (int ) ;
 struct thermal_zone_device_ops VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (struct proc_thermal_device*) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int FUNC_11(struct device *VAR_7,
       struct proc_thermal_device **VAR_8)
{
 struct proc_thermal_device *VAR_9;
 struct acpi_device *VAR_10;
 acpi_status VAR_11;
 unsigned long long VAR_12;
 struct thermal_zone_device_ops *VAR_13 = ((void*)0);
 int VAR_14;

 VAR_10 = FUNC_0(VAR_7);
 if (!VAR_10)
  return -VAR_1;

 VAR_9 = FUNC_6(VAR_7, sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_2;

 VAR_9->dev = VAR_7;
 VAR_9->adev = VAR_10;
 *VAR_8 = VAR_9;

 VAR_14 = FUNC_10(VAR_9);
 if (VAR_14)
  return VAR_14;

 VAR_11 = FUNC_4(VAR_10->handle, "_TMP", ((void*)0), &VAR_12);
 if (FUNC_1(VAR_11)) {

  VAR_6 = FUNC_7();
  if (VAR_6 > 0)
   VAR_13 = &VAR_4;
 }

 VAR_9->int340x_zone = FUNC_8(VAR_10, VAR_13);
 if (FUNC_2(VAR_9->int340x_zone)) {
  return FUNC_3(VAR_9->int340x_zone);
 } else
  VAR_14 = 0;

 VAR_14 = FUNC_5(VAR_10->handle, VAR_0,
       VAR_5,
       (void *)VAR_9);
 if (VAR_14)
  goto remove_zone;

 return 0;

remove_zone:
 FUNC_9(VAR_9->int340x_zone);

 return VAR_14;
}
