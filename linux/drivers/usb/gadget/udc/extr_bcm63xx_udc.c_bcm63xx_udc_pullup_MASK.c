
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_gadget {int dummy; } ;
struct TYPE_2__ {int speed; } ;
struct bcm63xx_udc {scalar_t__ ep0state; int ep0_req_shutdown; int lock; int ep0_wq; int * bep; int wedgemap; TYPE_1__ gadget; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bcm63xx_udc*) ;
 int FUNC_1 (struct bcm63xx_udc*) ;
 int FUNC_2 (struct bcm63xx_udc*) ;
 int FUNC_3 (struct bcm63xx_udc*,int) ;
 int FUNC_4 (struct bcm63xx_udc*,int) ;
 int FUNC_5 (struct bcm63xx_udc*,int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 struct bcm63xx_udc* FUNC_8 (struct usb_gadget*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_13(struct usb_gadget *VAR_5, int VAR_6)
{
 struct bcm63xx_udc *VAR_7 = FUNC_8(VAR_5);
 unsigned long VAR_8;
 int VAR_9, VAR_10 = -VAR_1;

 FUNC_11(&VAR_7->lock, VAR_8);
 if (VAR_6 && VAR_7->ep0state == VAR_3) {
  VAR_7->gadget.speed = VAR_4;
  VAR_7->ep0state = VAR_2;
  FUNC_2(VAR_7);
  FUNC_1(VAR_7);
  FUNC_0(VAR_7);

  FUNC_6(&VAR_7->wedgemap, VAR_0);
  for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
   FUNC_5(VAR_7, &VAR_7->bep[VAR_9], 0);

  FUNC_4(VAR_7, 1);
  FUNC_3(FUNC_8(VAR_5), 1);
  VAR_10 = 0;
 } else if (!VAR_6 && VAR_7->ep0state != VAR_3) {
  FUNC_3(FUNC_8(VAR_5), 0);

  VAR_7->ep0_req_shutdown = 1;
  FUNC_12(&VAR_7->lock, VAR_8);

  while (1) {
   FUNC_10(&VAR_7->ep0_wq);
   if (VAR_7->ep0state == VAR_3)
    break;
   FUNC_9(50);
  }
  FUNC_4(VAR_7, 0);
  FUNC_7(&VAR_7->ep0_wq);
  return 0;
 }

 FUNC_12(&VAR_7->lock, VAR_8);
 return VAR_10;
}
