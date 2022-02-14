
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int removable; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;




 int FUNC_0 (char*,char*,char*) ;
 struct usb_device* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0, struct device_attribute *VAR_1,
         char *VAR_2)
{
 struct usb_device *VAR_3;
 char *VAR_4;

 VAR_3 = FUNC_1(VAR_0);

 switch (VAR_3->removable) {
 case 128:
  VAR_4 = "removable";
  break;
 case 129:
  VAR_4 = "fixed";
  break;
 default:
  VAR_4 = "unknown";
 }

 return FUNC_0(VAR_2, "%s\n", VAR_4);
}
