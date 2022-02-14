
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct acpi_device {int handle; } ;
typedef int ssize_t ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,unsigned long) ;
 int FUNC_2 (char const*,int ,unsigned long*) ;
 struct acpi_device* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
     struct device_attribute *VAR_2,
     const char *VAR_3, size_t VAR_4)
{
 struct acpi_device *VAR_5;
 acpi_status VAR_6;
 unsigned long VAR_7;
 int VAR_8;

 VAR_5 = FUNC_3(VAR_1);

 VAR_8 = FUNC_2(VAR_3, 0, &VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_6 = FUNC_1(VAR_5->handle, "SFFS", VAR_7);
 if (FUNC_0(VAR_6))
  return -VAR_0;

 return VAR_4;
}
