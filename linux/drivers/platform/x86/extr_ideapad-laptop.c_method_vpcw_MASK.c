
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_object {TYPE_1__ integer; void* type; } ;
struct acpi_object_list {int count; union acpi_object* pointer; } ;
typedef scalar_t__ acpi_status ;
typedef int acpi_handle ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,char*,struct acpi_object_list*,int *) ;

__attribute__((used)) static int FUNC_1(acpi_handle VAR_2, int VAR_3, int VAR_4)
{
 struct acpi_object_list VAR_5;
 union acpi_object VAR_6[2];
 acpi_status VAR_7;

 VAR_5.count = 2;
 VAR_5.pointer = VAR_6;
 VAR_6[0].type = VAR_0;
 VAR_6[0].integer.value = VAR_3;
 VAR_6[1].type = VAR_0;
 VAR_6[1].integer.value = VAR_4;

 VAR_7 = FUNC_0(VAR_2, "VPCW", &VAR_5, ((void*)0));
 if (VAR_7 != VAR_1)
  return -1;
 return 0;
}
