
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_object {TYPE_1__ integer; int type; } ;
struct acpi_object_list {int count; union acpi_object* pointer; } ;
struct acpi_device {int handle; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,struct acpi_object_list*,int *) ;

__attribute__((used)) static int FUNC_2(struct acpi_device *VAR_2, bool VAR_3)
{
 struct acpi_object_list VAR_4;
 union acpi_object VAR_5;
 acpi_status VAR_6;

 VAR_5.type = VAR_0;
 VAR_5.integer.value = VAR_3;
 VAR_4.count = 1;
 VAR_4.pointer = &VAR_5;

 VAR_6 = FUNC_1(VAR_2->handle, "ARBT", &VAR_4, ((void*)0));
 if (FUNC_0(VAR_6))
  return -VAR_1;

 return 0;
}
