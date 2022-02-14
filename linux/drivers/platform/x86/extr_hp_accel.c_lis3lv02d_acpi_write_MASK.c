
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_object {TYPE_1__ integer; void* type; } ;
typedef int u8 ;
struct lis3lv02d {struct acpi_device* bus_priv; } ;
struct acpi_object_list {int member_0; union acpi_object* member_1; } ;
struct acpi_device {int handle; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,char*,struct acpi_object_list*,unsigned long long*) ;

__attribute__((used)) static int FUNC_1(struct lis3lv02d *VAR_3, int VAR_4, u8 VAR_5)
{
 struct acpi_device *VAR_6 = VAR_3->bus_priv;
 unsigned long long VAR_7;
 union acpi_object VAR_8[2];
 struct acpi_object_list VAR_9 = { 2, VAR_8 };

 VAR_8[0].type = VAR_0;
 VAR_8[0].integer.value = VAR_4;
 VAR_8[1].type = VAR_0;
 VAR_8[1].integer.value = VAR_5;

 if (FUNC_0(VAR_6->handle, "ALWR", &VAR_9, &VAR_7) != VAR_1)
  return -VAR_2;

 return 0;
}
