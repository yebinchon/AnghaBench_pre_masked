
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int dummy; } ;
struct usb_interface {int dummy; } ;


 int FUNC_0 (struct usbnet*,int) ;
 struct usbnet* FUNC_1 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_2(struct usb_interface *VAR_0,
        int VAR_1)
{
 struct usbnet *VAR_2 = FUNC_1(VAR_0);


 if (!VAR_2)
  return 0;

 return FUNC_0(VAR_2, VAR_1);
}
