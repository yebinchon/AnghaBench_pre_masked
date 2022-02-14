
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct toshiba_haps_dev {int protection_level; TYPE_1__* acpi_dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int handle; } ;


 int VAR_0 ;
 struct toshiba_haps_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int ,int*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
          struct device_attribute *VAR_2,
          const char *VAR_3, size_t VAR_4)
{
 struct toshiba_haps_dev *VAR_5 = FUNC_0(VAR_1);
 int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3, 0, &VAR_6);
 if (VAR_7)
  return VAR_7;




 if (VAR_6 < 0 || VAR_6 > 3)
  return -VAR_0;


 VAR_7 = FUNC_2(VAR_5->acpi_dev->handle, VAR_6);
 if (VAR_7 != 0)
  return VAR_7;

 VAR_5->protection_level = VAR_6;

 return VAR_4;
}
