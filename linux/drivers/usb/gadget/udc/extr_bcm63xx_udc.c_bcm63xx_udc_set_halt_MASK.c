
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ep {int dummy; } ;
struct bcm63xx_udc {int lock; } ;
struct bcm63xx_ep {int halted; struct bcm63xx_udc* udc; } ;


 int FUNC_0 (struct bcm63xx_udc*,struct bcm63xx_ep*,int) ;
 struct bcm63xx_ep* FUNC_1 (struct usb_ep*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct usb_ep *VAR_0, int VAR_1)
{
 struct bcm63xx_ep *VAR_2 = FUNC_1(VAR_0);
 struct bcm63xx_udc *VAR_3 = VAR_2->udc;
 unsigned long VAR_4;

 FUNC_2(&VAR_3->lock, VAR_4);
 FUNC_0(VAR_3, VAR_2, !!VAR_1);
 VAR_2->halted = VAR_1;
 FUNC_3(&VAR_3->lock, VAR_4);

 return 0;
}
