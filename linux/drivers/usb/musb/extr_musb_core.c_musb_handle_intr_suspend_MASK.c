
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int b_hnp_enable; } ;
struct musb {int is_active; TYPE_5__* hcd; TYPE_3__* xceiv; int a_wait_bcon; int otg_timer; TYPE_1__ g; } ;
struct TYPE_9__ {int b_hnp_enable; } ;
struct TYPE_10__ {TYPE_4__ self; } ;
struct TYPE_8__ {TYPE_2__* otg; } ;
struct TYPE_7__ {int state; } ;




 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct musb*,char*,...) ;
 int FUNC_3 (struct musb*) ;
 int FUNC_4 (struct musb*) ;
 int FUNC_5 (struct musb*) ;
 int FUNC_6 (struct musb*,scalar_t__) ;
 int FUNC_7 (struct musb*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct musb *VAR_5, u8 VAR_6)
{
 FUNC_2(VAR_5, "SUSPEND (%s) devctl %02x",
  FUNC_8(VAR_5->xceiv->otg->state), VAR_6);

 switch (VAR_5->xceiv->otg->state) {
 case 132:







  FUNC_4(VAR_5);
  FUNC_5(VAR_5);
  FUNC_7(VAR_5);
  FUNC_6(VAR_5, VAR_4
    + FUNC_1(VAR_5->a_wait_bcon
     ? : VAR_2));

  break;
 case 129:
  if (!VAR_5->is_active)
   break;

 case 128:
  FUNC_3(VAR_5);
  VAR_5->is_active = VAR_5->g.b_hnp_enable;
  if (VAR_5->is_active) {
   VAR_5->xceiv->otg->state = VAR_1;
   FUNC_2(VAR_5, "HNP: Setting timer for b_ase0_brst");
   FUNC_0(&VAR_5->otg_timer, VAR_4
    + FUNC_1(
      VAR_3));
  }
  break;
 case 131:
  if (VAR_5->a_wait_bcon != 0)
   FUNC_6(VAR_5, VAR_4
    + FUNC_1(VAR_5->a_wait_bcon));
  break;
 case 133:
  VAR_5->xceiv->otg->state = VAR_0;
  VAR_5->is_active = VAR_5->hcd->self.b_hnp_enable;
  break;
 case 130:

  FUNC_2(VAR_5, "REVISIT: SUSPEND as B_HOST");
  break;
 default:

  VAR_5->is_active = 0;
  break;
 }
}
