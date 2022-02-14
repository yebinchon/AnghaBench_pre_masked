
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int dummy; } ;
struct usb_composite_dev {int suspended; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct usb_gadget* FUNC_0 (struct device*) ;
 struct usb_composite_dev* FUNC_1 (struct usb_gadget*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1,
         char *VAR_2)
{
 struct usb_gadget *VAR_3 = FUNC_0(VAR_0);
 struct usb_composite_dev *VAR_4 = FUNC_1(VAR_3);

 return FUNC_2(VAR_2, "%d\n", VAR_4->suspended);
}
