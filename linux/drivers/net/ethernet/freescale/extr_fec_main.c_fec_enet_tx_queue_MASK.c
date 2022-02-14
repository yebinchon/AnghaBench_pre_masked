
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u16 ;
struct skb_shared_hwtstamps {int dummy; } ;
struct sk_buff {scalar_t__ len; } ;
struct netdev_queue {int dummy; } ;
struct TYPE_7__ {int collisions; int tx_bytes; int tx_packets; int tx_carrier_errors; int tx_fifo_errors; int tx_aborted_errors; int tx_window_errors; int tx_heartbeat_errors; int tx_errors; } ;
struct net_device {TYPE_2__ stats; } ;
struct fec_enet_private {scalar_t__ bufdesc_ex; TYPE_1__* pdev; struct fec_enet_priv_tx_q** tx_queue; } ;
struct TYPE_9__ {int reg_desc_active; struct bufdesc* cur; } ;
struct fec_enet_priv_tx_q {int tx_wake_threshold; TYPE_4__ bd; struct bufdesc* dirty_tx; struct sk_buff** tx_skbuff; } ;
struct bufdesc_ex {int ts; } ;
struct bufdesc {int cbd_bufaddr; struct bufdesc* cbd_datlen; struct bufdesc* cbd_sc; } ;
struct TYPE_8__ {int tx_flags; } ;
struct TYPE_6__ {int dev; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 int VAR_7 ;
 size_t FUNC_0 (size_t) ;
 int FUNC_1 (struct fec_enet_priv_tx_q*,int ) ;
 struct bufdesc* FUNC_2 (struct bufdesc*) ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int *,int ,unsigned short,int ) ;
 unsigned short FUNC_6 (struct bufdesc*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct bufdesc*,TYPE_4__*) ;
 int FUNC_9 (struct fec_enet_priv_tx_q*) ;
 struct bufdesc* FUNC_10 (struct bufdesc*,TYPE_4__*) ;
 int FUNC_11 (struct fec_enet_private*,int ,struct skb_shared_hwtstamps*) ;
 struct netdev_queue* FUNC_12 (struct net_device*,size_t) ;
 struct fec_enet_private* FUNC_13 (struct net_device*) ;
 scalar_t__ FUNC_14 (struct netdev_queue*) ;
 int FUNC_15 (struct netdev_queue*) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 () ;
 TYPE_3__* FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct sk_buff*,struct skb_shared_hwtstamps*) ;
 scalar_t__ FUNC_20 (int) ;
 int FUNC_21 () ;
 int FUNC_22 (int ,int ) ;

__attribute__((used)) static void
FUNC_23(struct net_device *VAR_9, u16 VAR_10)
{
 struct fec_enet_private *VAR_11;
 struct bufdesc *VAR_12;
 unsigned short VAR_13;
 struct sk_buff *VAR_14;
 struct fec_enet_priv_tx_q *VAR_15;
 struct netdev_queue *VAR_16;
 int VAR_17 = 0;
 int VAR_18;

 VAR_11 = FUNC_13(VAR_9);

 VAR_10 = FUNC_0(VAR_10);

 VAR_15 = VAR_11->tx_queue[VAR_10];

 VAR_16 = FUNC_12(VAR_9, VAR_10);
 VAR_12 = VAR_15->dirty_tx;


 VAR_12 = FUNC_10(VAR_12, &VAR_15->bd);

 while (VAR_12 != FUNC_2(VAR_15->bd.cur)) {

  FUNC_17();
  VAR_13 = FUNC_6(FUNC_2(VAR_12->cbd_sc));
  if (VAR_13 & VAR_4)
   break;

  VAR_17 = FUNC_8(VAR_12, &VAR_15->bd);

  VAR_14 = VAR_15->tx_skbuff[VAR_17];
  VAR_15->tx_skbuff[VAR_17] = ((void*)0);
  if (!FUNC_1(VAR_15, FUNC_7(VAR_12->cbd_bufaddr)))
   FUNC_5(&VAR_11->pdev->dev,
      FUNC_7(VAR_12->cbd_bufaddr),
      FUNC_6(VAR_12->cbd_datlen),
      VAR_7);
  VAR_12->cbd_bufaddr = FUNC_3(0);
  if (!VAR_14)
   goto skb_done;


  if (VAR_13 & (VAR_2 | VAR_3 |
       VAR_5 | VAR_6 |
       VAR_0)) {
   VAR_9->stats.tx_errors++;
   if (VAR_13 & VAR_2)
    VAR_9->stats.tx_heartbeat_errors++;
   if (VAR_13 & VAR_3)
    VAR_9->stats.tx_window_errors++;
   if (VAR_13 & VAR_5)
    VAR_9->stats.tx_aborted_errors++;
   if (VAR_13 & VAR_6)
    VAR_9->stats.tx_fifo_errors++;
   if (VAR_13 & VAR_0)
    VAR_9->stats.tx_carrier_errors++;
  } else {
   VAR_9->stats.tx_packets++;
   VAR_9->stats.tx_bytes += VAR_14->len;
  }

  if (FUNC_20(FUNC_18(VAR_14)->tx_flags & VAR_8) &&
   VAR_11->bufdesc_ex) {
   struct skb_shared_hwtstamps VAR_19;
   struct bufdesc_ex *VAR_20 = (struct bufdesc_ex *)VAR_12;

   FUNC_11(VAR_11, FUNC_7(VAR_20->ts), &VAR_19);
   FUNC_19(VAR_14, &VAR_19);
  }




  if (VAR_13 & VAR_1)
   VAR_9->stats.collisions++;


  FUNC_4(VAR_14);
skb_done:



  FUNC_21();
  VAR_15->dirty_tx = VAR_12;


  VAR_12 = FUNC_10(VAR_12, &VAR_15->bd);



  if (FUNC_14(VAR_16)) {
   VAR_18 = FUNC_9(VAR_15);
   if (VAR_18 >= VAR_15->tx_wake_threshold)
    FUNC_15(VAR_16);
  }
 }


 if (VAR_12 != VAR_15->bd.cur &&
     FUNC_16(VAR_15->bd.reg_desc_active) == 0)
  FUNC_22(0, VAR_15->bd.reg_desc_active);
}
