
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thermal_zone_device {struct int34x_thermal_zone* devdata; } ;
struct int34x_thermal_zone {int* aux_trips; TYPE_1__* adev; TYPE_2__* override_ops; } ;
typedef int name ;
typedef int acpi_status ;
struct TYPE_4__ {int (* set_trip_temp ) (struct thermal_zone_device*,int,int) ;} ;
struct TYPE_3__ {int handle; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (char*,int,char*,int) ;
 int FUNC_4 (struct thermal_zone_device*,int,int) ;

__attribute__((used)) static int FUNC_5(struct thermal_zone_device *VAR_1,
          int VAR_2, int VAR_3)
{
 struct int34x_thermal_zone *VAR_4 = VAR_1->devdata;
 acpi_status VAR_5;
 char VAR_6[10];

 if (VAR_4->override_ops && VAR_4->override_ops->set_trip_temp)
  return VAR_4->override_ops->set_trip_temp(VAR_1, VAR_2, VAR_3);

 FUNC_3(VAR_6, sizeof(VAR_6), "PAT%d", VAR_2);
 VAR_5 = FUNC_2(VAR_4->adev->handle, VAR_6,
   FUNC_1(VAR_3));
 if (FUNC_0(VAR_5))
  return -VAR_0;

 VAR_4->aux_trips[VAR_2] = VAR_3;

 return 0;
}
