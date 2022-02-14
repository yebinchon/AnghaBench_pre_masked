
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct acpi_buffer {int length; int* pointer; } ;
typedef size_t ssize_t ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (char const) ;
 int FUNC_3 (int ,int ,int,struct acpi_buffer*,int *) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_3,
     struct device_attribute *VAR_4,
     const char *VAR_5, size_t VAR_6)
{
 struct acpi_buffer VAR_7;
 acpi_status VAR_8;
 u8 VAR_9;

 VAR_7.length = sizeof(u8);
 VAR_7.pointer = &VAR_9;
 VAR_9 = FUNC_2(VAR_5[0]);
 FUNC_1(VAR_3, "force_power: storing %#x\n", VAR_9);
 if (VAR_9 == 0 || VAR_9 == 1) {
  VAR_8 = FUNC_3(VAR_2, 0, 1,
          &VAR_7, ((void*)0));
  if (FUNC_0(VAR_8)) {
   FUNC_1(VAR_3, "force_power: failed to evaluate ACPI method\n");
   return -VAR_1;
  }
 } else {
  FUNC_1(VAR_3, "force_power: unsupported mode\n");
  return -VAR_0;
 }
 return VAR_6;
}
