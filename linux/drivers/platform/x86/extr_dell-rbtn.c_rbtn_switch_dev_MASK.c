
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbtn_data {scalar_t__ type; } ;
struct device {int dummy; } ;
struct acpi_device {struct rbtn_data* driver_data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (struct acpi_device*) ;
 struct acpi_device* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, void *VAR_2)
{
 struct acpi_device *VAR_3 = FUNC_2(VAR_1);
 struct rbtn_data *VAR_4 = VAR_3->driver_data;
 bool VAR_5 = VAR_2;

 if (VAR_4->type != VAR_0)
  return 0;

 if (VAR_5)
  FUNC_1(VAR_3);
 else
  FUNC_0(VAR_3);

 return 0;
}
