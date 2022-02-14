
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct can_bittiming {int phase_seg2; int phase_seg1; int prop_seg; int brp; int sjw; } ;
struct TYPE_2__ {int ctrlmode; struct can_bittiming bittiming; } ;
struct ti_hecc_priv {int ndev; TYPE_1__ can; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ti_hecc_priv*,int ,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct ti_hecc_priv *VAR_3)
{
 struct can_bittiming *VAR_4 = &VAR_3->can.bittiming;
 u32 VAR_5;

 VAR_5 = (VAR_4->phase_seg2 - 1) & 0x7;
 VAR_5 |= ((VAR_4->phase_seg1 + VAR_4->prop_seg - 1)
   & 0xF) << 3;
 if (VAR_3->can.ctrlmode & VAR_0) {
  if (VAR_4->brp > 4)
   VAR_5 |= VAR_2;
  else
   FUNC_2(VAR_3->ndev,
        "WARN: Triple sampling not set due to h/w limitations");
 }
 VAR_5 |= ((VAR_4->sjw - 1) & 0x3) << 8;
 VAR_5 |= ((VAR_4->brp - 1) & 0xFF) << 16;



 FUNC_0(VAR_3, VAR_1, VAR_5);
 FUNC_1(VAR_3->ndev, "setting CANBTC=%#x\n", VAR_5);

 return 0;
}
