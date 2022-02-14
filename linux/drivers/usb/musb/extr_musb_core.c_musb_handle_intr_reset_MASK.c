
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct musb {TYPE_2__* xceiv; int otg_timer; int controller; } ;
struct TYPE_4__ {TYPE_1__* otg; } ;
struct TYPE_3__ {int state; } ;
 int FUNC_0 (struct musb*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (struct musb*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct musb*,char*,int ,...) ;
 int FUNC_7 (struct musb*) ;
 int FUNC_8 (struct musb*) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct musb *VAR_1)
{
 if (FUNC_3(VAR_1)) {
  FUNC_2(VAR_1->controller, "Babble\n");
  FUNC_8(VAR_1);
 } else {
  FUNC_6(VAR_1, "BUS RESET as %s",
   FUNC_9(VAR_1->xceiv->otg->state));
  switch (VAR_1->xceiv->otg->state) {
  case 132:
   FUNC_7(VAR_1);

  case 131:

   FUNC_6(VAR_1, "HNP: in %s, %d msec timeout",
    FUNC_9(VAR_1->xceiv->otg->state),
    FUNC_0(VAR_1));
   FUNC_4(&VAR_1->otg_timer, VAR_0
    + FUNC_5(FUNC_0(VAR_1)));
   break;
  case 133:
   FUNC_1(&VAR_1->otg_timer);
   FUNC_7(VAR_1);
   break;
  case 128:
   FUNC_6(VAR_1, "HNP: RESET (%s), to b_peripheral",
    FUNC_9(VAR_1->xceiv->otg->state));
   VAR_1->xceiv->otg->state = 129;
   FUNC_7(VAR_1);
   break;
  case 130:
   VAR_1->xceiv->otg->state = 129;

  case 129:
   FUNC_7(VAR_1);
   break;
  default:
   FUNC_6(VAR_1, "Unhandled BUS RESET as %s",
    FUNC_9(VAR_1->xceiv->otg->state));
  }
 }
}
