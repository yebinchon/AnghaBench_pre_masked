
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct toshiba_acpi_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct toshiba_acpi_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (struct toshiba_acpi_dev*,int*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
        struct device_attribute *VAR_1, char *VAR_2)
{
 struct toshiba_acpi_dev *VAR_3 = FUNC_0(VAR_0);
 u32 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_3, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_1(VAR_2, "%d\n", VAR_4);
}
