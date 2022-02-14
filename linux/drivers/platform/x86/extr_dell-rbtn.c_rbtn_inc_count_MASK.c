
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rbtn_data {scalar_t__ type; } ;
struct device {int dummy; } ;
struct acpi_device {struct rbtn_data* driver_data; } ;


 scalar_t__ VAR_0 ;
 struct acpi_device* FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_1, void *VAR_2)
{
 struct acpi_device *VAR_3 = FUNC_0(VAR_1);
 struct rbtn_data *VAR_4 = VAR_3->driver_data;
 int *VAR_5 = VAR_2;

 if (VAR_4->type == VAR_0)
  (*VAR_5)++;

 return 0;
}
