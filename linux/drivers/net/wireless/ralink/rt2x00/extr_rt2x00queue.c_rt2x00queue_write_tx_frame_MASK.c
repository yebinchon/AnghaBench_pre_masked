
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
struct txentry_desc {int header_length; int flags; } ;
struct skb_frame_desc {int flags; void* tx_rate_flags; void* tx_rate_idx; } ;
struct sk_buff {int dummy; } ;
struct queue_entry {int flags; struct sk_buff* skb; } ;
struct TYPE_4__ {TYPE_1__* rates; } ;
struct ieee80211_tx_info {TYPE_2__ control; } ;
struct ieee80211_sta {int dummy; } ;
struct data_queue {int tx_lock; int qid; int rt2x00dev; } ;
struct TYPE_3__ {void* flags; void* idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ,int *) ;
 struct skb_frame_desc* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct skb_frame_desc*,int ,int) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int ,char*,int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (struct sk_buff*,struct txentry_desc*) ;
 int FUNC_8 (struct sk_buff*,struct txentry_desc*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct queue_entry*) ;
 int FUNC_11 (int ,struct sk_buff*,struct txentry_desc*,struct ieee80211_sta*) ;
 int FUNC_12 (struct data_queue*) ;
 struct queue_entry* FUNC_13 (struct data_queue*,int ) ;
 int FUNC_14 (struct queue_entry*,int ) ;
 int FUNC_15 (struct sk_buff*,int ) ;
 int FUNC_16 (struct data_queue*,struct txentry_desc*) ;
 int FUNC_17 (struct data_queue*) ;
 scalar_t__ FUNC_18 (struct data_queue*) ;
 int FUNC_19 (struct queue_entry*,struct txentry_desc*) ;
 int FUNC_20 (struct queue_entry*,struct txentry_desc*) ;
 int FUNC_21 (int ,int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int ,int *) ;
 scalar_t__ FUNC_25 (int ,int *) ;
 scalar_t__ FUNC_26 (int ) ;

int FUNC_27(struct data_queue *VAR_13, struct sk_buff *VAR_14,
          struct ieee80211_sta *VAR_15, bool VAR_16)
{
 struct ieee80211_tx_info *VAR_17;
 struct queue_entry *VAR_18;
 struct txentry_desc VAR_19;
 struct skb_frame_desc *VAR_20;
 u8 VAR_21, VAR_22;
 int VAR_23 = 0;






 FUNC_11(VAR_13->rt2x00dev, VAR_14, &VAR_19, VAR_15);






 VAR_17 = FUNC_0(VAR_14);
 VAR_21 = VAR_17->control.rates[0].idx;
 VAR_22 = VAR_17->control.rates[0].flags;
 VAR_20 = FUNC_2(VAR_14);
 FUNC_3(VAR_20, 0, sizeof(*VAR_20));
 VAR_20->tx_rate_idx = VAR_21;
 VAR_20->tx_rate_flags = VAR_22;

 if (VAR_16)
  VAR_20->flags |= VAR_12;






 if (FUNC_25(VAR_6, &VAR_19.flags) &&
     !FUNC_25(VAR_7, &VAR_19.flags)) {
  if (FUNC_6(VAR_13->rt2x00dev, VAR_9))
   FUNC_7(VAR_14, &VAR_19);
  else
   FUNC_8(VAR_14, &VAR_19);
 }
 if (FUNC_6(VAR_13->rt2x00dev, VAR_11))
  FUNC_15(VAR_14, VAR_19.header_length);
 else if (FUNC_6(VAR_13->rt2x00dev, VAR_10))
  FUNC_9(VAR_14);




 FUNC_22(&VAR_13->tx_lock);

 if (FUNC_26(FUNC_12(VAR_13))) {
  FUNC_4(VAR_13->rt2x00dev, "Dropping frame due to full tx queue %d\n",
      VAR_13->qid);
  VAR_23 = -VAR_3;
  goto out;
 }

 VAR_18 = FUNC_13(VAR_13, VAR_8);

 if (FUNC_26(FUNC_24(VAR_5,
          &VAR_18->flags))) {
  FUNC_5(VAR_13->rt2x00dev,
      "Arrived at non-free entry in the non-full queue %d\n"
      "Please file bug report to %s\n",
      VAR_13->qid, VAR_0);
  VAR_23 = -VAR_1;
  goto out;
 }

 VAR_18->skb = VAR_14;






 if (FUNC_26(FUNC_19(VAR_18, &VAR_19))) {
  FUNC_1(VAR_5, &VAR_18->flags);
  VAR_18->skb = ((void*)0);
  VAR_23 = -VAR_2;
  goto out;
 }




 FUNC_10(VAR_18);

 FUNC_21(VAR_4, &VAR_18->flags);

 FUNC_14(VAR_18, VAR_8);
 FUNC_20(VAR_18, &VAR_19);
 FUNC_16(VAR_13, &VAR_19);

out:





 if (FUNC_18(VAR_13))
  FUNC_17(VAR_13);

 FUNC_23(&VAR_13->tx_lock);
 return VAR_23;
}
