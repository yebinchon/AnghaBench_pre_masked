
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union acpi_object {int dummy; } acpi_object ;
struct acpi_buffer {int length; union acpi_object* pointer; } ;
typedef int out_obj ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int *,struct acpi_buffer*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(void)
{
 acpi_status VAR_1;
 struct acpi_buffer VAR_2;
 union acpi_object VAR_3;

 VAR_2.length = sizeof(VAR_3);
 VAR_2.pointer = &VAR_3;
 VAR_1 = FUNC_1(VAR_0, "_INI", ((void*)0), &VAR_2);
 if (FUNC_0(VAR_1))
  return -1;

 return 0;
}
