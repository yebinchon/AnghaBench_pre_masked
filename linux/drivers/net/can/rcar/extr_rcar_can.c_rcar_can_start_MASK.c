
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int ctrlmode; int state; } ;
struct rcar_can_priv {int ier; TYPE_2__* regs; TYPE_1__ can; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int tfcr; int rfcr; int str; int ctlr; int eier; int ecsr; int ier; int mier1; int * fidcr; int mkivlr1; int * mkr_2_9; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 struct rcar_can_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (int,int *) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_27)
{
 struct rcar_can_priv *VAR_28 = FUNC_0(VAR_27);
 u16 VAR_29;
 int VAR_30;







 VAR_29 = FUNC_2(&VAR_28->regs->ctlr);
 VAR_29 &= ~VAR_9;
 FUNC_5(VAR_29, &VAR_28->regs->ctlr);

 VAR_29 |= VAR_5;
 FUNC_5(VAR_29, &VAR_28->regs->ctlr);
 for (VAR_30 = 0; VAR_30 < VAR_2; VAR_30++) {
  if (FUNC_2(&VAR_28->regs->str) & VAR_25)
   break;
 }
 FUNC_1(VAR_27);
 VAR_29 |= VAR_6;
 VAR_29 |= VAR_3;

 VAR_29 |= VAR_7;
 VAR_29 |= VAR_8;
 FUNC_5(VAR_29, &VAR_28->regs->ctlr);


 FUNC_4(0, &VAR_28->regs->mkr_2_9[6]);
 FUNC_4(0, &VAR_28->regs->mkr_2_9[7]);

 FUNC_4(0, &VAR_28->regs->mkivlr1);

 FUNC_4(0, &VAR_28->regs->fidcr[0]);
 FUNC_4(VAR_17 | VAR_18, &VAR_28->regs->fidcr[1]);

 FUNC_4(VAR_22 | VAR_23, &VAR_28->regs->mier1);

 VAR_28->ier = VAR_19 | VAR_20 |
      VAR_21;
 FUNC_3(VAR_28->ier, &VAR_28->regs->ier);


 FUNC_3(VAR_10, &VAR_28->regs->ecsr);

 FUNC_3(VAR_14 | VAR_13 | VAR_12 |
        (VAR_28->can.ctrlmode & VAR_0 ?
        VAR_11 : 0) | VAR_16 |
        VAR_15, &VAR_28->regs->eier);
 VAR_28->can.state = VAR_1;


 FUNC_5(VAR_29 & ~VAR_4, &VAR_28->regs->ctlr);
 for (VAR_30 = 0; VAR_30 < VAR_2; VAR_30++) {
  if (!(FUNC_2(&VAR_28->regs->str) & VAR_25))
   break;
 }

 FUNC_3(VAR_24, &VAR_28->regs->rfcr);
 FUNC_3(VAR_26, &VAR_28->regs->tfcr);
}
