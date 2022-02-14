
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {struct asix_common_private* driver_priv; } ;
struct usb_interface {int dummy; } ;
struct asix_common_private {int (* resume ) (struct usbnet*) ;} ;


 int FUNC_0 (struct usbnet*) ;
 struct usbnet* FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_3(struct usb_interface *VAR_0)
{
 struct usbnet *VAR_1 = FUNC_1(VAR_0);
 struct asix_common_private *VAR_2 = VAR_1->driver_priv;

 if (VAR_2 && VAR_2->resume)
  VAR_2->resume(VAR_1);

 return FUNC_2(VAR_0);
}
