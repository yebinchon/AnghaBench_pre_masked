
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {int len; } ;
struct igb_tx_buffer {int gso_segs; int tx_flags; struct sk_buff* skb; int protocol; int bytecount; } ;
struct igb_ring {size_t next_to_use; int netdev; struct igb_tx_buffer* tx_buffer_info; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct TYPE_7__ {TYPE_2__ mac; } ;
struct TYPE_5__ {scalar_t__ tx_type; } ;
struct igb_adapter {int state; int ptp_tx_work; TYPE_3__ hw; struct sk_buff* ptp_tx_skb; int tx_hwtstamp_skipped; int ptp_tx_start; TYPE_1__ tstamp_config; } ;
typedef int netdev_tx_t ;
typedef int __be16 ;
struct TYPE_8__ {unsigned short nr_frags; int tx_flags; int * frags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_4 (struct igb_ring*,scalar_t__) ;
 int FUNC_5 (struct igb_ring*,struct igb_tx_buffer*,int *) ;
 int FUNC_6 (struct igb_ring*,struct igb_tx_buffer*) ;
 scalar_t__ FUNC_7 (struct igb_ring*,struct igb_tx_buffer*,int ) ;
 int VAR_10 ;
 struct igb_adapter* FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct sk_buff* FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;
 TYPE_4__* FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct sk_buff*) ;
 scalar_t__ FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (int ,int *) ;
 scalar_t__ FUNC_17 (int) ;
 int FUNC_18 (struct sk_buff*) ;

netdev_tx_t FUNC_19(struct sk_buff *VAR_11,
    struct igb_ring *VAR_12)
{
 struct igb_tx_buffer *VAR_13;
 int VAR_14;
 u32 VAR_15 = 0;
 unsigned short VAR_16;
 u16 VAR_17 = FUNC_0(FUNC_12(VAR_11));
 __be16 VAR_18 = FUNC_18(VAR_11);
 u8 VAR_19 = 0;







 for (VAR_16 = 0; VAR_16 < FUNC_13(VAR_11)->nr_frags; VAR_16++)
  VAR_17 += FUNC_0(FUNC_10(
      &FUNC_13(VAR_11)->frags[VAR_16]));

 if (FUNC_4(VAR_12, VAR_17 + 3)) {

  return VAR_4;
 }


 VAR_13 = &VAR_12->tx_buffer_info[VAR_12->next_to_use];
 VAR_13->skb = VAR_11;
 VAR_13->bytecount = VAR_11->len;
 VAR_13->gso_segs = 1;

 if (FUNC_17(FUNC_13(VAR_11)->tx_flags & VAR_6)) {
  struct igb_adapter *VAR_20 = FUNC_8(VAR_12->netdev);

  if (VAR_20->tstamp_config.tx_type == VAR_0 &&
      !FUNC_16(VAR_8,
        &VAR_20->state)) {
   FUNC_13(VAR_11)->tx_flags |= VAR_7;
   VAR_15 |= VAR_1;

   VAR_20->ptp_tx_skb = FUNC_11(VAR_11);
   VAR_20->ptp_tx_start = VAR_10;
   if (VAR_20->hw.mac.type == VAR_9)
    FUNC_9(&VAR_20->ptp_tx_work);
  } else {
   VAR_20->tx_hwtstamp_skipped++;
  }
 }

 if (FUNC_15(VAR_11)) {
  VAR_15 |= VAR_2;
  VAR_15 |= (FUNC_14(VAR_11) << VAR_3);
 }


 VAR_13->tx_flags = VAR_15;
 VAR_13->protocol = VAR_18;

 VAR_14 = FUNC_5(VAR_12, VAR_13, &VAR_19);
 if (VAR_14 < 0)
  goto out_drop;
 else if (!VAR_14)
  FUNC_6(VAR_12, VAR_13);

 if (FUNC_7(VAR_12, VAR_13, VAR_19))
  goto cleanup_tx_tstamp;

 return VAR_5;

out_drop:
 FUNC_3(VAR_13->skb);
 VAR_13->skb = ((void*)0);
cleanup_tx_tstamp:
 if (FUNC_17(VAR_15 & VAR_1)) {
  struct igb_adapter *VAR_21 = FUNC_8(VAR_12->netdev);

  FUNC_3(VAR_21->ptp_tx_skb);
  VAR_21->ptp_tx_skb = ((void*)0);
  if (VAR_21->hw.mac.type == VAR_9)
   FUNC_1(&VAR_21->ptp_tx_work);
  FUNC_2(VAR_8, &VAR_21->state);
 }

 return VAR_5;
}
