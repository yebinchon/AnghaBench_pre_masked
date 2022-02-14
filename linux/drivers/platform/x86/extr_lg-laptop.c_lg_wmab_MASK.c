
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* value; } ;
union acpi_object {TYPE_1__ integer; void* type; } ;
typedef void* u32 ;
struct acpi_object_list {int count; union acpi_object* pointer; } ;
struct acpi_buffer {union acpi_object* pointer; int * member_1; int member_0; } ;
typedef int acpi_string ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int *,struct acpi_object_list*,struct acpi_buffer*) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static union acpi_object *FUNC_5(u32 VAR_3, u32 VAR_4, u32 VAR_5)
{
 union acpi_object VAR_6[3];
 acpi_status VAR_7;
 acpi_handle VAR_8;
 struct acpi_object_list VAR_9;
 struct acpi_buffer VAR_10 = { VAR_0, ((void*)0) };

 VAR_6[0].type = VAR_1;
 VAR_6[0].integer.value = VAR_3;
 VAR_6[1].type = VAR_1;
 VAR_6[1].integer.value = VAR_4;
 VAR_6[2].type = VAR_1;
 VAR_6[2].integer.value = VAR_5;

 VAR_7 = FUNC_2(((void*)0), (acpi_string) VAR_2, &VAR_8);
 if (FUNC_0(VAR_7)) {
  FUNC_4("Cannot get handle");
  return ((void*)0);
 }

 VAR_9.count = 3;
 VAR_9.pointer = VAR_6;

 VAR_7 = FUNC_1(VAR_8, ((void*)0), &VAR_9, &VAR_10);
 if (FUNC_0(VAR_7)) {
  FUNC_3(VAR_8, "WMAB: call failed.\n");
  return ((void*)0);
 }

 return VAR_10.pointer;
}
