
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_resource_i2c_serialbus {int dummy; } ;
struct acpi_resource {int dummy; } ;


 scalar_t__ FUNC_0 (struct acpi_resource*,struct acpi_resource_i2c_serialbus**) ;

__attribute__((used)) static int FUNC_1(struct acpi_resource *VAR_0, void *VAR_1)
{
 struct acpi_resource_i2c_serialbus *VAR_2;
 int *VAR_3 = VAR_1;

 if (FUNC_0(VAR_0, &VAR_2))
  *VAR_3 = *VAR_3 + 1;

 return 1;
}
