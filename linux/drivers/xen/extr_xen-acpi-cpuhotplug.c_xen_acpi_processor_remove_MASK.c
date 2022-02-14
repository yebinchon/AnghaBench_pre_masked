
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_processor {int dummy; } ;
struct acpi_device {int dummy; } ;


 int VAR_0 ;
 struct acpi_processor* FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (struct acpi_processor*) ;

__attribute__((used)) static int FUNC_2(struct acpi_device *VAR_1)
{
 struct acpi_processor *VAR_2;

 if (!VAR_1)
  return -VAR_0;

 VAR_2 = FUNC_0(VAR_1);
 if (!VAR_2)
  return -VAR_0;

 FUNC_1(VAR_2);
 return 0;
}
