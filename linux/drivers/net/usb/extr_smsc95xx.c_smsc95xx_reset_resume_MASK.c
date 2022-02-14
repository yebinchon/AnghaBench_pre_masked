
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int dummy; } ;
struct usb_interface {int dummy; } ;


 int FUNC_0 (struct usbnet*) ;
 int FUNC_1 (struct usb_interface*) ;
 struct usbnet* FUNC_2 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_3(struct usb_interface *VAR_0)
{
 struct usbnet *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 return FUNC_1(VAR_0);
}
