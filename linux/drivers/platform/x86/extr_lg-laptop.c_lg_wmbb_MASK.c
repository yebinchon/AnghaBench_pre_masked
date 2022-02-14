
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int length; int * pointer; } ;
struct TYPE_3__ {int value; } ;
union acpi_object {TYPE_2__ buffer; void* type; TYPE_1__ integer; } ;
typedef int u8 ;
typedef int u32 ;
struct acpi_object_list {int count; union acpi_object* pointer; } ;
struct acpi_buffer {scalar_t__ pointer; int * member_1; int member_0; } ;
typedef int acpi_string ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int *,struct acpi_object_list*,struct acpi_buffer*) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static union acpi_object *FUNC_5(u32 VAR_4, u32 VAR_5, u32 VAR_6)
{
 union acpi_object VAR_7[3];
 acpi_status VAR_8;
 acpi_handle VAR_9;
 struct acpi_object_list VAR_10;
 struct acpi_buffer VAR_11 = { VAR_0, ((void*)0) };
 u8 VAR_12[32];

 *(u32 *)VAR_12 = VAR_4;
 *(u32 *)(VAR_12 + 4) = VAR_5;
 *(u32 *)(VAR_12 + 16) = VAR_6;
 VAR_7[0].type = VAR_2;
 VAR_7[0].integer.value = 0;
 VAR_7[1].type = VAR_2;
 VAR_7[1].integer.value = 1;
 VAR_7[2].type = VAR_1;
 VAR_7[2].buffer.length = 32;
 VAR_7[2].buffer.pointer = VAR_12;

 VAR_8 = FUNC_2(((void*)0), (acpi_string)VAR_3, &VAR_9);
 if (FUNC_0(VAR_8)) {
  FUNC_4("Cannot get handle");
  return ((void*)0);
 }

 VAR_10.count = 3;
 VAR_10.pointer = VAR_7;

 VAR_8 = FUNC_1(VAR_9, ((void*)0), &VAR_10, &VAR_11);
 if (FUNC_0(VAR_8)) {
  FUNC_3(VAR_9, "WMAB: call failed.\n");
  return ((void*)0);
 }

 return (union acpi_object *)VAR_11.pointer;
}
