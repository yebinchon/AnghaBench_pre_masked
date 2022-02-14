
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eeprom_93xx46_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct eeprom_93xx46_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (struct eeprom_93xx46_dev*) ;
 int FUNC_2 (struct eeprom_93xx46_dev*,int) ;
 int FUNC_3 (char const*,char*,int*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
      struct device_attribute *VAR_1,
      const char *VAR_2, size_t VAR_3)
{
 struct eeprom_93xx46_dev *VAR_4 = FUNC_0(VAR_0);
 int VAR_5 = 0, VAR_6;

 FUNC_3(VAR_2, "%d", &VAR_5);
 if (VAR_5) {
  VAR_6 = FUNC_2(VAR_4, 1);
  if (VAR_6)
   return VAR_6;
  VAR_6 = FUNC_1(VAR_4);
  if (VAR_6)
   return VAR_6;
  VAR_6 = FUNC_2(VAR_4, 0);
  if (VAR_6)
   return VAR_6;
 }
 return VAR_3;
}
