
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct can_bittiming {int brp; int sjw; int prop_seg; int phase_seg1; int phase_seg2; } ;
struct TYPE_2__ {int ctrlmode; struct can_bittiming bittiming; } ;
struct sun4ican_priv {scalar_t__ base; TYPE_1__ can; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct net_device*,char*,int) ;
 struct sun4ican_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2)
{
 struct sun4ican_priv *VAR_3 = FUNC_1(VAR_2);
 struct can_bittiming *VAR_4 = &VAR_3->can.bittiming;
 u32 VAR_5;

 VAR_5 = ((VAR_4->brp - 1) & 0x3FF) |
      (((VAR_4->sjw - 1) & 0x3) << 14) |
      (((VAR_4->prop_seg + VAR_4->phase_seg1 - 1) & 0xf) << 16) |
      (((VAR_4->phase_seg2 - 1) & 0x7) << 20);
 if (VAR_3->can.ctrlmode & VAR_0)
  VAR_5 |= 0x800000;

 FUNC_0(VAR_2, "setting BITTIMING=0x%08x\n", VAR_5);
 FUNC_2(VAR_5, VAR_3->base + VAR_1);

 return 0;
}
