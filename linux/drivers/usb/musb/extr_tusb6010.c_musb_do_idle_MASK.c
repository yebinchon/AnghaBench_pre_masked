
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct timer_list {int dummy; } ;
struct musb {int port1_status; int lock; int gadget_driver; int is_active; TYPE_2__* xceiv; int controller; int idle_timeout; int a_wait_bcon; } ;
struct TYPE_4__ {TYPE_1__* otg; } ;
struct TYPE_3__ {int state; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_4 ;
 struct musb* FUNC_1 (int ,struct timer_list*,int ) ;
 scalar_t__ FUNC_2 (struct musb*) ;
 int VAR_5 ;
 struct musb* VAR_6 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct musb*,int) ;
 int FUNC_7 (struct musb*,int ) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct timer_list *VAR_7)
{
 struct musb *VAR_8 = FUNC_1(VAR_8, VAR_7, VAR_4);
 unsigned long VAR_9;

 FUNC_3(&VAR_8->lock, VAR_9);

 switch (VAR_8->xceiv->otg->state) {
 case 128:
  if ((VAR_8->a_wait_bcon != 0)
   && (VAR_8->idle_timeout == 0
    || FUNC_5(VAR_5, VAR_8->idle_timeout))) {
   FUNC_0(VAR_8->controller, "Nothing connected %s, turning off VBUS\n",
     FUNC_8(VAR_8->xceiv->otg->state));
  }

 case 129:
  FUNC_7(VAR_8, 0);
 default:
  break;
 }

 if (!VAR_8->is_active) {
  u32 VAR_10;


  if (FUNC_2(VAR_8) && (VAR_8->port1_status >> 16))
   goto done;

  if (!VAR_8->gadget_driver) {
   VAR_10 = 0;
  } else {
   VAR_10 = VAR_1
    | VAR_0
     | VAR_3;
   VAR_10 |= VAR_2;
  }
  FUNC_6(VAR_8, VAR_10);
 }
done:
 FUNC_4(&VAR_8->lock, VAR_9);
}
