
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wusbhc {int dummy; } ;
struct usb_hcd {scalar_t__ wireless; } ;
struct usb_device {int devnum; int wusb; int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int,int ) ;
 struct usb_hcd* FUNC_2 (struct usb_device*) ;
 struct wusbhc* FUNC_3 (struct usb_hcd*) ;

__attribute__((used)) static inline struct wusbhc *FUNC_4(struct usb_device *VAR_0)
{
 struct wusbhc *VAR_1 = ((void*)0);
 struct usb_hcd *VAR_2;
 if (VAR_0->devnum > 1 && !VAR_0->wusb) {

  FUNC_1(&VAR_0->dev, "devnum %d wusb %d\n", VAR_0->devnum,
   VAR_0->wusb);
  FUNC_0(VAR_0->devnum > 1 && !VAR_0->wusb);
 }
 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2 == ((void*)0))
  return ((void*)0);
 FUNC_0(VAR_2->wireless == 0);
 return VAR_1 = FUNC_3(VAR_2);
}
