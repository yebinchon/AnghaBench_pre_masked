
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct can_bittiming {scalar_t__ phase_seg2; scalar_t__ sjw; scalar_t__ brp; scalar_t__ prop_seg; scalar_t__ phase_seg1; } ;
struct TYPE_4__ {struct can_bittiming bittiming; } ;
struct rcar_can_priv {int clock_select; TYPE_1__* regs; TYPE_2__ can; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int bcr; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 struct rcar_can_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int,int *) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_0)
{
 struct rcar_can_priv *VAR_1 = FUNC_4(VAR_0);
 struct can_bittiming *VAR_2 = &VAR_1->can.bittiming;
 u32 VAR_3;

 VAR_3 = FUNC_2(VAR_2->phase_seg1 + VAR_2->prop_seg - 1) |
       FUNC_0(VAR_2->brp - 1) | FUNC_1(VAR_2->sjw - 1) |
       FUNC_3(VAR_2->phase_seg2 - 1);




 FUNC_5((VAR_3 << 8) | VAR_1->clock_select, &VAR_1->regs->bcr);
}
