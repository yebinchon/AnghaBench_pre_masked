
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_object {TYPE_1__ integer; int type; } ;
typedef int u64 ;
struct acpi_object_list {int count; union acpi_object* pointer; } ;
struct acpi_buffer {scalar_t__ pointer; int * member_1; int member_0; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,struct acpi_object_list*,struct acpi_buffer*) ;
 int FUNC_2 (char*,char*,...) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static union acpi_object *FUNC_4(acpi_handle VAR_2, char *VAR_3,
  u64 *VAR_4)
{
 union acpi_object *VAR_5 = ((void*)0);
 struct acpi_buffer VAR_6 = { VAR_0, ((void*)0) };
 acpi_status VAR_7;

 if (VAR_4) {
  struct acpi_object_list VAR_8;
  union acpi_object VAR_9;
  VAR_9.type = VAR_1;
  VAR_9.integer.value = *VAR_4;
  VAR_8.count = 1;
  VAR_8.pointer = &VAR_9;
  VAR_7 = FUNC_1(VAR_2, VAR_3, &VAR_8, &VAR_6);
  FUNC_2("__call_snc_method: [%s:0x%.8x%.8x]\n", VAR_3,
    (unsigned int)(*VAR_4 >> 32),
    (unsigned int)*VAR_4 & 0xffffffff);
 } else {
  VAR_7 = FUNC_1(VAR_2, VAR_3, ((void*)0), &VAR_6);
  FUNC_2("__call_snc_method: [%s]\n", VAR_3);
 }

 if (FUNC_0(VAR_7)) {
  FUNC_3("Failed to evaluate [%s]\n", VAR_3);
  return ((void*)0);
 }

 VAR_5 = (union acpi_object *) VAR_6.pointer;
 if (!VAR_5)
  FUNC_2("No return object [%s]\n", VAR_3);

 return VAR_5;
}
