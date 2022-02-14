
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int dummy; } ;
struct usb_interface {int dummy; } ;


 int FUNC_0 (struct usbnet*) ;
 int FUNC_1 (struct usbnet*,struct usb_interface*) ;

int FUNC_2(struct usbnet *VAR_0, struct usb_interface *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2 < 0)
  goto bail_out;






 FUNC_0(VAR_0);

bail_out:
 return VAR_2;
}
