
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {struct ax88172a_private* driver_priv; } ;
struct usb_interface {int dummy; } ;
struct ax88172a_private {int dummy; } ;


 int FUNC_0 (struct usbnet*) ;
 int FUNC_1 (struct ax88172a_private*) ;

__attribute__((used)) static void FUNC_2(struct usbnet *VAR_0, struct usb_interface *VAR_1)
{
 struct ax88172a_private *VAR_2 = VAR_0->driver_priv;

 FUNC_0(VAR_0);
 FUNC_1(VAR_2);
}
