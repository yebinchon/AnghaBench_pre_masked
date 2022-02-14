
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_otg {int state; } ;
struct usb_gadget_driver {scalar_t__ max_speed; } ;
struct usb_gadget {int dummy; } ;
struct musb {int is_active; int controller; TYPE_1__* xceiv; int lock; int g; struct usb_gadget_driver* gadget_driver; scalar_t__ softconnect; } ;
struct TYPE_2__ {scalar_t__ last_event; struct usb_otg* otg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct musb* FUNC_0 (struct usb_gadget*) ;
 int FUNC_1 (struct musb*,int) ;
 int FUNC_2 (struct musb*) ;
 int FUNC_3 (struct usb_otg*,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct usb_gadget *VAR_4,
  struct usb_gadget_driver *VAR_5)
{
 struct musb *VAR_6 = FUNC_0(VAR_4);
 struct usb_otg *VAR_7 = VAR_6->xceiv->otg;
 unsigned long VAR_8;
 int VAR_9 = 0;

 if (VAR_5->max_speed < VAR_3) {
  VAR_9 = -VAR_0;
  goto err;
 }

 FUNC_4(VAR_6->controller);

 VAR_6->softconnect = 0;
 VAR_6->gadget_driver = VAR_5;

 FUNC_7(&VAR_6->lock, VAR_8);
 VAR_6->is_active = 1;

 FUNC_3(VAR_7, &VAR_6->g);
 VAR_6->xceiv->otg->state = VAR_1;
 FUNC_8(&VAR_6->lock, VAR_8);

 FUNC_2(VAR_6);





 if (VAR_6->xceiv->last_event == VAR_2)
  FUNC_1(VAR_6, 1);

 FUNC_5(VAR_6->controller);
 FUNC_6(VAR_6->controller);

 return 0;

err:
 return VAR_9;
}
