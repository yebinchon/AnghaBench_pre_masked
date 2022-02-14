
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct pch_gbe_tx_ring {unsigned int next_to_clean; int count; struct pch_gbe_buffer* buffer_info; int next_to_use; } ;
struct pch_gbe_tx_desc {int gbec_status; int dma_status; } ;
struct pch_gbe_buffer {int mapped; struct sk_buff* skb; int length; int dma; } ;
struct TYPE_4__ {int tx_restart_count; int tx_bytes; int tx_packets; int collisions; int tx_aborted_errors; int tx_carrier_errors; } ;
struct pch_gbe_adapter {int netdev; TYPE_2__ stats; TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pch_gbe_tx_ring*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct pch_gbe_tx_desc* FUNC_1 (struct pch_gbe_tx_ring,unsigned int) ;
 int VAR_8 ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static bool
FUNC_11(struct pch_gbe_adapter *VAR_9,
   struct pch_gbe_tx_ring *VAR_10)
{
 struct pch_gbe_tx_desc *VAR_11;
 struct pch_gbe_buffer *VAR_12;
 struct sk_buff *VAR_13;
 unsigned int VAR_14;
 unsigned int VAR_15 = 0;
 bool VAR_16 = 0;
 int VAR_17, VAR_18;

 FUNC_3(VAR_9->netdev, "next_to_clean : %d\n",
     VAR_10->next_to_clean);

 VAR_14 = VAR_10->next_to_clean;
 VAR_11 = FUNC_1(*VAR_10, VAR_14);
 FUNC_3(VAR_9->netdev, "gbec_status:0x%04x  dma_status:0x%04x\n",
     VAR_11->gbec_status, VAR_11->dma_status);

 VAR_17 = FUNC_0(VAR_10);
 VAR_18 = VAR_10->count - VAR_8;
 if ((VAR_11->gbec_status == VAR_1) && (VAR_17 < VAR_18))
 {
  int VAR_19, VAR_20;
  if (VAR_17 < 8) {
   FUNC_3(VAR_9->netdev,
       "clean_tx: transmit queue warning (%x,%x) unused=%d\n",
       VAR_10->next_to_clean, VAR_10->next_to_use,
       VAR_17);
  }


  VAR_20 = VAR_14;
  for (VAR_19 = 0; VAR_19 < VAR_8; VAR_19++)
  {
   VAR_11 = FUNC_1(*VAR_10, VAR_20);
   if (VAR_11->gbec_status != VAR_1) break;
   if (++VAR_20 >= VAR_10->count) VAR_20 = 0;
  }
  if (VAR_19 < VAR_8) {
   FUNC_3(VAR_9->netdev,
       "clean_tx: unused=%d loops=%d found tx_desc[%x,%x:%x].gbec_status=%04x\n",
       VAR_17, VAR_19, VAR_14, VAR_20, VAR_10->next_to_use,
       VAR_11->gbec_status);
   VAR_14 = VAR_20;
  }
 }

 while ((VAR_11->gbec_status & VAR_1) == 0x0000) {
  FUNC_3(VAR_9->netdev, "gbec_status:0x%04x\n",
      VAR_11->gbec_status);
  VAR_12 = &VAR_10->buffer_info[VAR_14];
  VAR_13 = VAR_12->skb;
  VAR_16 = 1;

  if ((VAR_11->gbec_status & VAR_2)) {
   VAR_9->stats.tx_aborted_errors++;
   FUNC_4(VAR_9->netdev, "Transfer Abort Error\n");
  } else if ((VAR_11->gbec_status & VAR_4)
     ) {
   VAR_9->stats.tx_carrier_errors++;
   FUNC_4(VAR_9->netdev,
       "Transfer Carrier Sense Error\n");
  } else if ((VAR_11->gbec_status & VAR_5)
     ) {
   VAR_9->stats.tx_aborted_errors++;
   FUNC_4(VAR_9->netdev,
       "Transfer Collision Abort Error\n");
  } else if ((VAR_11->gbec_status &
       (VAR_7 |
        VAR_6))) {
   VAR_9->stats.collisions++;
   VAR_9->stats.tx_packets++;
   VAR_9->stats.tx_bytes += VAR_13->len;
   FUNC_3(VAR_9->netdev, "Transfer Collision\n");
  } else if ((VAR_11->gbec_status & VAR_3)
     ) {
   VAR_9->stats.tx_packets++;
   VAR_9->stats.tx_bytes += VAR_13->len;
  }
  if (VAR_12->mapped) {
   FUNC_3(VAR_9->netdev,
       "unmap buffer_info->dma : %d\n", VAR_14);
   FUNC_2(&VAR_9->pdev->dev, VAR_12->dma,
      VAR_12->length, VAR_0);
   VAR_12->mapped = 0;
  }
  if (VAR_12->skb) {
   FUNC_3(VAR_9->netdev,
       "trim buffer_info->skb : %d\n", VAR_14);
   FUNC_9(VAR_12->skb, 0);
  }
  VAR_11->gbec_status = VAR_1;
  if (FUNC_10(++VAR_14 == VAR_10->count))
   VAR_14 = 0;
  VAR_11 = FUNC_1(*VAR_10, VAR_14);


  if (VAR_15++ == VAR_8) {
   VAR_16 = 0;
   break;
  }
 }
 FUNC_3(VAR_9->netdev,
     "called pch_gbe_unmap_and_free_tx_resource() %d count\n",
     VAR_15);
 if (VAR_15 > 0) {

  FUNC_6(VAR_9->netdev);
  if (FUNC_10(VAR_16 && (FUNC_5(VAR_9->netdev))))
  {
   FUNC_8(VAR_9->netdev);
   VAR_9->stats.tx_restart_count++;
   FUNC_3(VAR_9->netdev, "Tx wake queue\n");
  }

  VAR_10->next_to_clean = VAR_14;

  FUNC_3(VAR_9->netdev, "next_to_clean : %d\n",
      VAR_10->next_to_clean);
  FUNC_7(VAR_9->netdev);
 }
 return VAR_16;
}
