
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int dummy; } ;
struct at91_udc {int vbus; int lock; scalar_t__ driver; } ;


 int FUNC_0 (struct at91_udc*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct at91_udc* FUNC_3 (struct usb_gadget*) ;

__attribute__((used)) static int FUNC_4(struct usb_gadget *VAR_0, int VAR_1)
{
 struct at91_udc *VAR_2 = FUNC_3(VAR_0);
 unsigned long VAR_3;


 FUNC_1(&VAR_2->lock, VAR_3);
 VAR_2->vbus = (VAR_1 != 0);
 if (VAR_2->driver)
  FUNC_0(VAR_2, VAR_1);
 else
  FUNC_0(VAR_2, 0);
 FUNC_2(&VAR_2->lock, VAR_3);
 return 0;
}
