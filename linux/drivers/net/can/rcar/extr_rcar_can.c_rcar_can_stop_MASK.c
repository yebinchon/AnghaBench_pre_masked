
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int state; } ;
struct rcar_can_priv {TYPE_2__ can; TYPE_1__* regs; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int ctlr; int eier; int ier; int mier1; int mier0; int str; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct rcar_can_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int,int *) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_5)
{
 struct rcar_can_priv *VAR_6 = FUNC_0(VAR_5);
 u16 VAR_7;
 int VAR_8;


 VAR_7 = FUNC_1(&VAR_6->regs->ctlr);
 VAR_7 |= VAR_2;
 FUNC_4(VAR_7, &VAR_6->regs->ctlr);
 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  if (FUNC_1(&VAR_6->regs->str) & VAR_4)
   break;
 }
 FUNC_3(0, &VAR_6->regs->mier0);
 FUNC_3(0, &VAR_6->regs->mier1);
 FUNC_2(0, &VAR_6->regs->ier);
 FUNC_2(0, &VAR_6->regs->eier);

 VAR_7 |= VAR_3;
 FUNC_4(VAR_7, &VAR_6->regs->ctlr);
 VAR_6->can.state = VAR_0;
}
