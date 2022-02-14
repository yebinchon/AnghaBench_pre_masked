
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int btr_ts2_shift; int btr_sjw_shift; scalar_t__ cantype; } ;
struct can_bittiming {int brp; int prop_seg; int phase_seg1; int phase_seg2; int sjw; } ;
struct TYPE_3__ {struct can_bittiming data_bittiming; struct can_bittiming bittiming; } ;
struct xcan_priv {int (* read_reg ) (struct xcan_priv*,int ) ;int (* write_reg ) (struct xcan_priv*,int ,int) ;TYPE_2__ devtype; TYPE_1__ can; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct net_device*,char*) ;
 int FUNC_1 (struct net_device*,char*,int,int) ;
 struct xcan_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct xcan_priv*,int ) ;
 int FUNC_4 (struct xcan_priv*,int ,int) ;
 int FUNC_5 (struct xcan_priv*,int ,int) ;
 int FUNC_6 (struct xcan_priv*,int ,int) ;
 int FUNC_7 (struct xcan_priv*,int ,int) ;
 int FUNC_8 (struct xcan_priv*,int ) ;
 int FUNC_9 (struct xcan_priv*,int ) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_9)
{
 struct xcan_priv *VAR_10 = FUNC_2(VAR_9);
 struct can_bittiming *VAR_11 = &VAR_10->can.bittiming;
 struct can_bittiming *VAR_12 = &VAR_10->can.data_bittiming;
 u32 VAR_13, VAR_14;
 u32 VAR_15;




 VAR_15 = VAR_10->read_reg(VAR_10, VAR_8) &
    VAR_7;
 if (!VAR_15) {
  FUNC_0(VAR_9,
       "BUG! Cannot set bittiming - CAN is not in config mode\n");
  return -VAR_0;
 }


 VAR_13 = (VAR_11->brp - 1);


 VAR_14 = (VAR_11->prop_seg + VAR_11->phase_seg1 - 1);


 VAR_14 |= (VAR_11->phase_seg2 - 1) << VAR_10->devtype.btr_ts2_shift;


 VAR_14 |= (VAR_11->sjw - 1) << VAR_10->devtype.btr_sjw_shift;

 VAR_10->write_reg(VAR_10, VAR_3, VAR_13);
 VAR_10->write_reg(VAR_10, VAR_4, VAR_14);

 if (VAR_10->devtype.cantype == VAR_1 ||
     VAR_10->devtype.cantype == VAR_2) {

  VAR_13 = VAR_12->brp - 1;


  VAR_14 = VAR_12->prop_seg + VAR_12->phase_seg1 - 1;


  VAR_14 |= (VAR_12->phase_seg2 - 1) << VAR_10->devtype.btr_ts2_shift;


  VAR_14 |= (VAR_12->sjw - 1) << VAR_10->devtype.btr_sjw_shift;

  VAR_10->write_reg(VAR_10, VAR_5, VAR_13);
  VAR_10->write_reg(VAR_10, VAR_6, VAR_14);
 }

 FUNC_1(VAR_9, "BRPR=0x%08x, BTR=0x%08x\n",
     VAR_10->read_reg(VAR_10, VAR_3),
     VAR_10->read_reg(VAR_10, VAR_4));

 return 0;
}
