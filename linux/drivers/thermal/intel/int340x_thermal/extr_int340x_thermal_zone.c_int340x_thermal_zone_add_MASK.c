
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device_ops {int dummy; } ;
struct int34x_thermal_zone {unsigned long long aux_trip_nr; struct int34x_thermal_zone* aux_trips; int lpat_table; int zone; struct thermal_zone_device_ops* override_ops; struct acpi_device* adev; } ;
struct acpi_device {int handle; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (unsigned long long) ;
 int VAR_0 ;
 struct int34x_thermal_zone* FUNC_2 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct acpi_device*) ;
 int FUNC_6 (int ,char*,int *,unsigned long long*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_2 ;
 unsigned long long FUNC_9 (struct int34x_thermal_zone*) ;
 int VAR_3 ;
 struct int34x_thermal_zone* FUNC_10 (unsigned long long,int,int ) ;
 int FUNC_11 (struct int34x_thermal_zone*) ;
 struct int34x_thermal_zone* FUNC_12 (int,int ) ;
 int FUNC_13 (int ,unsigned long long,int,struct int34x_thermal_zone*,int *,int *,int ,int ) ;

struct int34x_thermal_zone *FUNC_14(struct acpi_device *VAR_4,
    struct thermal_zone_device_ops *VAR_5)
{
 struct int34x_thermal_zone *VAR_6;
 acpi_status VAR_7;
 unsigned long long VAR_8;
 int VAR_9 = 0;
 int VAR_10;

 VAR_6 = FUNC_12(sizeof(*VAR_6),
          VAR_1);
 if (!VAR_6)
  return FUNC_2(-VAR_0);

 VAR_6->adev = VAR_4;
 VAR_6->override_ops = VAR_5;

 VAR_7 = FUNC_6(VAR_4->handle, "PATC", ((void*)0), &VAR_8);
 if (FUNC_0(VAR_7))
  VAR_8 = 0;
 else {
  VAR_6->aux_trips =
   FUNC_10(VAR_8,
    sizeof(*VAR_6->aux_trips),
    VAR_1);
  if (!VAR_6->aux_trips) {
   VAR_10 = -VAR_0;
   goto err_trip_alloc;
  }
  VAR_9 = FUNC_1(VAR_8) - 1;
  VAR_6->aux_trip_nr = VAR_8;
 }

 VAR_8 = FUNC_9(VAR_6);

 VAR_6->lpat_table = FUNC_8(
        VAR_4->handle);

 VAR_6->zone = FUNC_13(
      FUNC_5(VAR_4),
      VAR_8,
      VAR_9, VAR_6,
      &VAR_3,
      &VAR_2,
      0, 0);
 if (FUNC_3(VAR_6->zone)) {
  VAR_10 = FUNC_4(VAR_6->zone);
  goto err_thermal_zone;
 }

 return VAR_6;

err_thermal_zone:
 FUNC_7(VAR_6->lpat_table);
 FUNC_11(VAR_6->aux_trips);
err_trip_alloc:
 FUNC_11(VAR_6);
 return FUNC_2(VAR_10);
}
