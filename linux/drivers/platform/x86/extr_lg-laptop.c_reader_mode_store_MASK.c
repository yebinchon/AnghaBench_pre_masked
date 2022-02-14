
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union acpi_object {int dummy; } acpi_object ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (union acpi_object*) ;
 int FUNC_1 (char const*,int*) ;
 union acpi_object* FUNC_2 (int ,int ,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_3,
     struct device_attribute *VAR_4,
     const char *VAR_5, size_t VAR_6)
{
 bool VAR_7;
 union acpi_object *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_5, &VAR_7);
 if (VAR_9)
  return VAR_9;

 VAR_8 = FUNC_2(VAR_1, VAR_2, VAR_7);
 if (!VAR_8)
  return -VAR_0;

 FUNC_0(VAR_8);
 return VAR_6;
}
