
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thermal_zone_device {struct int34x_thermal_zone* devdata; } ;
struct int34x_thermal_zone {TYPE_1__* adev; TYPE_2__* override_ops; } ;
typedef int acpi_status ;
struct TYPE_4__ {int (* get_trip_hyst ) (struct thermal_zone_device*,int,int*) ;} ;
struct TYPE_3__ {int handle; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int *,unsigned long long*) ;
 int FUNC_2 (struct thermal_zone_device*,int,int*) ;

__attribute__((used)) static int FUNC_3(struct thermal_zone_device *VAR_0,
  int VAR_1, int *VAR_2)
{
 struct int34x_thermal_zone *VAR_3 = VAR_0->devdata;
 acpi_status VAR_4;
 unsigned long long VAR_5;

 if (VAR_3->override_ops && VAR_3->override_ops->get_trip_hyst)
  return VAR_3->override_ops->get_trip_hyst(VAR_0, VAR_1, VAR_2);

 VAR_4 = FUNC_1(VAR_3->adev->handle, "GTSH", ((void*)0), &VAR_5);
 if (FUNC_0(VAR_4))
  *VAR_2 = 0;
 else
  *VAR_2 = VAR_5 * 100;

 return 0;
}
