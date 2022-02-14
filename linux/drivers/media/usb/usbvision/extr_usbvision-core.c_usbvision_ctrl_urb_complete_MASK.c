
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_usbvision {scalar_t__ ctrl_urb_busy; } ;
struct urb {scalar_t__ context; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void FUNC_1(struct urb *VAR_1)
{
 struct usb_usbvision *VAR_2 = (struct usb_usbvision *)VAR_1->context;

 FUNC_0(VAR_0, "");
 VAR_2->ctrl_urb_busy = 0;
}
