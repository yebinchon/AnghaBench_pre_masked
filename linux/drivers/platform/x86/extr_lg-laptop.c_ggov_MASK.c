
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_object {scalar_t__ type; TYPE_1__ integer; } ;
typedef int u32 ;
struct acpi_object_list {int count; union acpi_object* pointer; } ;
struct acpi_buffer {union acpi_object* pointer; int * member_1; int member_0; } ;
typedef int acpi_string ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int *,struct acpi_object_list*,struct acpi_buffer*) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (union acpi_object*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(u32 VAR_5)
{
 union acpi_object VAR_6[1];
 union acpi_object *VAR_7;
 acpi_status VAR_8;
 acpi_handle VAR_9;
 struct acpi_object_list VAR_10;
 struct acpi_buffer VAR_11 = { VAR_0, ((void*)0) };
 int VAR_12;

 VAR_6[0].type = VAR_1;
 VAR_6[0].integer.value = VAR_5;

 VAR_8 = FUNC_2(((void*)0), (acpi_string) VAR_4, &VAR_9);
 if (FUNC_0(VAR_8)) {
  FUNC_5("Cannot get handle");
  return -VAR_3;
 }

 VAR_10.count = 1;
 VAR_10.pointer = VAR_6;

 VAR_8 = FUNC_1(VAR_9, ((void*)0), &VAR_10, &VAR_11);
 if (FUNC_0(VAR_8)) {
  FUNC_3(VAR_9, "GGOV: call failed.\n");
  return -VAR_2;
 }

 VAR_7 = VAR_11.pointer;
 if (VAR_7->type != VAR_1) {
  FUNC_4(VAR_7);
  return -VAR_2;
 }

 VAR_12 = VAR_7->integer.value;
 FUNC_4(VAR_7);

 return VAR_12;
}
