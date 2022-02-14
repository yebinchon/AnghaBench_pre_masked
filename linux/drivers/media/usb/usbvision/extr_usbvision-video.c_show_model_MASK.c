
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {int dummy; } ;
struct usb_usbvision {size_t dev_model; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {char* model_string; } ;


 int FUNC_0 (char*,char*,char*) ;
 struct video_device* FUNC_1 (struct device*) ;
 TYPE_1__* VAR_0 ;
 struct usb_usbvision* FUNC_2 (struct video_device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
     struct device_attribute *VAR_2, char *VAR_3)
{
 struct video_device *VAR_4 = FUNC_1(VAR_1);
 struct usb_usbvision *VAR_5 = FUNC_2(VAR_4);
 return FUNC_0(VAR_3, "%s\n",
         VAR_0[VAR_5->dev_model].model_string);
}
