
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct musb {int is_suspended; TYPE_3__* xceiv; int lock; int g; TYPE_1__* gadget_driver; int mregs; } ;
struct TYPE_6__ {TYPE_2__* otg; } ;
struct TYPE_5__ {int state; } ;
struct TYPE_4__ {int (* suspend ) (int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct musb*,char*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;

void FUNC_7(struct musb *VAR_2)
{
 u8 VAR_3;

 VAR_3 = FUNC_2(VAR_2->mregs, VAR_0);
 FUNC_1(VAR_2, "musb_g_suspend: devctl %02x", VAR_3);

 switch (VAR_2->xceiv->otg->state) {
 case 129:
  if ((VAR_3 & VAR_1) == VAR_1)
   VAR_2->xceiv->otg->state = 128;
  break;
 case 128:
  VAR_2->is_suspended = 1;
  if (VAR_2->gadget_driver && VAR_2->gadget_driver->suspend) {
   FUNC_4(&VAR_2->lock);
   VAR_2->gadget_driver->suspend(&VAR_2->g);
   FUNC_3(&VAR_2->lock);
  }
  break;
 default:



  FUNC_0("unhandled SUSPEND transition (%s)",
    FUNC_6(VAR_2->xceiv->otg->state));
 }
}
