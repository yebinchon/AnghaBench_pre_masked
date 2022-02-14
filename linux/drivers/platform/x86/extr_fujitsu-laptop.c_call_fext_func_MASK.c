
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; int type; } ;
union acpi_object {TYPE_1__ integer; } ;
struct acpi_object_list {int member_0; union acpi_object* member_1; } ;
struct acpi_device {int handle; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,struct acpi_object_list*,unsigned long long*) ;
 int FUNC_2 (int ,char*,int,int,int,int,int) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct acpi_device *VAR_2,
     int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 union acpi_object VAR_7[4] = {
  { .integer.type = VAR_0, .integer.value = VAR_3 },
  { .integer.type = VAR_0, .integer.value = VAR_4 },
  { .integer.type = VAR_0, .integer.value = VAR_5 },
  { .integer.type = VAR_0, .integer.value = VAR_6 }
 };
 struct acpi_object_list VAR_8 = { 4, VAR_7 };
 unsigned long long VAR_9;
 acpi_status VAR_10;

 VAR_10 = FUNC_1(VAR_2->handle, "FUNC", &VAR_8,
           &VAR_9);
 if (FUNC_0(VAR_10)) {
  FUNC_3(VAR_2->handle, "Failed to evaluate FUNC\n");
  return -VAR_1;
 }

 FUNC_2(VAR_2->handle,
     "FUNC 0x%x (args 0x%x, 0x%x, 0x%x) returned 0x%x\n",
     VAR_3, VAR_4, VAR_5, VAR_6, (int)VAR_9);
 return VAR_9;
}
