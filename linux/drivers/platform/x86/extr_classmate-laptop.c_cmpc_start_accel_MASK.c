
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_object {void* type; TYPE_1__ integer; } ;
struct acpi_object_list {int count; union acpi_object* pointer; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 void* VAR_0 ;
 int FUNC_0 (int ,char*,struct acpi_object_list*,int *) ;

__attribute__((used)) static acpi_status FUNC_1(acpi_handle VAR_1)
{
 union acpi_object VAR_2[2];
 struct acpi_object_list VAR_3;
 acpi_status VAR_4;

 VAR_2[0].type = VAR_0;
 VAR_2[0].integer.value = 0x3;
 VAR_2[1].type = VAR_0;
 VAR_3.count = 2;
 VAR_3.pointer = VAR_2;
 VAR_4 = FUNC_0(VAR_1, "ACMD", &VAR_3, ((void*)0));
 return VAR_4;
}
