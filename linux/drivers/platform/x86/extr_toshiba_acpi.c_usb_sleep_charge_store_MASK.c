
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct toshiba_acpi_dev {int usbsc_mode_base; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct toshiba_acpi_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int ,int*) ;
 int FUNC_2 (struct toshiba_acpi_dev*,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_5,
          struct device_attribute *VAR_6,
          const char *VAR_7, size_t VAR_8)
{
 struct toshiba_acpi_dev *VAR_9 = FUNC_0(VAR_5);
 int VAR_10;
 u32 VAR_11;
 int VAR_12;

 VAR_12 = FUNC_1(VAR_7, 0, &VAR_10);
 if (VAR_12)
  return VAR_12;







 if (VAR_10 != 0 && VAR_10 != 1 && VAR_10 != 2 && VAR_10 != 3)
  return -VAR_0;


 VAR_11 = VAR_9->usbsc_mode_base;
 if (VAR_10 == 0)
  VAR_11 |= VAR_3;
 else if (VAR_10 == 1)
  VAR_11 |= VAR_1;
 else if (VAR_10 == 2)
  VAR_11 |= VAR_2;
 else if (VAR_10 == 3)
  VAR_11 |= VAR_4;

 VAR_12 = FUNC_2(VAR_9, VAR_11);
 if (VAR_12)
  return VAR_12;

 return VAR_8;
}
