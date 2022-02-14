
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int flags; int * netdev_ops; } ;
struct TYPE_6__ {int freq; } ;
struct TYPE_7__ {int echo_skb_max; int ctrlmode_supported; int do_get_berr_counter; int do_set_mode; int do_set_data_bittiming; int do_set_bittiming; int * data_bittiming_const; int * bittiming_const; TYPE_2__ clock; } ;
struct TYPE_5__ {scalar_t__ rxerr; scalar_t__ txerr; } ;
struct kvaser_pciefd_can {scalar_t__ reg_base; TYPE_3__ can; int lock; int echo_lock; scalar_t__ echo_idx; int bec_poll_timer; int flush_comp; int start_comp; TYPE_1__ bec; scalar_t__ err_rep_cnt; scalar_t__ cmd_seq; struct kvaser_pciefd* kv_pcie; } ;
struct kvaser_pciefd {int nr_channels; struct kvaser_pciefd_can** can; TYPE_4__* pci; int freq; scalar_t__ reg_base; } ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_0 (struct net_device*,int *) ;
 struct net_device* FUNC_1 (int,int) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_7 (struct kvaser_pciefd_can*) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 struct kvaser_pciefd_can* FUNC_8 (struct net_device*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct kvaser_pciefd *VAR_26)
{
 int VAR_27;

 for (VAR_27 = 0; VAR_27 < VAR_26->nr_channels; VAR_27++) {
  struct net_device *VAR_28;
  struct kvaser_pciefd_can *VAR_29;
  u32 VAR_30, VAR_31;

  VAR_28 = FUNC_1(sizeof(struct kvaser_pciefd_can),
          VAR_7);
  if (!VAR_28)
   return -VAR_5;

  VAR_29 = FUNC_8(VAR_28);
  VAR_28->netdev_ops = &VAR_22;
  VAR_29->reg_base = VAR_26->reg_base + VAR_8 +
    VAR_27 * VAR_9;

  VAR_29->kv_pcie = VAR_26;
  VAR_29->cmd_seq = 0;
  VAR_29->err_rep_cnt = 0;
  VAR_29->bec.txerr = 0;
  VAR_29->bec.rxerr = 0;

  FUNC_4(&VAR_29->start_comp);
  FUNC_4(&VAR_29->flush_comp);
  FUNC_10(&VAR_29->bec_poll_timer, VAR_19,
       0);

  VAR_31 = FUNC_5(VAR_29->reg_base +
           VAR_18);
  if (((VAR_31 >> VAR_17) &
        0xff) < VAR_7) {
   FUNC_2(&VAR_26->pci->dev,
    "Max Tx count is smaller than expected\n");

   FUNC_3(VAR_28);
   return -VAR_4;
  }

  VAR_29->can.clock.freq = VAR_26->freq;
  VAR_29->can.echo_skb_max = VAR_7;
  VAR_29->echo_idx = 0;
  FUNC_9(&VAR_29->echo_lock);
  FUNC_9(&VAR_29->lock);
  VAR_29->can.bittiming_const = &VAR_20;
  VAR_29->can.data_bittiming_const = &VAR_20;

  VAR_29->can.do_set_bittiming = VAR_25;
  VAR_29->can.do_set_data_bittiming =
   VAR_23;

  VAR_29->can.do_set_mode = VAR_24;
  VAR_29->can.do_get_berr_counter = VAR_21;

  VAR_29->can.ctrlmode_supported = VAR_2 |
           VAR_0 |
           VAR_1;

  VAR_30 = FUNC_5(VAR_29->reg_base + VAR_16);
  if (!(VAR_30 & VAR_15)) {
   FUNC_2(&VAR_26->pci->dev,
    "CAN FD not supported as expected %d\n", VAR_27);

   FUNC_3(VAR_28);
   return -VAR_4;
  }

  if (VAR_30 & VAR_14)
   VAR_29->can.ctrlmode_supported |= VAR_3;

  VAR_28->flags |= VAR_6;

  FUNC_0(VAR_28, &VAR_26->pci->dev);

  FUNC_6(-1, VAR_29->reg_base + VAR_12);
  FUNC_6(VAR_11 |
     VAR_13,
     VAR_29->reg_base + VAR_10);

  VAR_26->can[VAR_27] = VAR_29;
  FUNC_7(VAR_29);
 }

 return 0;
}
