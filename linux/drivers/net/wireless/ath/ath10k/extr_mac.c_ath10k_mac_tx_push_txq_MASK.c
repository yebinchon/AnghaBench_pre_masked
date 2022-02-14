
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {size_t len; scalar_t__ data; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_txq {struct ieee80211_sta* sta; struct ieee80211_vif* vif; scalar_t__ drv_priv; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hw {struct ath10k* priv; } ;
struct ieee80211_hdr {int frame_control; } ;
struct ath10k_txq {int num_fw_queued; } ;
struct ath10k_htt {int tx_lock; } ;
struct ath10k {struct ath10k_htt htt; } ;
typedef enum ath10k_mac_tx_path { ____Placeholder_ath10k_mac_tx_path } ath10k_mac_tx_path ;
typedef enum ath10k_hw_txrx_mode { ____Placeholder_ath10k_hw_txrx_mode } ath10k_hw_txrx_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath10k_htt*) ;
 int FUNC_1 (struct ath10k_htt*) ;
 int FUNC_2 (struct ath10k_htt*) ;
 int FUNC_3 (struct ath10k_htt*,int,int) ;
 int FUNC_4 (struct ath10k*,struct ieee80211_vif*,int,int,struct sk_buff*) ;
 int FUNC_5 (struct ath10k*,struct ieee80211_vif*,struct ieee80211_txq*,struct sk_buff*,int ) ;
 int FUNC_6 (struct ath10k*,struct ieee80211_vif*,struct ieee80211_sta*,struct sk_buff*) ;
 int FUNC_7 (struct ath10k*,struct sk_buff*,int) ;
 int FUNC_8 (struct ath10k*,struct ieee80211_txq*,struct sk_buff*) ;
 int FUNC_9 (struct ath10k*,char*,int) ;
 int FUNC_10 (int ) ;
 struct sk_buff* FUNC_11 (struct ieee80211_hw*,struct ieee80211_txq*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int) ;

int FUNC_15(struct ieee80211_hw *VAR_2,
      struct ieee80211_txq *VAR_3)
{
 struct ath10k *VAR_4 = VAR_2->priv;
 struct ath10k_htt *VAR_5 = &VAR_4->htt;
 struct ath10k_txq *VAR_6 = (void *)VAR_3->drv_priv;
 struct ieee80211_vif *VAR_7 = VAR_3->vif;
 struct ieee80211_sta *VAR_8 = VAR_3->sta;
 enum ath10k_hw_txrx_mode VAR_9;
 enum ath10k_mac_tx_path VAR_10;
 struct sk_buff *VAR_11;
 struct ieee80211_hdr *VAR_12;
 size_t VAR_13;
 bool VAR_14, VAR_15;
 int VAR_16;
 u16 VAR_17;

 FUNC_12(&VAR_4->htt.tx_lock);
 VAR_16 = FUNC_1(VAR_5);
 FUNC_13(&VAR_4->htt.tx_lock);

 if (VAR_16)
  return VAR_16;

 VAR_11 = FUNC_11(VAR_2, VAR_3);
 if (!VAR_11) {
  FUNC_12(&VAR_4->htt.tx_lock);
  FUNC_0(VAR_5);
  FUNC_13(&VAR_4->htt.tx_lock);

  return -VAR_1;
 }

 VAR_17 = FUNC_8(VAR_4, VAR_3, VAR_11);
 FUNC_5(VAR_4, VAR_7, VAR_3, VAR_11, VAR_17);

 VAR_13 = VAR_11->len;
 VAR_9 = FUNC_6(VAR_4, VAR_7, VAR_8, VAR_11);
 VAR_10 = FUNC_7(VAR_4, VAR_11, VAR_9);
 VAR_14 = (VAR_10 == VAR_0);

 if (VAR_14) {
  VAR_12 = (struct ieee80211_hdr *)VAR_11->data;
  VAR_15 = FUNC_10(VAR_12->frame_control);

  FUNC_12(&VAR_4->htt.tx_lock);
  VAR_16 = FUNC_3(VAR_5, VAR_14, VAR_15);

  if (VAR_16) {
   FUNC_0(VAR_5);
   FUNC_13(&VAR_4->htt.tx_lock);
   return VAR_16;
  }
  FUNC_13(&VAR_4->htt.tx_lock);
 }

 VAR_16 = FUNC_4(VAR_4, VAR_7, VAR_9, VAR_10, VAR_11);
 if (FUNC_14(VAR_16)) {
  FUNC_9(VAR_4, "failed to push frame: %d\n", VAR_16);

  FUNC_12(&VAR_4->htt.tx_lock);
  FUNC_0(VAR_5);
  if (VAR_14)
   FUNC_2(VAR_5);
  FUNC_13(&VAR_4->htt.tx_lock);

  return VAR_16;
 }

 FUNC_12(&VAR_4->htt.tx_lock);
 VAR_6->num_fw_queued++;
 FUNC_13(&VAR_4->htt.tx_lock);

 return VAR_13;
}
