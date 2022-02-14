
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ep {int dummy; } ;
struct bcm63xx_udc {int lock; int wedgemap; } ;
struct bcm63xx_ep {int ep_num; struct bcm63xx_udc* udc; } ;


 int FUNC_0 (struct bcm63xx_udc*,struct bcm63xx_ep*,int) ;
 struct bcm63xx_ep* FUNC_1 (struct usb_ep*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct usb_ep *VAR_0)
{
 struct bcm63xx_ep *VAR_1 = FUNC_1(VAR_0);
 struct bcm63xx_udc *VAR_2 = VAR_1->udc;
 unsigned long VAR_3;

 FUNC_3(&VAR_2->lock, VAR_3);
 FUNC_2(VAR_1->ep_num, &VAR_2->wedgemap);
 FUNC_0(VAR_2, VAR_1, 1);
 FUNC_4(&VAR_2->lock, VAR_3);

 return 0;
}
