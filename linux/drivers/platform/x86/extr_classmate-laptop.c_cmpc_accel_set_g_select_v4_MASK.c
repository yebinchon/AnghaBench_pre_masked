
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_object {TYPE_1__ integer; void* type; } ;
struct acpi_object_list {int count; union acpi_object* pointer; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 void* VAR_0 ;
 int FUNC_0 (int ,char*,struct acpi_object_list*,int *) ;

__attribute__((used)) static acpi_status FUNC_1(acpi_handle VAR_1, int VAR_2)
{
 union acpi_object VAR_3[4];
 struct acpi_object_list VAR_4;

 VAR_3[0].type = VAR_0;
 VAR_3[0].integer.value = 0x05;
 VAR_3[1].type = VAR_0;
 VAR_3[1].integer.value = VAR_2;
 VAR_3[2].type = VAR_0;
 VAR_3[2].integer.value = 0;
 VAR_3[3].type = VAR_0;
 VAR_3[3].integer.value = 0;
 VAR_4.count = 4;
 VAR_4.pointer = VAR_3;
 return FUNC_0(VAR_1, "ACMD", &VAR_4, ((void*)0));
}
