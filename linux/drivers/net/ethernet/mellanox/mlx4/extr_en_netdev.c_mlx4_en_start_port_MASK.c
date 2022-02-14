
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct net_device {int mtu; } ;
struct mlx4_en_tx_ring {int buf_size; scalar_t__ buf; int * recycle_ring; int tx_queue; } ;
struct TYPE_16__ {int indir_qp; } ;
struct mlx4_en_priv {int port_up; int rx_ring_num; int cqe_factor; size_t port; int num_tx_rings_p_up; int* tx_ring_num; int flags; TYPE_8__** rx_ring; struct mlx4_en_cq** rx_cq; struct mlx4_en_cq*** tx_cq; struct mlx4_en_tx_ring*** tx_ring; struct mlx4_en_dev* mdev; int rx_mode_task; int broadcast_id; TYPE_3__ rss_map; int base_qpn; TYPE_2__* prof; scalar_t__ rx_skb_size; int counter_index; int cqe_size; int max_mtu; int * ethtool_rules; int ethtool_list; int curr_list; int mc_list; } ;
struct mlx4_en_dev {TYPE_5__* dev; int workqueue; scalar_t__* mac_removed; } ;
struct TYPE_14__ {int cqn; } ;
struct mlx4_en_cq {int size; int napi; TYPE_1__ mcq; TYPE_7__* buf; } ;
struct mlx4_cqe {int owner_sr_opcode; } ;
struct ethtool_flow_id {int dummy; } ;
struct TYPE_20__ {int cqn; } ;
struct TYPE_19__ {int wqe_index; } ;
struct TYPE_17__ {scalar_t__ tunnel_offload_mode; scalar_t__ steering_mode; } ;
struct TYPE_18__ {TYPE_4__ caps; } ;
struct TYPE_15__ {int rx_ppp; int rx_pause; int tx_ppp; int tx_pause; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,struct mlx4_en_priv*,char*,...) ;
 int FUNC_3 (struct mlx4_en_priv*,char*,...) ;
 int FUNC_4 (int*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (TYPE_5__*,size_t) ;
 int FUNC_10 (TYPE_5__*,size_t,int ,int) ;
 int FUNC_11 (TYPE_5__*,size_t,scalar_t__,int ,int ,int ,int ) ;
 int FUNC_12 (TYPE_5__*,size_t,int ,int ) ;
 int FUNC_13 (TYPE_5__*,size_t,int ) ;
 int FUNC_14 (struct mlx4_en_priv*,struct mlx4_en_cq*,int) ;
 int FUNC_15 (struct mlx4_en_priv*) ;
 int FUNC_16 (struct mlx4_en_priv*,struct mlx4_en_tx_ring*,int ,int) ;
 int FUNC_17 (struct mlx4_en_priv*,struct mlx4_en_cq*) ;
 int FUNC_18 (struct net_device*) ;
 int FUNC_19 (struct mlx4_en_priv*) ;
 int FUNC_20 (struct mlx4_en_priv*) ;
 int FUNC_21 (struct mlx4_en_priv*,struct mlx4_en_cq*) ;
 int FUNC_22 (struct mlx4_en_priv*,TYPE_8__*) ;
 int FUNC_23 (struct mlx4_en_priv*,struct mlx4_en_tx_ring*) ;
 int FUNC_24 (struct mlx4_en_priv*) ;
 int FUNC_25 (struct mlx4_en_priv*,int) ;
 struct mlx4_cqe* FUNC_26 (TYPE_7__*,int,int ) ;
 int FUNC_27 (struct mlx4_en_priv*) ;
 int FUNC_28 (struct mlx4_en_priv*,int) ;
 int FUNC_29 (struct mlx4_en_priv*,int) ;
 int FUNC_30 (struct mlx4_en_priv*,struct mlx4_en_tx_ring*) ;
 int FUNC_31 (struct mlx4_en_priv*) ;
 int FUNC_32 (struct mlx4_en_priv*) ;
 int FUNC_33 (struct mlx4_en_priv*,struct mlx4_en_cq*) ;
 scalar_t__ FUNC_34 (struct mlx4_en_priv*) ;
 int FUNC_35 (TYPE_5__*,size_t) ;
 scalar_t__ FUNC_36 (TYPE_5__*,int ,int*,int,int ,int ,int *) ;
 int FUNC_37 (struct mlx4_en_dev*,char*) ;
 int FUNC_38 (int *) ;
 int FUNC_39 (struct net_device*,int) ;
 struct mlx4_en_priv* FUNC_40 (struct net_device*) ;
 int FUNC_41 (struct net_device*) ;
 int FUNC_42 (struct net_device*) ;
 int FUNC_43 (int ,int *) ;
 int FUNC_44 (struct net_device*) ;

int FUNC_45(struct net_device *VAR_15)
{
 struct mlx4_en_priv *VAR_16 = FUNC_40(VAR_15);
 struct mlx4_en_dev *VAR_17 = VAR_16->mdev;
 struct mlx4_en_cq *VAR_18;
 struct mlx4_en_tx_ring *VAR_19;
 int VAR_20 = 0;
 int VAR_21 = 0;
 int VAR_22, VAR_23;
 int VAR_24;
 u8 VAR_25[16] = {0};

 if (VAR_16->port_up) {
  FUNC_2(VAR_0, VAR_16, "start port called while port already up\n");
  return 0;
 }

 FUNC_0(&VAR_16->mc_list);
 FUNC_0(&VAR_16->curr_list);
 FUNC_0(&VAR_16->ethtool_list);
 FUNC_7(&VAR_16->ethtool_rules[0], 0,
        sizeof(struct ethtool_flow_id) * VAR_3);


 VAR_15->mtu = FUNC_8(VAR_15->mtu, VAR_16->max_mtu);
 FUNC_18(VAR_15);
 FUNC_2(VAR_0, VAR_16, "Rx buf size:%d\n", VAR_16->rx_skb_size);


 VAR_21 = FUNC_15(VAR_16);
 if (VAR_21) {
  FUNC_3(VAR_16, "Failed to activate RX rings\n");
  return VAR_21;
 }
 for (VAR_22 = 0; VAR_22 < VAR_16->rx_ring_num; VAR_22++) {
  VAR_18 = VAR_16->rx_cq[VAR_22];

  VAR_21 = FUNC_28(VAR_16, VAR_22);
  if (VAR_21) {
   FUNC_3(VAR_16, "Failed preparing IRQ affinity hint\n");
   goto cq_err;
  }

  VAR_21 = FUNC_14(VAR_16, VAR_18, VAR_22);
  if (VAR_21) {
   FUNC_3(VAR_16, "Failed activating Rx CQ\n");
   FUNC_25(VAR_16, VAR_22);
   goto cq_err;
  }

  for (VAR_24 = 0; VAR_24 < VAR_18->size; VAR_24++) {
   struct mlx4_cqe *VAR_26 = ((void*)0);

   VAR_26 = FUNC_26(VAR_18->buf, VAR_24, VAR_16->cqe_size) +
         VAR_16->cqe_factor;
   VAR_26->owner_sr_opcode = VAR_4;
  }

  VAR_21 = FUNC_33(VAR_16, VAR_18);
  if (VAR_21) {
   FUNC_3(VAR_16, "Failed setting cq moderation parameters\n");
   FUNC_21(VAR_16, VAR_18);
   FUNC_25(VAR_16, VAR_22);
   goto cq_err;
  }
  FUNC_17(VAR_16, VAR_18);
  VAR_16->rx_ring[VAR_22]->cqn = VAR_18->mcq.cqn;
  ++VAR_20;
 }


 FUNC_2(VAR_0, VAR_16, "Getting qp number for port %d\n", VAR_16->port);
 VAR_21 = FUNC_27(VAR_16);
 if (VAR_21) {
  FUNC_3(VAR_16, "Failed getting eth qp\n");
  goto cq_err;
 }
 VAR_17->mac_removed[VAR_16->port] = 0;

 VAR_16->counter_index =
   FUNC_35(VAR_17->dev, VAR_16->port);

 VAR_21 = FUNC_19(VAR_16);
 if (VAR_21) {
  FUNC_3(VAR_16, "Failed configuring rss steering\n");
  goto mac_err;
 }

 VAR_21 = FUNC_20(VAR_16);
 if (VAR_21)
  goto rss_err;


 for (VAR_23 = 0 ; VAR_23 < VAR_7; VAR_23++) {
  u8 VAR_27 = VAR_23 == VAR_12 ?
   VAR_16->num_tx_rings_p_up : VAR_16->tx_ring_num[VAR_23];

  for (VAR_22 = 0; VAR_22 < VAR_16->tx_ring_num[VAR_23]; VAR_22++) {

   VAR_18 = VAR_16->tx_cq[VAR_23][VAR_22];
   VAR_21 = FUNC_14(VAR_16, VAR_18, VAR_22);
   if (VAR_21) {
    FUNC_3(VAR_16, "Failed allocating Tx CQ\n");
    goto tx_err;
   }
   VAR_21 = FUNC_33(VAR_16, VAR_18);
   if (VAR_21) {
    FUNC_3(VAR_16, "Failed setting cq moderation parameters\n");
    FUNC_21(VAR_16, VAR_18);
    goto tx_err;
   }
   FUNC_2(VAR_0, VAR_16,
          "Resetting index of collapsed CQ:%d to -1\n", VAR_22);
   VAR_18->buf->wqe_index = FUNC_1(0xffff);


   VAR_19 = VAR_16->tx_ring[VAR_23][VAR_22];
   VAR_21 = FUNC_16(VAR_16, VAR_19,
             VAR_18->mcq.cqn,
             VAR_22 / VAR_27);
   if (VAR_21) {
    FUNC_3(VAR_16, "Failed allocating Tx ring\n");
    FUNC_21(VAR_16, VAR_18);
    goto tx_err;
   }
   if (VAR_23 != VAR_13) {
    VAR_19->tx_queue = FUNC_39(VAR_15, VAR_22);
    VAR_19->recycle_ring = ((void*)0);


    FUNC_17(VAR_16, VAR_18);

   } else {
    FUNC_30(VAR_16, VAR_19);
    FUNC_29(VAR_16, VAR_22);

   }


   for (VAR_24 = 0; VAR_24 < VAR_19->buf_size; VAR_24 += VAR_11)
    *((u32 *)(VAR_19->buf + VAR_24)) = 0xffffffff;
  }
 }


 VAR_21 = FUNC_11(VAR_17->dev, VAR_16->port,
        VAR_16->rx_skb_size + VAR_1,
        VAR_16->prof->tx_pause,
        VAR_16->prof->tx_ppp,
        VAR_16->prof->rx_pause,
        VAR_16->prof->rx_ppp);
 if (VAR_21) {
  FUNC_3(VAR_16, "Failed setting port general configurations for port %d, with error %d\n",
         VAR_16->port, VAR_21);
  goto tx_err;
 }

 VAR_21 = FUNC_13(VAR_17->dev, VAR_16->port, VAR_15->mtu);
 if (VAR_21) {
  FUNC_3(VAR_16, "Failed to pass user MTU(%d) to Firmware for port %d, with error %d\n",
         VAR_15->mtu, VAR_16->port, VAR_21);
  goto tx_err;
 }


 VAR_21 = FUNC_12(VAR_17->dev, VAR_16->port, VAR_16->base_qpn, 0);
 if (VAR_21) {
  FUNC_3(VAR_16, "Failed setting default qp numbers\n");
  goto tx_err;
 }

 if (VAR_17->dev->caps.tunnel_offload_mode == VAR_10) {
  VAR_21 = FUNC_10(VAR_17->dev, VAR_16->port, VAR_14, 1);
  if (VAR_21) {
   FUNC_3(VAR_16, "Failed setting port L2 tunnel configuration, err %d\n",
          VAR_21);
   goto tx_err;
  }
 }


 FUNC_2(VAR_2, VAR_16, "Initializing port\n");
 VAR_21 = FUNC_9(VAR_17->dev, VAR_16->port);
 if (VAR_21) {
  FUNC_3(VAR_16, "Failed Initializing port\n");
  goto tx_err;
 }


 if (VAR_17->dev->caps.steering_mode != VAR_9 &&
     FUNC_34(VAR_16))
  FUNC_37(VAR_17, "Failed setting steering rules\n");


 FUNC_4(&VAR_25[10]);
 VAR_25[5] = VAR_16->port;
 if (FUNC_36(VAR_17->dev, VAR_16->rss_map.indir_qp, VAR_25,
      VAR_16->port, 0, VAR_8,
      &VAR_16->broadcast_id))
  FUNC_37(VAR_17, "Failed Attaching Broadcast\n");


 VAR_16->flags &= ~(VAR_6 | VAR_5);


 FUNC_43(VAR_17->workqueue, &VAR_16->rx_mode_task);

 if (VAR_16->mdev->dev->caps.tunnel_offload_mode == VAR_10)
  FUNC_44(VAR_15);

 VAR_16->port_up = 1;




 for (VAR_22 = 0; VAR_22 < VAR_16->rx_ring_num; VAR_22++) {
  FUNC_5();
  FUNC_38(&VAR_16->rx_cq[VAR_22]->napi);
  FUNC_6();
 }

 FUNC_42(VAR_15);
 FUNC_41(VAR_15);

 return 0;

tx_err:
 if (VAR_23 == VAR_7) {
  VAR_23--;
  VAR_22 = VAR_16->tx_ring_num[VAR_23];
 }
 while (VAR_23 >= 0) {
  while (VAR_22--) {
   FUNC_23(VAR_16, VAR_16->tx_ring[VAR_23][VAR_22]);
   FUNC_21(VAR_16, VAR_16->tx_cq[VAR_23][VAR_22]);
  }
  if (!VAR_23--)
   break;
  VAR_22 = VAR_16->tx_ring_num[VAR_23];
 }
 FUNC_24(VAR_16);
rss_err:
 FUNC_32(VAR_16);
mac_err:
 FUNC_31(VAR_16);
cq_err:
 while (VAR_20--) {
  FUNC_21(VAR_16, VAR_16->rx_cq[VAR_20]);
  FUNC_25(VAR_16, VAR_20);
 }
 for (VAR_22 = 0; VAR_22 < VAR_16->rx_ring_num; VAR_22++)
  FUNC_22(VAR_16, VAR_16->rx_ring[VAR_22]);

 return VAR_21;
}
