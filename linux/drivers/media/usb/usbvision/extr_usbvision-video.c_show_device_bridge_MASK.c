
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int dummy; } ;
struct usb_usbvision {int bridge_type; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int) ;
 struct video_device* FUNC_1 (struct device*) ;
 struct usb_usbvision* FUNC_2 (struct video_device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
      struct device_attribute *VAR_1, char *VAR_2)
{
 struct video_device *VAR_3 = FUNC_1(VAR_0);
 struct usb_usbvision *VAR_4 = FUNC_2(VAR_3);
 return FUNC_0(VAR_2, "%d\n", VAR_4->bridge_type);
}
