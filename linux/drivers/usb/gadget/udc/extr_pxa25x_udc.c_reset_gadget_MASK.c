
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_gadget_driver {int dummy; } ;
struct TYPE_2__ {scalar_t__ speed; } ;
struct pxa25x_udc {TYPE_1__ gadget; int timer; struct pxa25x_ep* ep; } ;
struct pxa25x_ep {int stopped; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct pxa25x_ep*,int ) ;
 int FUNC_2 (struct pxa25x_udc*) ;
 int FUNC_3 (TYPE_1__*,struct usb_gadget_driver*) ;

__attribute__((used)) static void
FUNC_4(struct pxa25x_udc *VAR_3, struct usb_gadget_driver *VAR_4)
{
 int VAR_5;


 if (VAR_3->gadget.speed == VAR_2)
  VAR_4 = ((void*)0);
 VAR_3->gadget.speed = VAR_2;


 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  struct pxa25x_ep *VAR_6 = &VAR_3->ep[VAR_5];

  VAR_6->stopped = 1;
  FUNC_1(VAR_6, -VAR_0);
 }
 FUNC_0(&VAR_3->timer);


 if (VAR_4)
  FUNC_3(&VAR_3->gadget, VAR_4);


 FUNC_2(VAR_3);
}
