
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
 int VAR_3 ;
 int FUNC_0 (union acpi_object*) ;
 int FUNC_1 (char const*,int,unsigned long*) ;
 union acpi_object* FUNC_2 (int ,int ,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_4,
     struct device_attribute *VAR_5,
     const char *VAR_6, size_t VAR_7)
{
 unsigned long VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_6, 10, &VAR_8);
 if (VAR_9)
  return VAR_9;

 if (VAR_8 == 100 || VAR_8 == 80) {
  union acpi_object *VAR_10;

  VAR_10 = FUNC_2(VAR_2, VAR_3, VAR_8);
  if (!VAR_10)
   return -VAR_1;

  FUNC_0(VAR_10);
  return VAR_7;
 }

 return -VAR_0;
}
