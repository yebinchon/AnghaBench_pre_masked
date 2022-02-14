
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct can_bittiming {scalar_t__ phase_seg2; scalar_t__ phase_seg1; scalar_t__ prop_seg; scalar_t__ sjw; scalar_t__ brp; } ;
struct TYPE_2__ {int ctrlmode; struct can_bittiming data_bittiming; struct can_bittiming bittiming; } ;
struct rcar_canfd_channel {int channel; int ndev; int base; TYPE_1__ can; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (int ,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 struct rcar_canfd_channel* FUNC_15 (struct net_device*) ;
 int FUNC_16 (int ,int ,int) ;

__attribute__((used)) static void FUNC_17(struct net_device *VAR_1)
{
 struct rcar_canfd_channel *VAR_2 = FUNC_15(VAR_1);
 const struct can_bittiming *VAR_3 = &VAR_2->can.bittiming;
 const struct can_bittiming *VAR_4 = &VAR_2->can.data_bittiming;
 u16 VAR_5, VAR_6, VAR_7, VAR_8;
 u32 VAR_9;
 u32 VAR_10 = VAR_2->channel;


 VAR_5 = VAR_3->brp - 1;
 VAR_6 = VAR_3->sjw - 1;
 VAR_7 = VAR_3->prop_seg + VAR_3->phase_seg1 - 1;
 VAR_8 = VAR_3->phase_seg2 - 1;

 if (VAR_2->can.ctrlmode & VAR_0) {

  VAR_9 = (FUNC_12(VAR_7) | FUNC_10(VAR_5) |
         FUNC_11(VAR_6) | FUNC_13(VAR_8));

  FUNC_16(VAR_2->base, FUNC_0(VAR_10), VAR_9);
  FUNC_14(VAR_2->ndev, "nrate: brp %u, sjw %u, tseg1 %u, tseg2 %u\n",
      VAR_5, VAR_6, VAR_7, VAR_8);


  VAR_5 = VAR_4->brp - 1;
  VAR_6 = VAR_4->sjw - 1;
  VAR_7 = VAR_4->prop_seg + VAR_4->phase_seg1 - 1;
  VAR_8 = VAR_4->phase_seg2 - 1;

  VAR_9 = (FUNC_7(VAR_7) | FUNC_5(VAR_5) |
         FUNC_6(VAR_6) | FUNC_8(VAR_8));

  FUNC_16(VAR_2->base, FUNC_9(VAR_10), VAR_9);
  FUNC_14(VAR_2->ndev, "drate: brp %u, sjw %u, tseg1 %u, tseg2 %u\n",
      VAR_5, VAR_6, VAR_7, VAR_8);
 } else {

  VAR_9 = (FUNC_3(VAR_7) | FUNC_1(VAR_5) |
   FUNC_2(VAR_6) | FUNC_4(VAR_8));

  FUNC_16(VAR_2->base, FUNC_0(VAR_10), VAR_9);
  FUNC_14(VAR_2->ndev,
      "rate: brp %u, sjw %u, tseg1 %u, tseg2 %u\n",
      VAR_5, VAR_6, VAR_7, VAR_8);
 }
}
