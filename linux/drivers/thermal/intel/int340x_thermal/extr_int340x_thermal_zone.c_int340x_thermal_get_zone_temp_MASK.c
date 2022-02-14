
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thermal_zone_device {struct int34x_thermal_zone* devdata; } ;
struct int34x_thermal_zone {scalar_t__ lpat_table; TYPE_1__* adev; TYPE_2__* override_ops; } ;
typedef int acpi_status ;
struct TYPE_4__ {int (* get_temp ) (struct thermal_zone_device*,int*) ;} ;
struct TYPE_3__ {int handle; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (unsigned long long) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,int *,unsigned long long*) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (struct thermal_zone_device*,int*) ;

__attribute__((used)) static int FUNC_5(struct thermal_zone_device *VAR_1,
      int *VAR_2)
{
 struct int34x_thermal_zone *VAR_3 = VAR_1->devdata;
 unsigned long long VAR_4;
 acpi_status VAR_5;

 if (VAR_3->override_ops && VAR_3->override_ops->get_temp)
  return VAR_3->override_ops->get_temp(VAR_1, VAR_2);

 VAR_5 = FUNC_2(VAR_3->adev->handle, "_TMP", ((void*)0), &VAR_4);
 if (FUNC_0(VAR_5))
  return -VAR_0;

 if (VAR_3->lpat_table) {
  int VAR_6;

  VAR_6 = FUNC_3(VAR_3->lpat_table, (int)VAR_4);
  if (VAR_6 < 0)
   return VAR_6;

  *VAR_2 = (unsigned long)VAR_6 * 10;
 } else

  *VAR_2 = FUNC_1(VAR_4);

 return 0;
}
