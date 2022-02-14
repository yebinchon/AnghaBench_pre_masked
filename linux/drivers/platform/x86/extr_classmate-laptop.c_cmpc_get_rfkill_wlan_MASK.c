
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_object {TYPE_1__ integer; int type; } ;
struct acpi_object_list {int count; union acpi_object* pointer; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,struct acpi_object_list*,unsigned long long*) ;

__attribute__((used)) static acpi_status FUNC_2(acpi_handle VAR_1,
     unsigned long long *VAR_2)
{
 union acpi_object VAR_3;
 struct acpi_object_list VAR_4;
 unsigned long long VAR_5;
 acpi_status VAR_6;

 VAR_3.type = VAR_0;
 VAR_3.integer.value = 0xC1;
 VAR_4.count = 1;
 VAR_4.pointer = &VAR_3;
 VAR_6 = FUNC_1(VAR_1, "GRDI", &VAR_4, &VAR_5);
 if (FUNC_0(VAR_6))
  *VAR_2 = VAR_5;
 return VAR_6;
}
