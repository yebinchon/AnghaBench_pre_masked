
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_otg {int state; struct usb_gadget* gadget; } ;
struct usb_gadget {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct usb_otg *VAR_1,
     struct usb_gadget *VAR_2)
{
 VAR_1->gadget = VAR_2;
 if (!VAR_2)
  VAR_1->state = VAR_0;

 return 0;
}
