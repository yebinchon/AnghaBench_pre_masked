
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int dummy; } ;
struct usb_usbvision {int dummy; } ;
struct device {int dummy; } ;


 struct video_device* FUNC_0 (struct device*) ;
 struct usb_usbvision* FUNC_1 (struct video_device*) ;

__attribute__((used)) static inline struct usb_usbvision *FUNC_2(struct device *VAR_0)
{
 struct video_device *VAR_1 = FUNC_0(VAR_0);
 return FUNC_1(VAR_1);
}
