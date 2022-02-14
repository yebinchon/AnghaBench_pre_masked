
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_gadget {int dummy; } ;
struct musb {int controller; int irq_work; int lock; int * gadget_driver; scalar_t__ is_active; TYPE_1__* xceiv; int g; } ;
struct TYPE_4__ {int state; } ;
struct TYPE_3__ {TYPE_2__* otg; } ;


 int VAR_0 ;
 struct musb* FUNC_0 (struct usb_gadget*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct musb*) ;
 int FUNC_3 (struct musb*,int ) ;
 int FUNC_4 (struct musb*) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_12(struct usb_gadget *VAR_1)
{
 struct musb *VAR_2 = FUNC_0(VAR_1);
 unsigned long VAR_3;

 FUNC_6(VAR_2->controller);






 FUNC_10(&VAR_2->lock, VAR_3);

 FUNC_2(VAR_2);

 (void) FUNC_1(&VAR_2->g, 0);

 VAR_2->xceiv->otg->state = VAR_0;
 FUNC_4(VAR_2);
 FUNC_5(VAR_2->xceiv->otg, ((void*)0));

 VAR_2->is_active = 0;
 VAR_2->gadget_driver = ((void*)0);
 FUNC_3(VAR_2, 0);
 FUNC_11(&VAR_2->lock, VAR_3);
 FUNC_9(&VAR_2->irq_work, 0);

 FUNC_7(VAR_2->controller);
 FUNC_8(VAR_2->controller);

 return 0;
}
