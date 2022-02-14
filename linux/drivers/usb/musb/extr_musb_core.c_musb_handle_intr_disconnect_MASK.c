
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct musb {TYPE_4__* xceiv; TYPE_2__* hcd; int a_wait_bcon; } ;
struct TYPE_8__ {TYPE_3__* otg; } ;
struct TYPE_7__ {int state; } ;
struct TYPE_5__ {int is_b_host; } ;
struct TYPE_6__ {TYPE_1__ self; } ;


 int FUNC_0 (struct musb*) ;
 int FUNC_1 (struct musb*) ;







 int FUNC_2 (char*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct musb*,char*,int ,int ,int ) ;
 int FUNC_5 (struct musb*) ;
 int FUNC_6 (struct musb*) ;
 int FUNC_7 (struct musb*) ;
 int FUNC_8 (struct musb*,scalar_t__) ;
 int FUNC_9 (struct musb*) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct musb *VAR_1, u8 VAR_2)
{
 FUNC_4(VAR_1, "DISCONNECT (%s) as %s, devctl %02x",
   FUNC_10(VAR_1->xceiv->otg->state),
   FUNC_1(VAR_1), VAR_2);

 switch (VAR_1->xceiv->otg->state) {
 case 134:
 case 132:
  FUNC_7(VAR_1);
  FUNC_9(VAR_1);
  if (VAR_1->a_wait_bcon != 0)
   FUNC_8(VAR_1, VAR_0
    + FUNC_3(VAR_1->a_wait_bcon));
  break;
 case 131:





  FUNC_9(VAR_1);
  if (VAR_1->hcd)
   VAR_1->hcd->self.is_b_host = 0;
  VAR_1->xceiv->otg->state = 129;
  FUNC_0(VAR_1);
  FUNC_5(VAR_1);
  break;
 case 133:
  FUNC_6(VAR_1);
  FUNC_9(VAR_1);

 case 128:

 case 129:
 case 130:
  FUNC_5(VAR_1);
  break;
 default:
  FUNC_2("unhandled DISCONNECT transition (%s)\n",
   FUNC_10(VAR_1->xceiv->otg->state));
  break;
 }
}
