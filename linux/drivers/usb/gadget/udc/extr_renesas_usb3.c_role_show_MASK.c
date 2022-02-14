
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct renesas_usb3 {int driver; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct renesas_usb3* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,char*) ;
 scalar_t__ FUNC_2 (struct renesas_usb3*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2,
    char *VAR_3)
{
 struct renesas_usb3 *VAR_4 = FUNC_0(VAR_1);

 if (!VAR_4->driver)
  return -VAR_0;

 return FUNC_1(VAR_3, "%s\n", FUNC_2(VAR_4) ? "host" : "peripheral");
}
