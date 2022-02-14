
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union acpi_object {scalar_t__ type; TYPE_1__ integer; } ;
typedef int u32 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (union acpi_object*) ;
 int FUNC_1 (char const*,int*) ;
 union acpi_object* FUNC_2 (int ,int ,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_5,
         struct device_attribute *VAR_6,
         const char *VAR_7, size_t VAR_8)
{
 bool VAR_9;
 union acpi_object *VAR_10;
 u32 VAR_11;
 int VAR_12;

 VAR_12 = FUNC_1(VAR_7, &VAR_9);
 if (VAR_12)
  return VAR_12;

 VAR_10 = FUNC_2(VAR_2, VAR_3, 0);
 if (!VAR_10)
  return -VAR_1;

 if (VAR_10->type != VAR_0) {
  FUNC_0(VAR_10);
  return -VAR_1;
 }

 VAR_11 = VAR_10->integer.value;
 FUNC_0(VAR_10);
 VAR_10 = FUNC_2(VAR_2, VAR_4, (VAR_11 & 0xffffff0f) | (VAR_9 << 4));
 FUNC_0(VAR_10);
 VAR_10 = FUNC_2(VAR_2, VAR_4, (VAR_11 & 0xfffffff0) | VAR_9);
 FUNC_0(VAR_10);

 return VAR_8;
}
