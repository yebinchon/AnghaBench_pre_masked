
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device {int dummy; } ;
struct acpi_device {int dummy; } ;


 struct acpi_device* FUNC_0 (struct device*) ;
 char* FUNC_1 (struct acpi_device*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 struct i2c_client* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0, void *VAR_1)
{
 struct i2c_client **VAR_2 = VAR_1;
 struct acpi_device *VAR_3;
 const char *VAR_4;

 VAR_3 = FUNC_0(VAR_0);
 if (!VAR_3)
  return 0;

 VAR_4 = FUNC_1(VAR_3);


 if (FUNC_2(VAR_4, "MAX17047"))
  return 0;

 *VAR_2 = FUNC_3(VAR_0);
 return 1;
}
