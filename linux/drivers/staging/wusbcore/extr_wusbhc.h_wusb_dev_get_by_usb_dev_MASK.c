
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wusbhc {int mutex; } ;
struct wusb_dev {int dummy; } ;
struct usb_device {int dummy; } ;


 struct wusb_dev* FUNC_0 (struct wusbhc*,struct usb_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct wusbhc* FUNC_3 (struct usb_device*) ;
 int FUNC_4 (struct wusbhc*) ;

__attribute__((used)) static inline
struct wusb_dev *FUNC_5(struct usb_device *VAR_0)
{
 struct wusbhc *VAR_1;
 struct wusb_dev *VAR_2;
 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1 == ((void*)0))
  return ((void*)0);
 FUNC_1(&VAR_1->mutex);
 VAR_2 = FUNC_0(VAR_1, VAR_0);
 FUNC_2(&VAR_1->mutex);
 FUNC_4(VAR_1);
 return VAR_2;
}
