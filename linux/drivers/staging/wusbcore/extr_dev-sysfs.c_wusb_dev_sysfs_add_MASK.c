
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wusbhc {int dummy; } ;
struct wusb_dev {int dummy; } ;
struct device {int kobj; } ;
struct usb_device {struct device dev; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;

int FUNC_2(struct wusbhc *VAR_1, struct usb_device *VAR_2,
         struct wusb_dev *VAR_3)
{
 int VAR_4 = FUNC_1(&VAR_2->dev.kobj,
     &VAR_0);
 struct device *VAR_5 = &VAR_2->dev;
 if (VAR_4 < 0)
  FUNC_0(VAR_5, "Cannot register WUSB-dev attributes: %d\n",
   VAR_4);
 return VAR_4;
}
