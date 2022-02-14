
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
 int FUNC_1 (char*,char*,int,int) ;
 int FUNC_2 (struct toshiba_acpi_dev*,int*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
            struct device_attribute *VAR_3,
            char *VAR_4)
{
 struct toshiba_acpi_dev *VAR_5 = FUNC_0(VAR_2);
 int VAR_6, VAR_7;
 u32 VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_9 = FUNC_2(VAR_5, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;


 VAR_10 = VAR_8 & VAR_1;
 VAR_7 = (VAR_10 == 0x4) ? 1 : 0;

 VAR_6 = VAR_8 >> VAR_0;

 return FUNC_1(VAR_4, "%d %d\n", VAR_7, VAR_6);
}
