
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct can_bittiming {int brp; int sjw; int prop_seg; int phase_seg1; int phase_seg2; } ;
struct TYPE_2__ {int ctrlmode; struct can_bittiming bittiming; } ;
struct at91_priv {TYPE_1__ can; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct at91_priv const*,int ,int) ;
 int FUNC_1 (struct net_device*,char*,int) ;
 struct at91_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2)
{
 const struct at91_priv *VAR_3 = FUNC_2(VAR_2);
 const struct can_bittiming *VAR_4 = &VAR_3->can.bittiming;
 u32 VAR_5;

 VAR_5 = ((VAR_3->can.ctrlmode & VAR_1) ? 1 << 24 : 0) |
  ((VAR_4->brp - 1) << 16) | ((VAR_4->sjw - 1) << 12) |
  ((VAR_4->prop_seg - 1) << 8) | ((VAR_4->phase_seg1 - 1) << 4) |
  ((VAR_4->phase_seg2 - 1) << 0);

 FUNC_1(VAR_2, "writing AT91_BR: 0x%08x\n", VAR_5);

 FUNC_0(VAR_3, VAR_0, VAR_5);

 return 0;
}
