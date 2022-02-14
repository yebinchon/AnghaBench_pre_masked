
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int value; } ;
struct TYPE_6__ {int count; union acpi_object* elements; } ;
union acpi_object {scalar_t__ type; TYPE_4__ integer; TYPE_2__ package; } ;
struct proc_thermal_device {TYPE_3__* power_limits; int dev; TYPE_1__* adev; } ;
struct acpi_buffer {union acpi_object* pointer; int * member_1; int member_0; } ;
typedef int acpi_status ;
struct TYPE_7__ {int step_uw; int tmax_us; int tmin_us; int max_uw; int min_uw; int index; } ;
struct TYPE_5__ {int handle; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int *,struct acpi_buffer*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (union acpi_object*) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct proc_thermal_device *VAR_4)
{
 int VAR_5;
 acpi_status VAR_6;
 struct acpi_buffer VAR_7 = { VAR_0, ((void*)0) };
 union acpi_object *VAR_8, *VAR_9;
 union acpi_object *VAR_10;
 int VAR_11 = 0;

 VAR_6 = FUNC_1(VAR_4->adev->handle, "PPCC",
          ((void*)0), &VAR_7);
 if (FUNC_0(VAR_6))
  return -VAR_3;

 VAR_10 = VAR_7.pointer;
 if (!VAR_10 || (VAR_10->type != VAR_1)) {
  FUNC_2(VAR_4->dev, "Invalid PPCC data\n");
  VAR_11 = -VAR_2;
  goto free_buffer;
 }

 if (!VAR_10->package.count) {
  FUNC_2(VAR_4->dev, "Invalid PPCC package size\n");
  VAR_11 = -VAR_2;
  goto free_buffer;
 }

 for (VAR_5 = 0; VAR_5 < FUNC_4((int)VAR_10->package.count - 1, 2); ++VAR_5) {
  VAR_8 = &(VAR_10->package.elements[VAR_5+1]);
  if (VAR_8->type != VAR_1 ||
      VAR_8->package.count != 6) {
   VAR_11 = -VAR_2;
   goto free_buffer;
  }
  VAR_9 = VAR_8->package.elements;
  VAR_4->power_limits[VAR_5].index = VAR_9[0].integer.value;
  VAR_4->power_limits[VAR_5].min_uw = VAR_9[1].integer.value;
  VAR_4->power_limits[VAR_5].max_uw = VAR_9[2].integer.value;
  VAR_4->power_limits[VAR_5].tmin_us = VAR_9[3].integer.value;
  VAR_4->power_limits[VAR_5].tmax_us = VAR_9[4].integer.value;
  VAR_4->power_limits[VAR_5].step_uw = VAR_9[5].integer.value;
 }

free_buffer:
 FUNC_3(VAR_7.pointer);

 return VAR_11;
}
