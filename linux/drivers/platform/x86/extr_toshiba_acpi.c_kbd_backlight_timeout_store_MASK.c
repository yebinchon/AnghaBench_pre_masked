
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct toshiba_acpi_dev {int kbd_type; int kbd_time; } ;
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
 int VAR_9;
 int VAR_10;

 VAR_10 = FUNC_1(VAR_6, 0, &VAR_9);
 if (VAR_10)
  return VAR_10;


 if (VAR_8->kbd_type == 1) {
  if (VAR_9 < 0 || VAR_9 > 60)
   return -VAR_0;
 } else if (VAR_8->kbd_type == 2) {
  if (VAR_9 < 1 || VAR_9 > 60)
   return -VAR_0;
 }




 if (VAR_8->kbd_time != VAR_9) {

  VAR_9 = VAR_9 << VAR_1;

  if (VAR_8->kbd_type == 1)
   VAR_9 |= VAR_3;
  else if (VAR_8->kbd_type == 2)
   VAR_9 |= VAR_2;

  VAR_10 = FUNC_2(VAR_8, VAR_9);
  if (VAR_10)
   return VAR_10;

  VAR_8->kbd_time = VAR_9 >> VAR_1;
 }

 return VAR_7;
}
