
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {unsigned int dev_policy; } ;
struct usb_device {struct usb_bus* bus; } ;
struct usb_bus {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 struct usb_hcd* FUNC_0 (struct usb_bus*) ;
 int FUNC_1 (char const*,char*,unsigned int*) ;
 struct usb_device* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_3,
     struct device_attribute *VAR_4,
     const char *VAR_5, size_t VAR_6)
{
 ssize_t VAR_7;
 unsigned int VAR_8;
 struct usb_device *VAR_9 = FUNC_2(VAR_3);
 struct usb_bus *VAR_10 = VAR_9->bus;
 struct usb_hcd *VAR_11;

 VAR_11 = FUNC_0(VAR_10);
 VAR_7 = FUNC_1(VAR_5, "%u\n", &VAR_8);
 if (VAR_7 == 1) {
  VAR_11->dev_policy = VAR_8 <= VAR_2 ?
   VAR_8 : VAR_1;
  VAR_7 = VAR_6;
 } else {
  VAR_7 = -VAR_0;
 }
 return VAR_7;
}
