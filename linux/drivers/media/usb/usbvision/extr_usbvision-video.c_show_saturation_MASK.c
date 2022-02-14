
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int dummy; } ;
struct usb_usbvision {int hdl; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 struct video_device* FUNC_1 (struct device*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 struct usb_usbvision* FUNC_4 (struct video_device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
          struct device_attribute *VAR_2, char *VAR_3)
{
 struct video_device *VAR_4 = FUNC_1(VAR_1);
 struct usb_usbvision *VAR_5 = FUNC_4(VAR_4);
 s32 VAR_6 = FUNC_3(FUNC_2(&VAR_5->hdl,
        VAR_0));

 return FUNC_0(VAR_3, "%d\n", VAR_6);
}
