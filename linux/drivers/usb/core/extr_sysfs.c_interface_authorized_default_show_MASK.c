
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct usb_device {int bus; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct usb_hcd*) ;
 struct usb_hcd* FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int) ;
 struct usb_device* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
  struct device_attribute *VAR_1, char *VAR_2)
{
 struct usb_device *VAR_3 = FUNC_3(VAR_0);
 struct usb_hcd *VAR_4 = FUNC_1(VAR_3->bus);

 return FUNC_2(VAR_2, "%u\n", !!FUNC_0(VAR_4));
}
