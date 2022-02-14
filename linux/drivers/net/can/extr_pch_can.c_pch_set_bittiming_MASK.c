
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct can_bittiming {int brp; int sjw; int phase_seg1; int prop_seg; int phase_seg2; } ;
struct TYPE_3__ {struct can_bittiming bittiming; } ;
struct pch_can_priv {TYPE_2__* regs; TYPE_1__ can; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int cont; int brpe; int bitt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int *) ;
 struct pch_can_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_7)
{
 struct pch_can_priv *VAR_8 = FUNC_1(VAR_7);
 const struct can_bittiming *VAR_9 = &VAR_8->can.bittiming;
 u32 VAR_10;
 u32 VAR_11;


 FUNC_3(&VAR_8->regs->cont, VAR_4);

 VAR_10 = (VAR_9->brp - 1) & VAR_5;
 VAR_10 |= (VAR_9->sjw - 1) << VAR_1;
 VAR_10 |= (VAR_9->phase_seg1 + VAR_9->prop_seg - 1) << VAR_2;
 VAR_10 |= (VAR_9->phase_seg2 - 1) << VAR_3;
 VAR_11 = ((VAR_9->brp - 1) & VAR_6) >> VAR_0;
 FUNC_0(VAR_10, &VAR_8->regs->bitt);
 FUNC_0(VAR_11, &VAR_8->regs->brpe);
 FUNC_2(&VAR_8->regs->cont, VAR_4);

 return 0;
}
