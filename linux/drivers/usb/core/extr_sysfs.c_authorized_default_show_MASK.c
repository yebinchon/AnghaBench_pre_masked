
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dev_policy; } ;
struct usb_device {struct usb_bus* bus; } ;
struct usb_bus {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct usb_hcd* FUNC_0 (struct usb_bus*) ;
 int FUNC_1 (char*,int ,char*,int) ;
 struct usb_device* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
           struct device_attribute *VAR_2, char *VAR_3)
{
 struct usb_device *VAR_4 = FUNC_2(VAR_1);
 struct usb_bus *VAR_5 = VAR_4->bus;
 struct usb_hcd *VAR_6;

 VAR_6 = FUNC_0(VAR_5);
 return FUNC_1(VAR_3, VAR_0, "%u\n", VAR_6->dev_policy);
}
