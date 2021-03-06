
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_6__ {int ctrlmode; } ;
struct rcar_canfd_channel {int channel; TYPE_2__* ndev; int base; TYPE_1__ can; } ;
struct net_device_stats {int rx_packets; int rx_bytes; int rx_dropped; } ;
struct canfd_frame {int can_id; void* len; int flags; } ;
struct can_frame {int dummy; } ;
struct TYPE_7__ {struct net_device_stats stats; } ;


 int CANFD_BRS ;
 int CANFD_ESI ;
 int CAN_CTRLMODE_FD ;
 int CAN_EFF_FLAG ;
 int CAN_EFF_MASK ;
 int CAN_LED_EVENT_RX ;
 int CAN_RTR_FLAG ;
 int CAN_SFF_MASK ;
 int RCANFD_C_RFDF (int,int ) ;
 int RCANFD_C_RFID (int) ;
 int RCANFD_C_RFPTR (int) ;
 int RCANFD_F_RFDF (int,int ) ;
 int RCANFD_F_RFFDSTS (int) ;
 int RCANFD_F_RFID (int) ;
 int RCANFD_F_RFPTR (int) ;
 int RCANFD_RFFDSTS_RFBRS ;
 int RCANFD_RFFDSTS_RFESI ;
 int RCANFD_RFFDSTS_RFFDF ;
 int RCANFD_RFFIFO_IDX ;
 int RCANFD_RFID_RFIDE ;
 int RCANFD_RFID_RFRTR ;
 int RCANFD_RFPCTR (int) ;
 int RCANFD_RFPTR_RFDLC (int) ;
 struct sk_buff* alloc_can_skb (TYPE_2__*,struct can_frame**) ;
 struct sk_buff* alloc_canfd_skb (TYPE_2__*,struct canfd_frame**) ;
 void* can_dlc2len (int ) ;
 int can_led_event (TYPE_2__*,int ) ;
 void* get_can_dlc (int ) ;
 int netdev_dbg (TYPE_2__*,char*) ;
 int netif_receive_skb (struct sk_buff*) ;
 int rcar_canfd_get_data (struct rcar_canfd_channel*,struct canfd_frame*,int ) ;
 int rcar_canfd_read (int ,int ) ;
 int rcar_canfd_write (int ,int ,int) ;

__attribute__((used)) static void rcar_canfd_rx_pkt(struct rcar_canfd_channel *priv)
{
 struct net_device_stats *stats = &priv->ndev->stats;
 struct canfd_frame *cf;
 struct sk_buff *skb;
 u32 sts = 0, id, dlc;
 u32 ch = priv->channel;
 u32 ridx = ch + RCANFD_RFFIFO_IDX;

 if (priv->can.ctrlmode & CAN_CTRLMODE_FD) {
  id = rcar_canfd_read(priv->base, RCANFD_F_RFID(ridx));
  dlc = rcar_canfd_read(priv->base, RCANFD_F_RFPTR(ridx));

  sts = rcar_canfd_read(priv->base, RCANFD_F_RFFDSTS(ridx));
  if (sts & RCANFD_RFFDSTS_RFFDF)
   skb = alloc_canfd_skb(priv->ndev, &cf);
  else
   skb = alloc_can_skb(priv->ndev,
         (struct can_frame **)&cf);
 } else {
  id = rcar_canfd_read(priv->base, RCANFD_C_RFID(ridx));
  dlc = rcar_canfd_read(priv->base, RCANFD_C_RFPTR(ridx));
  skb = alloc_can_skb(priv->ndev, (struct can_frame **)&cf);
 }

 if (!skb) {
  stats->rx_dropped++;
  return;
 }

 if (id & RCANFD_RFID_RFIDE)
  cf->can_id = (id & CAN_EFF_MASK) | CAN_EFF_FLAG;
 else
  cf->can_id = id & CAN_SFF_MASK;

 if (priv->can.ctrlmode & CAN_CTRLMODE_FD) {
  if (sts & RCANFD_RFFDSTS_RFFDF)
   cf->len = can_dlc2len(RCANFD_RFPTR_RFDLC(dlc));
  else
   cf->len = get_can_dlc(RCANFD_RFPTR_RFDLC(dlc));

  if (sts & RCANFD_RFFDSTS_RFESI) {
   cf->flags |= CANFD_ESI;
   netdev_dbg(priv->ndev, "ESI Error\n");
  }

  if (!(sts & RCANFD_RFFDSTS_RFFDF) && (id & RCANFD_RFID_RFRTR)) {
   cf->can_id |= CAN_RTR_FLAG;
  } else {
   if (sts & RCANFD_RFFDSTS_RFBRS)
    cf->flags |= CANFD_BRS;

   rcar_canfd_get_data(priv, cf, RCANFD_F_RFDF(ridx, 0));
  }
 } else {
  cf->len = get_can_dlc(RCANFD_RFPTR_RFDLC(dlc));
  if (id & RCANFD_RFID_RFRTR)
   cf->can_id |= CAN_RTR_FLAG;
  else
   rcar_canfd_get_data(priv, cf, RCANFD_C_RFDF(ridx, 0));
 }




 rcar_canfd_write(priv->base, RCANFD_RFPCTR(ridx), 0xff);

 can_led_event(priv->ndev, CAN_LED_EVENT_RX);

 stats->rx_bytes += cf->len;
 stats->rx_packets++;
 netif_receive_skb(skb);
}
