
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_gadget_driver {int (* disconnect ) (TYPE_1__*) ;} ;
struct TYPE_2__ {scalar_t__ speed; } ;
struct lpc32xx_udc {int lock; TYPE_1__ gadget; struct lpc32xx_ep* ep; scalar_t__ suspended; struct usb_gadget_driver* driver; } ;
struct lpc32xx_ep {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct lpc32xx_udc*,int ,int ) ;
 int FUNC_1 (struct lpc32xx_ep*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct lpc32xx_udc*) ;
 int FUNC_6 (struct lpc32xx_udc*) ;

__attribute__((used)) static void FUNC_7(struct lpc32xx_udc *VAR_3)
{
 struct usb_gadget_driver *VAR_4 = VAR_3->driver;
 int VAR_5;

 if (VAR_3->gadget.speed == VAR_2)
  VAR_4 = ((void*)0);

 VAR_3->gadget.speed = VAR_2;
 VAR_3->suspended = 0;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  struct lpc32xx_ep *VAR_6 = &VAR_3->ep[VAR_5];
  FUNC_1(VAR_6, -VAR_0);
 }
 if (VAR_4) {
  FUNC_3(&VAR_3->lock);
  VAR_4->disconnect(&VAR_3->gadget);
  FUNC_2(&VAR_3->lock);
 }

 FUNC_0(VAR_3, 0, 0);
 FUNC_5(VAR_3);
 FUNC_6(VAR_3);
}
