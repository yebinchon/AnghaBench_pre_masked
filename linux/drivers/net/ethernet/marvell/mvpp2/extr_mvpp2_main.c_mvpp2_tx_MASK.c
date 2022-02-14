
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct sk_buff {scalar_t__ len; int data; } ;
struct netdev_queue {int dummy; } ;
struct TYPE_6__ {int tx_dropped; } ;
struct TYPE_5__ {int parent; } ;
struct net_device {TYPE_2__ stats; TYPE_1__ dev; } ;
struct mvpp2_txq_pcpu {int reserved_num; int count; int stop_threshold; } ;
struct mvpp2_tx_queue {int count; int done_pkts_coal; int id; int pcpu; } ;
struct mvpp2_tx_desc {int dummy; } ;
struct mvpp2_port_pcpu {int timer_scheduled; int tx_done_timer; } ;
struct mvpp2_port {int * tx_lock; TYPE_4__* priv; int pcpu; int has_tx_irqs; int stats; struct mvpp2_tx_queue** txqs; } ;
struct mvpp2_pcpu_stats {int syncp; int tx_bytes; int tx_packets; } ;
typedef int netdev_tx_t ;
typedef int dma_addr_t ;
struct TYPE_8__ {int lock_map; struct mvpp2_tx_queue* aggr_txqs; } ;
struct TYPE_7__ {int nr_frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (struct mvpp2_port*,struct mvpp2_tx_queue*,int) ;
 int FUNC_5 (struct mvpp2_port*,int) ;
 unsigned int FUNC_6 (TYPE_4__*,int ) ;
 int FUNC_7 (struct mvpp2_port*,struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct mvpp2_port*,struct sk_buff*,struct mvpp2_tx_queue*,struct mvpp2_tx_queue*) ;
 int FUNC_9 (struct sk_buff*,struct net_device*,struct mvpp2_tx_queue*,struct mvpp2_tx_queue*,struct mvpp2_txq_pcpu*) ;
 int FUNC_10 (struct mvpp2_port*,struct mvpp2_tx_desc*,int) ;
 int FUNC_11 (struct mvpp2_port*,struct mvpp2_tx_desc*,int ) ;
 int FUNC_12 (struct mvpp2_port*,struct mvpp2_tx_desc*,int ) ;
 int FUNC_13 (struct mvpp2_port*,struct mvpp2_tx_desc*,int ) ;
 int FUNC_14 (struct mvpp2_tx_queue*) ;
 int FUNC_15 (struct mvpp2_port*,struct mvpp2_tx_queue*,struct mvpp2_txq_pcpu*) ;
 int FUNC_16 (struct mvpp2_port*,struct mvpp2_txq_pcpu*,struct sk_buff*,struct mvpp2_tx_desc*) ;
 struct mvpp2_tx_desc* FUNC_17 (struct mvpp2_tx_queue*) ;
 scalar_t__ FUNC_18 (struct mvpp2_port*,struct mvpp2_tx_queue*,struct mvpp2_txq_pcpu*,int) ;
 struct netdev_queue* FUNC_19 (struct net_device*,size_t) ;
 struct mvpp2_port* FUNC_20 (struct net_device*) ;
 int FUNC_21 (struct netdev_queue*) ;
 void* FUNC_22 (int ,unsigned int) ;
 size_t FUNC_23 (struct sk_buff*) ;
 int FUNC_24 (struct sk_buff*) ;
 scalar_t__ FUNC_25 (struct sk_buff*) ;
 TYPE_3__* FUNC_26 (struct sk_buff*) ;
 int FUNC_27 () ;
 int FUNC_28 (int *,unsigned long) ;
 int FUNC_29 (int *,unsigned long) ;
 scalar_t__ FUNC_30 (unsigned int,int *) ;
 int FUNC_31 (struct mvpp2_port*,struct mvpp2_tx_queue*,struct mvpp2_tx_desc*) ;
 int FUNC_32 (int *) ;
 int FUNC_33 (int *) ;
 scalar_t__ FUNC_34 (int ) ;
 int FUNC_35 () ;

__attribute__((used)) static netdev_tx_t FUNC_36(struct sk_buff *VAR_7, struct net_device *VAR_8)
{
 struct mvpp2_port *VAR_9 = FUNC_20(VAR_8);
 struct mvpp2_tx_queue *VAR_10, *VAR_11;
 struct mvpp2_txq_pcpu *VAR_12;
 struct mvpp2_tx_desc *VAR_13;
 dma_addr_t VAR_14;
 unsigned long VAR_15 = 0;
 unsigned int VAR_16;
 int VAR_17 = 0;
 u16 VAR_18;
 u32 VAR_19;

 VAR_16 = FUNC_6(VAR_9->priv, FUNC_27());

 VAR_18 = FUNC_23(VAR_7);
 VAR_10 = VAR_9->txqs[VAR_18];
 VAR_12 = FUNC_22(VAR_10->pcpu, VAR_16);
 VAR_11 = &VAR_9->priv->aggr_txqs[VAR_16];

 if (FUNC_30(VAR_16, &VAR_9->priv->lock_map))
  FUNC_28(&VAR_9->tx_lock[VAR_16], VAR_15);

 if (FUNC_25(VAR_7)) {
  VAR_17 = FUNC_9(VAR_7, VAR_8, VAR_10, VAR_11, VAR_12);
  goto out;
 }
 VAR_17 = FUNC_26(VAR_7)->nr_frags + 1;


 if (FUNC_4(VAR_9, VAR_11, VAR_17) ||
     FUNC_18(VAR_9, VAR_10, VAR_12, VAR_17)) {
  VAR_17 = 0;
  goto out;
 }


 VAR_13 = FUNC_17(VAR_11);
 FUNC_13(VAR_9, VAR_13, VAR_10->id);
 FUNC_12(VAR_9, VAR_13, FUNC_24(VAR_7));

 VAR_14 = FUNC_1(VAR_8->dev.parent, VAR_7->data,
          FUNC_24(VAR_7), VAR_0);
 if (FUNC_34(FUNC_2(VAR_8->dev.parent, VAR_14))) {
  FUNC_14(VAR_10);
  VAR_17 = 0;
  goto out;
 }

 FUNC_11(VAR_9, VAR_13, VAR_14);

 VAR_19 = FUNC_7(VAR_9, VAR_7);

 if (VAR_17 == 1) {

  VAR_19 |= VAR_3 | VAR_4;
  FUNC_10(VAR_9, VAR_13, VAR_19);
  FUNC_16(VAR_9, VAR_12, VAR_7, VAR_13);
 } else {

  VAR_19 |= VAR_3 | VAR_5;
  FUNC_10(VAR_9, VAR_13, VAR_19);
  FUNC_16(VAR_9, VAR_12, ((void*)0), VAR_13);


  if (FUNC_8(VAR_9, VAR_7, VAR_11, VAR_10)) {
   FUNC_31(VAR_9, VAR_10, VAR_13);
   VAR_17 = 0;
  }
 }

out:
 if (VAR_17 > 0) {
  struct mvpp2_pcpu_stats *VAR_20 = FUNC_22(VAR_9->stats, VAR_16);
  struct netdev_queue *VAR_21 = FUNC_19(VAR_8, VAR_18);

  VAR_12->reserved_num -= VAR_17;
  VAR_12->count += VAR_17;
  VAR_11->count += VAR_17;


  FUNC_35();
  FUNC_5(VAR_9, VAR_17);

  if (VAR_12->count >= VAR_12->stop_threshold)
   FUNC_21(VAR_21);

  FUNC_32(&VAR_20->syncp);
  VAR_20->tx_packets++;
  VAR_20->tx_bytes += VAR_7->len;
  FUNC_33(&VAR_20->syncp);
 } else {
  VAR_8->stats.tx_dropped++;
  FUNC_0(VAR_7);
 }


 if (!VAR_9->has_tx_irqs && VAR_12->count >= VAR_10->done_pkts_coal)
  FUNC_15(VAR_9, VAR_10, VAR_12);


 if (!VAR_9->has_tx_irqs && VAR_12->count <= VAR_17 &&
     VAR_12->count > 0) {
  struct mvpp2_port_pcpu *VAR_22 = FUNC_22(VAR_9->pcpu, VAR_16);

  if (!VAR_22->timer_scheduled) {
   VAR_22->timer_scheduled = 1;
   FUNC_3(&VAR_22->tx_done_timer,
          VAR_2,
          VAR_1);
  }
 }

 if (FUNC_30(VAR_16, &VAR_9->priv->lock_map))
  FUNC_29(&VAR_9->tx_lock[VAR_16], VAR_15);

 return VAR_6;
}
