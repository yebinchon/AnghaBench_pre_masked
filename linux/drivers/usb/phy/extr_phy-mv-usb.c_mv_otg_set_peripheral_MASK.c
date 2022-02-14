
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_otg {struct usb_gadget* gadget; } ;
struct usb_gadget {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct usb_otg *VAR_0,
     struct usb_gadget *VAR_1)
{
 VAR_0->gadget = VAR_1;

 return 0;
}
