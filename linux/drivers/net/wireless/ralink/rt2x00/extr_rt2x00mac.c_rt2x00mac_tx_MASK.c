
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct rt2x00_dev {TYPE_2__* ops; int flags; } ;
struct TYPE_8__ {TYPE_3__* rates; } ;
struct ieee80211_tx_info {int flags; TYPE_4__ control; } ;
struct ieee80211_tx_control {int sta; } ;
struct ieee80211_hw {struct rt2x00_dev* priv; } ;
struct data_queue {int tx_lock; } ;
typedef enum data_queue_qid { ____Placeholder_data_queue_qid } data_queue_qid ;
struct TYPE_7__ {int flags; } ;
struct TYPE_6__ {TYPE_1__* hw; } ;
struct TYPE_5__ {int set_rts_threshold; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct ieee80211_hw*,struct sk_buff*) ;
 int FUNC_2 (struct rt2x00_dev*,char*,int,int ) ;
 scalar_t__ FUNC_3 (struct rt2x00_dev*,int ) ;
 scalar_t__ FUNC_4 (struct rt2x00_dev*,struct data_queue*,struct sk_buff*) ;
 int FUNC_5 (struct data_queue*) ;
 struct data_queue* FUNC_6 (struct rt2x00_dev*,int) ;
 int FUNC_7 (struct data_queue*) ;
 scalar_t__ FUNC_8 (struct data_queue*) ;
 int FUNC_9 (struct data_queue*,struct sk_buff*,int ,int) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int *) ;
 scalar_t__ FUNC_14 (int) ;

void FUNC_15(struct ieee80211_hw *VAR_7,
    struct ieee80211_tx_control *VAR_8,
    struct sk_buff *VAR_9)
{
 struct rt2x00_dev *VAR_10 = VAR_7->priv;
 struct ieee80211_tx_info *VAR_11 = FUNC_0(VAR_9);
 enum data_queue_qid VAR_12 = FUNC_10(VAR_9);
 struct data_queue *VAR_13 = ((void*)0);







 if (!FUNC_13(VAR_0, &VAR_10->flags))
  goto exit_free_skb;




 if (VAR_11->flags & VAR_2 &&
     FUNC_3(VAR_10, VAR_6))
  VAR_12 = VAR_5;

 VAR_13 = FUNC_6(VAR_10, VAR_12);
 if (FUNC_14(!VAR_13)) {
  FUNC_2(VAR_10,
      "Attempt to send packet over invalid queue %d\n"
      "Please file bug report to %s\n", VAR_12, VAR_1);
  goto exit_free_skb;
 }
 if (!VAR_10->ops->hw->set_rts_threshold &&
     (VAR_11->control.rates[0].flags & (VAR_4 |
      VAR_3))) {
  if (FUNC_5(VAR_13) <= 1) {




   FUNC_11(&VAR_13->tx_lock);
   if (FUNC_8(VAR_13))
    FUNC_7(VAR_13);
   FUNC_12(&VAR_13->tx_lock);

   goto exit_free_skb;
  }

  if (FUNC_4(VAR_10, VAR_13, VAR_9))
   goto exit_free_skb;
 }

 if (FUNC_14(FUNC_9(VAR_13, VAR_9, VAR_8->sta, 0)))
  goto exit_free_skb;

 return;

 exit_free_skb:
 FUNC_1(VAR_7, VAR_9);
}
