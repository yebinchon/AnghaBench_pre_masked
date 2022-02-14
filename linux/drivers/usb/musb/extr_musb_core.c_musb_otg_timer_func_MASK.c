
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct musb {int lock; TYPE_2__* xceiv; int is_active; } ;
struct TYPE_4__ {TYPE_1__* otg; } ;
struct TYPE_3__ {int state; } ;




 int VAR_0 ;
 int VAR_1 ;

 struct musb* FUNC_0 (int ,struct timer_list*,int ) ;
 struct musb* VAR_2 ;
 int FUNC_1 (struct musb*,char*,...) ;
 int FUNC_2 (struct musb*) ;
 int FUNC_3 (struct musb*,int ) ;
 int VAR_3 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_4)
{
 struct musb *VAR_5 = FUNC_0(VAR_5, VAR_4, VAR_3);
 unsigned long VAR_6;

 FUNC_4(&VAR_5->lock, VAR_6);
 switch (VAR_5->xceiv->otg->state) {
 case 128:
  FUNC_1(VAR_5,
   "HNP: b_wait_acon timeout; back to b_peripheral");
  FUNC_2(VAR_5);
  VAR_5->xceiv->otg->state = VAR_1;
  VAR_5->is_active = 0;
  break;
 case 130:
 case 129:
  FUNC_1(VAR_5, "HNP: %s timeout",
   FUNC_6(VAR_5->xceiv->otg->state));
  FUNC_3(VAR_5, 0);
  VAR_5->xceiv->otg->state = VAR_0;
  break;
 default:
  FUNC_1(VAR_5, "HNP: Unhandled mode %s",
   FUNC_6(VAR_5->xceiv->otg->state));
 }
 FUNC_5(&VAR_5->lock, VAR_6);
}
