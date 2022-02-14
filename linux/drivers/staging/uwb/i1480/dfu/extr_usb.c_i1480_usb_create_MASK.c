
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device {int dummy; } ;
struct i1480_usb {int * neep_urb; int usb_iface; int usb_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct usb_device* FUNC_0 (struct usb_interface*) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (struct usb_device*) ;
 int FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (struct usb_device*) ;
 int FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (struct usb_interface*,struct i1480_usb*) ;

__attribute__((used)) static
int FUNC_7(struct i1480_usb *VAR_2, struct usb_interface *VAR_3)
{
 struct usb_device *VAR_4 = FUNC_0(VAR_3);
 int VAR_5 = -VAR_0;

 VAR_2->usb_dev = FUNC_2(VAR_4);
 VAR_2->usb_iface = FUNC_3(VAR_3);
 FUNC_6(VAR_3, VAR_2);
 VAR_2->neep_urb = FUNC_1(0, VAR_1);
 if (VAR_2->neep_urb == ((void*)0))
  goto error;
 return 0;

error:
 FUNC_6(VAR_3, ((void*)0));
 FUNC_5(VAR_3);
 FUNC_4(VAR_4);
 return VAR_5;
}
