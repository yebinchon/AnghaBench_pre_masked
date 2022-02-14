
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usbnet {TYPE_2__* udev; int data; } ;
struct usb_interface {int dummy; } ;
struct usb_driver {int dummy; } ;
struct qmi_wwan_state {struct usb_interface* control; struct usb_interface* data; TYPE_3__* subdriver; } ;
struct TYPE_6__ {int (* disconnect ) (struct usb_interface*) ;} ;
struct TYPE_4__ {int bcdUSB; } ;
struct TYPE_5__ {TYPE_1__ descriptor; } ;


 struct usb_driver* FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct usbnet*,int) ;
 int FUNC_3 (struct usbnet*,int ) ;
 int FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (struct usb_driver*,struct usb_interface*) ;
 int FUNC_6 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_7(struct usbnet *VAR_0, struct usb_interface *VAR_1)
{
 struct qmi_wwan_state *VAR_2 = (void *)&VAR_0->data;
 struct usb_driver *VAR_3 = FUNC_0(VAR_1);
 struct usb_interface *VAR_4;

 if (VAR_2->subdriver && VAR_2->subdriver->disconnect)
  VAR_2->subdriver->disconnect(VAR_2->control);


 if (FUNC_1(VAR_0->udev->descriptor.bcdUSB) >= 0x0201) {
  FUNC_2(VAR_0, 0);
  FUNC_3(VAR_0, 0);
 }


 if (VAR_1 == VAR_2->control)
  VAR_4 = VAR_2->data;
 else
  VAR_4 = VAR_2->control;


 if (VAR_4 && VAR_1 != VAR_4) {
  FUNC_6(VAR_4, ((void*)0));
  FUNC_5(VAR_3, VAR_4);
 }

 VAR_2->subdriver = ((void*)0);
 VAR_2->data = ((void*)0);
 VAR_2->control = ((void*)0);
}
