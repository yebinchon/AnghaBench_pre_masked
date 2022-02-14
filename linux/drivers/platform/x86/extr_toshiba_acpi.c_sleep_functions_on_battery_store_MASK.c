
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct toshiba_acpi_dev {int usbsc_bat_level; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct toshiba_acpi_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int ,int*) ;
 int FUNC_2 (struct toshiba_acpi_dev*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_4,
      struct device_attribute *VAR_5,
      const char *VAR_6, size_t VAR_7)
{
 struct toshiba_acpi_dev *VAR_8 = FUNC_0(VAR_4);
 u32 VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_11 = FUNC_1(VAR_6, 0, &VAR_10);
 if (VAR_11)
  return VAR_11;






 if (VAR_10 < 0 || VAR_10 > 100)
  return -VAR_0;

 if (VAR_10 == 0) {
  VAR_12 = VAR_8->usbsc_bat_level << VAR_1;
  VAR_9 = VAR_12 | VAR_2;
 } else {
  VAR_12 = VAR_10 << VAR_1;
  VAR_9 = VAR_12 | VAR_3;
 }
 VAR_11 = FUNC_2(VAR_8, VAR_9);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_8->usbsc_bat_level = VAR_9 >> VAR_1;

 return VAR_7;
}
