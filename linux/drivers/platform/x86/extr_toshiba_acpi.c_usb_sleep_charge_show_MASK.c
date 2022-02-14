
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
 struct toshiba_acpi_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (struct toshiba_acpi_dev*,int*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
         struct device_attribute *VAR_2, char *VAR_3)
{
 struct toshiba_acpi_dev *VAR_4 = FUNC_0(VAR_1);
 u32 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_4, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 return FUNC_1(VAR_3, "%x\n", VAR_5 & VAR_0);
}
