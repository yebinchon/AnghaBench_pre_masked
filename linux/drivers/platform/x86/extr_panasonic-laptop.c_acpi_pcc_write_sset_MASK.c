
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; int type; } ;
union acpi_object {TYPE_1__ integer; } ;
struct pcc_acpi {int handle; } ;
struct acpi_object_list {union acpi_object* pointer; int count; } ;
typedef scalar_t__ acpi_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (union acpi_object*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ,struct acpi_object_list*,int *) ;

__attribute__((used)) static int FUNC_2(struct pcc_acpi *VAR_4, int VAR_5, int VAR_6)
{
 union acpi_object VAR_7[] = {
  { .integer.type = VAR_0,
    .integer.value = VAR_5, },
  { .integer.type = VAR_0,
    .integer.value = VAR_6, },
 };
 struct acpi_object_list VAR_8 = {
  .count = FUNC_0(VAR_7),
  .pointer = VAR_7,
 };
 acpi_status VAR_9 = VAR_1;

 VAR_9 = FUNC_1(VAR_4->handle, VAR_3,
          &VAR_8, ((void*)0));

 return (VAR_9 == VAR_1) ? 0 : -VAR_2;
}
