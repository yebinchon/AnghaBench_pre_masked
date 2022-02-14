
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long value; } ;
union acpi_object {TYPE_1__ integer; int type; } ;
struct thermal_cooling_device {struct acpi_device* devdata; } ;
struct acpi_object_list {int count; union acpi_object* pointer; } ;
struct acpi_device {int handle; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,struct acpi_object_list*,unsigned long long*) ;
 scalar_t__ FUNC_2 (struct thermal_cooling_device*,unsigned long*) ;
 int FUNC_3 (char*,unsigned long,int ) ;

__attribute__((used)) static int FUNC_4(struct thermal_cooling_device *VAR_4,
        unsigned long VAR_5)
{
 struct acpi_device *VAR_6 = VAR_4->devdata;
 acpi_handle VAR_7 = VAR_6->handle;
 struct acpi_object_list VAR_8;
 union acpi_object VAR_9;
 acpi_status VAR_10;
 unsigned long long VAR_11;
 unsigned long VAR_12;

 if (FUNC_2(VAR_4, &VAR_12))
  return -VAR_1;

 if (VAR_5 > VAR_12)
  return -VAR_2;

 VAR_8.count = 1;
 VAR_8.pointer = &VAR_9;
 VAR_9.type = VAR_0;
 VAR_9.integer.value = VAR_5;

 VAR_10 =
     FUNC_1(VAR_7, VAR_3, &VAR_8,
      &VAR_11);

 FUNC_3("Bandwidth value was %ld: status is %d\n", VAR_5, VAR_10);
 if (FUNC_0(VAR_10))
  return -VAR_1;

 return 0;
}
