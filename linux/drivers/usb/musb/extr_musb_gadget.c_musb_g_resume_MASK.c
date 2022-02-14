
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct musb {int is_active; TYPE_3__* xceiv; int lock; int g; TYPE_1__* gadget_driver; scalar_t__ is_suspended; } ;
struct TYPE_6__ {TYPE_2__* otg; } ;
struct TYPE_5__ {int state; } ;
struct TYPE_4__ {int (* resume ) (int *) ;} ;





 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;

void FUNC_5(struct musb *VAR_0)
{
 VAR_0->is_suspended = 0;
 switch (VAR_0->xceiv->otg->state) {
 case 130:
  break;
 case 128:
 case 129:
  VAR_0->is_active = 1;
  if (VAR_0->gadget_driver && VAR_0->gadget_driver->resume) {
   FUNC_2(&VAR_0->lock);
   VAR_0->gadget_driver->resume(&VAR_0->g);
   FUNC_1(&VAR_0->lock);
  }
  break;
 default:
  FUNC_0("unhandled RESUME transition (%s)\n",
    FUNC_4(VAR_0->xceiv->otg->state));
 }
}
