
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int dummy; } ;
struct usb_usbvision {scalar_t__ streaming; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char*,char*,char*) ;
 scalar_t__ VAR_0 ;
 struct video_device* FUNC_2 (struct device*) ;
 struct usb_usbvision* FUNC_3 (struct video_device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
         struct device_attribute *VAR_2, char *VAR_3)
{
 struct video_device *VAR_4 = FUNC_2(VAR_1);
 struct usb_usbvision *VAR_5 = FUNC_3(VAR_4);
 return FUNC_1(VAR_3, "%s\n",
         FUNC_0(VAR_5->streaming == VAR_0 ? 1 : 0));
}
