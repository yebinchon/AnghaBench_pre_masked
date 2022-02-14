
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_tx_info {int flags; } ;
struct ieee80211_hw {int dummy; } ;
struct ath10k_skb_cb {int flags; } ;
struct ath10k {int offchan_tx_work; int offchan_tx_queue; int dev_flags; struct ieee80211_hw* hw; } ;
typedef enum ath10k_mac_tx_path { ____Placeholder_ath10k_mac_tx_path } ath10k_mac_tx_path ;
typedef enum ath10k_hw_txrx_mode { ____Placeholder_ath10k_hw_txrx_mode } ath10k_hw_txrx_mode ;


 int VAR_0 ;
 int VAR_1 ;




 struct ath10k_skb_cb* FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct ieee80211_tx_info* FUNC_1 (struct sk_buff*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ath10k*,int ,char*,...) ;
 int FUNC_4 (struct ath10k*) ;
 int FUNC_5 (struct ath10k*,int,int,struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct ath10k*,struct ieee80211_vif*,struct sk_buff*) ;
 int FUNC_8 (struct ieee80211_hw*,struct sk_buff*) ;
 int FUNC_9 (struct ieee80211_vif*,struct sk_buff*) ;
 int FUNC_10 (struct ath10k*,char*,int) ;
 int FUNC_11 (struct ieee80211_hw*,struct sk_buff*) ;
 int FUNC_12 (struct ieee80211_hw*,int *) ;
 int FUNC_13 (int *,struct sk_buff*) ;
 int FUNC_14 (int ,int *) ;

__attribute__((used)) static int FUNC_15(struct ath10k *VAR_6,
    struct ieee80211_vif *VAR_7,
    enum ath10k_hw_txrx_mode VAR_8,
    enum ath10k_mac_tx_path VAR_9,
    struct sk_buff *VAR_10)
{
 struct ieee80211_hw *VAR_11 = VAR_6->hw;
 struct ieee80211_tx_info *VAR_12 = FUNC_1(VAR_10);
 const struct ath10k_skb_cb *VAR_13 = FUNC_0(VAR_10);
 int VAR_14;


 if (VAR_12->flags & VAR_4)
  FUNC_3(VAR_6, VAR_0, "IEEE80211_TX_CTL_NO_CCK_RATE\n");

 switch (VAR_8) {
 case 130:
 case 129:
  FUNC_8(VAR_11, VAR_10);
  FUNC_7(VAR_6, VAR_7, VAR_10);
  FUNC_9(VAR_7, VAR_10);
  break;
 case 131:
  FUNC_6(VAR_10);
  break;
 case 128:
  if (!FUNC_14(VAR_1, &VAR_6->dev_flags) &&
      !(VAR_13->flags & VAR_2)) {
   FUNC_2(1);
   FUNC_11(VAR_11, VAR_10);
   return -VAR_3;
  }
 }

 if (VAR_12->flags & VAR_5) {
  if (!FUNC_4(VAR_6)) {
   FUNC_3(VAR_6, VAR_0, "queued offchannel skb %pK\n",
       VAR_10);

   FUNC_13(&VAR_6->offchan_tx_queue, VAR_10);
   FUNC_12(VAR_11, &VAR_6->offchan_tx_work);
   return 0;
  }
 }

 VAR_14 = FUNC_5(VAR_6, VAR_8, VAR_9, VAR_10);
 if (VAR_14) {
  FUNC_10(VAR_6, "failed to submit frame: %d\n", VAR_14);
  return VAR_14;
 }

 return 0;
}
