
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vudc {int devstatus; } ;
struct usb_gadget {int dummy; } ;


 int VAR_0 ;
 struct vudc* FUNC_0 (struct usb_gadget*) ;

__attribute__((used)) static int FUNC_1(struct usb_gadget *VAR_1, int VAR_2)
{
 struct vudc *VAR_3 = FUNC_0(VAR_1);

 if (VAR_2)
  VAR_3->devstatus |= (1 << VAR_0);
 else
  VAR_3->devstatus &= ~(1 << VAR_0);
 return 0;
}
