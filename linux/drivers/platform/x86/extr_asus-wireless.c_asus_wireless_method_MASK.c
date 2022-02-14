
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_object {TYPE_1__ integer; int type; } ;
typedef int u64 ;
struct acpi_object_list {int count; union acpi_object* pointer; } ;
typedef int acpi_string ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,struct acpi_object_list*,int*) ;
 int FUNC_2 (int ,char*,char const*,int) ;
 int FUNC_3 (int ,char*,char const*,int,int ) ;

__attribute__((used)) static acpi_status FUNC_4(acpi_handle VAR_1, const char *VAR_2,
     int VAR_3, u64 *VAR_4)
{
 struct acpi_object_list VAR_5;
 union acpi_object VAR_6;
 acpi_status VAR_7;

 FUNC_2(VAR_1, "Evaluating method %s, parameter %#x\n",
     VAR_2, VAR_3);
 VAR_6.type = VAR_0;
 VAR_6.integer.value = VAR_3;
 VAR_5.count = 1;
 VAR_5.pointer = &VAR_6;

 VAR_7 = FUNC_1(VAR_1, (acpi_string) VAR_2, &VAR_5, VAR_4);
 if (FUNC_0(VAR_7))
  FUNC_3(VAR_1,
    "Failed to eval method %s, param %#x (%d)\n",
    VAR_2, VAR_3, VAR_7);
 else
  FUNC_2(VAR_1, "%s returned %#llx\n", VAR_2, *VAR_4);

 return VAR_7;
}
