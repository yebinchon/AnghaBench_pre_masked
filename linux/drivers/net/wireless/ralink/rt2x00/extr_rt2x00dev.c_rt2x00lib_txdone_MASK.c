
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct txdone_entry_desc {int flags; } ;
struct skb_frame_desc {int flags; } ;
struct TYPE_5__ {int tx_success; int tx_failed; } ;
struct TYPE_6__ {TYPE_2__ qual; } ;
struct rt2x00_dev {int hw; TYPE_3__ link; int extra_tx_headroom; } ;
struct queue_entry {int skb; TYPE_1__* queue; } ;
struct ieee80211_tx_info {int dummy; } ;
struct TYPE_4__ {struct rt2x00_dev* rt2x00dev; } ;


 int VAR_0 ;
 struct ieee80211_tx_info* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 struct skb_frame_desc* FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (struct rt2x00_dev*,int ) ;
 scalar_t__ FUNC_7 (struct rt2x00_dev*) ;
 int FUNC_8 (int ,unsigned int) ;
 int FUNC_9 (struct rt2x00_dev*,int ,struct queue_entry*) ;
 int FUNC_10 (struct rt2x00_dev*,struct queue_entry*) ;
 int FUNC_11 (struct rt2x00_dev*,struct ieee80211_tx_info*,struct skb_frame_desc*,struct txdone_entry_desc*,int) ;
 scalar_t__ FUNC_12 (struct queue_entry*) ;
 int FUNC_13 (int ,unsigned int) ;
 int FUNC_14 (struct queue_entry*) ;
 int FUNC_15 (int ,int ) ;
 scalar_t__ FUNC_16 (int ,int *) ;

void FUNC_17(struct queue_entry *VAR_7,
        struct txdone_entry_desc *VAR_8)
{
 struct rt2x00_dev *VAR_9 = VAR_7->queue->rt2x00dev;
 struct ieee80211_tx_info *VAR_10 = FUNC_0(VAR_7->skb);
 struct skb_frame_desc *VAR_11 = FUNC_2(VAR_7->skb);
 u8 VAR_12 = VAR_11->flags;
 unsigned int VAR_13;
 bool VAR_14;




 FUNC_14(VAR_7);




 FUNC_15(VAR_7->skb, VAR_9->extra_tx_headroom);




 VAR_11->flags &= ~VAR_3;




 VAR_13 = FUNC_3(VAR_7->skb);




 if (FUNC_6(VAR_9, VAR_1))
  FUNC_13(VAR_7->skb, VAR_13);







 if (FUNC_7(VAR_9))
  FUNC_8(VAR_7->skb, VAR_13);





 FUNC_9(VAR_9, VAR_0, VAR_7);






 VAR_14 =
     FUNC_12(VAR_7) ||
     FUNC_16(VAR_5, &VAR_8->flags) ||
     FUNC_16(VAR_6, &VAR_8->flags);




 VAR_9->link.qual.tx_success += VAR_14;
 VAR_9->link.qual.tx_failed += !VAR_14;

 FUNC_11(VAR_9, VAR_10, VAR_11, VAR_8, VAR_14);







 if (!(VAR_12 & VAR_4)) {
  if (FUNC_6(VAR_9, VAR_2))
   FUNC_4(VAR_9->hw, VAR_7->skb);
  else
   FUNC_5(VAR_9->hw, VAR_7->skb);
 } else {
  FUNC_1(VAR_7->skb);
 }

 FUNC_10(VAR_9, VAR_7);
}
