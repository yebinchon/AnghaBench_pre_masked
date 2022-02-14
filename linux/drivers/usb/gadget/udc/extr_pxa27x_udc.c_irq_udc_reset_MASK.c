
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int irqs_reset; } ;
struct TYPE_3__ {int speed; } ;
struct pxa_udc {TYPE_2__ stats; TYPE_1__ gadget; int dev; struct pxa_ep* pxa_ep; } ;
struct pxa_ep {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct pxa_udc*) ;
 int FUNC_3 (struct pxa_ep*,int) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (struct pxa_ep*,int ) ;
 int FUNC_6 (struct pxa_udc*) ;
 int FUNC_7 (struct pxa_udc*,int ) ;
 int FUNC_8 (struct pxa_udc*,int ,int ) ;

__attribute__((used)) static void FUNC_9(struct pxa_udc *VAR_8)
{
 u32 VAR_9 = FUNC_7(VAR_8, VAR_1);
 struct pxa_ep *VAR_10 = &VAR_8->pxa_ep[0];

 FUNC_1(VAR_8->dev, "USB reset\n");
 FUNC_8(VAR_8, VAR_5, VAR_6);
 VAR_8->stats.irqs_reset++;

 if ((VAR_9 & VAR_2) == 0) {
  FUNC_0(VAR_8->dev, "USB reset start\n");
  FUNC_6(VAR_8);
 }
 VAR_8->gadget.speed = VAR_7;
 FUNC_4(&VAR_8->stats, 0, sizeof VAR_8->stats);

 FUNC_5(VAR_10, -VAR_0);
 FUNC_3(VAR_10, VAR_3 | VAR_4);
 FUNC_2(VAR_8);
}
