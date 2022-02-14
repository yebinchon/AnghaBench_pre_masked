
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct txdone_entry_desc {int flags; } ;
struct skb_frame_desc {int sta; int flags; } ;
struct TYPE_5__ {int tx_success; int tx_failed; } ;
struct TYPE_6__ {TYPE_2__ qual; } ;
struct rt2x00_dev {int hw; TYPE_3__ link; } ;
struct queue_entry {int skb; TYPE_1__* queue; } ;
struct ieee80211_tx_info {int dummy; } ;
struct TYPE_4__ {struct rt2x00_dev* rt2x00dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct skb_frame_desc* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,struct ieee80211_tx_info*) ;
 int FUNC_3 (struct rt2x00_dev*,int ,struct queue_entry*) ;
 int FUNC_4 (struct rt2x00_dev*,struct queue_entry*) ;
 int FUNC_5 (struct rt2x00_dev*,struct ieee80211_tx_info*,struct skb_frame_desc*,struct txdone_entry_desc*,int) ;
 scalar_t__ FUNC_6 (struct queue_entry*) ;
 int FUNC_7 (struct queue_entry*) ;
 scalar_t__ FUNC_8 (int ,int *) ;

void FUNC_9(struct queue_entry *VAR_4,
         struct txdone_entry_desc *VAR_5)
{
 struct rt2x00_dev *VAR_6 = VAR_4->queue->rt2x00dev;
 struct skb_frame_desc *VAR_7 = FUNC_1(VAR_4->skb);
 struct ieee80211_tx_info VAR_8 = {};
 bool VAR_9;




 FUNC_7(VAR_4);




 VAR_7->flags &= ~VAR_1;





 FUNC_3(VAR_6, VAR_0, VAR_4);






 VAR_9 =
     FUNC_6(VAR_4) ||
     FUNC_8(VAR_2, &VAR_5->flags);

 if (!FUNC_8(VAR_3, &VAR_5->flags)) {



  VAR_6->link.qual.tx_success += VAR_9;
  VAR_6->link.qual.tx_failed += !VAR_9;

  FUNC_5(VAR_6, &VAR_8, VAR_7, VAR_5,
      VAR_9);
  FUNC_2(VAR_6->hw, VAR_7->sta, &VAR_8);
 }

 FUNC_0(VAR_4->skb);
 FUNC_4(VAR_6, VAR_4);
}
