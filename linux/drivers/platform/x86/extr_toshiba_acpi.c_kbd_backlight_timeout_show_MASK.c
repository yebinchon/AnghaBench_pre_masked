
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct toshiba_acpi_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct toshiba_acpi_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;
 scalar_t__ FUNC_2 (struct toshiba_acpi_dev*,int*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
       struct device_attribute *VAR_3,
       char *VAR_4)
{
 struct toshiba_acpi_dev *VAR_5 = FUNC_0(VAR_2);
 u32 VAR_6;

 if (FUNC_2(VAR_5, &VAR_6) < 0)
  return -VAR_0;

 return FUNC_1(VAR_4, "%i\n", VAR_6 >> VAR_1);
}
