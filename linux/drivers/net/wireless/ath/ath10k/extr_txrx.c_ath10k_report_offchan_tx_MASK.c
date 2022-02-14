
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ieee80211_tx_info {int flags; } ;
struct ath10k {int data_lock; struct sk_buff* offchan_tx_skb; int offchan_tx_completed; } ;


 int VAR_0 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (struct ath10k*,int ,char*,struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct ath10k*) ;
 int FUNC_3 (struct ath10k*,char*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct ath10k *VAR_2, struct sk_buff *VAR_3)
{
 struct ieee80211_tx_info *VAR_4 = FUNC_0(VAR_3);

 if (FUNC_5(!(VAR_4->flags & VAR_1)))
  return;

 if (FUNC_2(VAR_2))
  return;






 FUNC_6(&VAR_2->data_lock);
 if (VAR_2->offchan_tx_skb != VAR_3) {
  FUNC_3(VAR_2, "completed old offchannel frame\n");
  goto out;
 }

 FUNC_4(&VAR_2->offchan_tx_completed);
 VAR_2->offchan_tx_skb = ((void*)0);

 FUNC_1(VAR_2, VAR_0, "completed offchannel skb %pK\n", VAR_3);
out:
 FUNC_7(&VAR_2->data_lock);
}
