
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct toshiba_acpi_dev {int kbd_type; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct toshiba_acpi_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int,int,...) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_4,
     struct device_attribute *VAR_5,
     char *VAR_6)
{
 struct toshiba_acpi_dev *VAR_7 = FUNC_0(VAR_4);

 if (VAR_7->kbd_type == 1)
  return FUNC_1(VAR_6, "0x%x 0x%x\n",
          VAR_1, VAR_0);

 return FUNC_1(VAR_6, "0x%x 0x%x 0x%x\n",
         VAR_0, VAR_3, VAR_2);
}
