
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_object {TYPE_1__ integer; int member_0; } ;
typedef unsigned long long u8 ;
struct lis3lv02d {struct acpi_device* bus_priv; } ;
struct acpi_object_list {int member_0; union acpi_object* member_1; } ;
struct acpi_device {int handle; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,struct acpi_object_list*,unsigned long long*) ;

__attribute__((used)) static int FUNC_2(struct lis3lv02d *VAR_2, int VAR_3, u8 *VAR_4)
{
 struct acpi_device *VAR_5 = VAR_2->bus_priv;
 union acpi_object VAR_6 = { VAR_0 };
 struct acpi_object_list VAR_7 = { 1, &VAR_6 };
 unsigned long long VAR_8;
 acpi_status VAR_9;

 VAR_6 = VAR_3;

 VAR_9 = FUNC_1(VAR_5->handle, "ALRD", &VAR_7, &VAR_8);
 if (FUNC_0(VAR_9))
  return -VAR_1;
 *VAR_4 = VAR_8;
 return 0;
}
