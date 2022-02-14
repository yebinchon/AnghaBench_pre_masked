
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_txq {int dummy; } ;
struct TYPE_2__ {struct ieee80211_vif* vif; } ;
struct ieee80211_tx_info {TYPE_1__ control; } ;
struct ieee80211_tx_control {struct ieee80211_sta* sta; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hw {struct ath10k* priv; } ;
struct ieee80211_hdr {int frame_control; } ;
struct ath10k_htt {int tx_lock; } ;
struct ath10k {struct ath10k_htt htt; int hw; } ;
typedef enum ath10k_mac_tx_path { ____Placeholder_ath10k_mac_tx_path } ath10k_mac_tx_path ;
typedef enum ath10k_hw_txrx_mode { ____Placeholder_ath10k_hw_txrx_mode } ath10k_hw_txrx_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct ath10k*,int ,char*,int) ;
 int FUNC_2 (struct ath10k_htt*) ;
 int FUNC_3 (struct ath10k_htt*) ;
 int FUNC_4 (struct ath10k_htt*) ;
 int FUNC_5 (struct ath10k_htt*,int,int) ;
 int FUNC_6 (struct ath10k*,struct ieee80211_vif*,int,int,struct sk_buff*) ;
 int FUNC_7 (struct ath10k*,struct ieee80211_vif*,struct ieee80211_txq*,struct sk_buff*,int ) ;
 int FUNC_8 (struct ath10k*,struct ieee80211_vif*,struct ieee80211_sta*,struct sk_buff*) ;
 int FUNC_9 (struct ath10k*,struct sk_buff*,int) ;
 int FUNC_10 (struct ath10k*,struct ieee80211_txq*,struct sk_buff*) ;
 int FUNC_11 (struct ath10k*,char*,int) ;
 int FUNC_12 (int ,struct sk_buff*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static void FUNC_16(struct ieee80211_hw *VAR_3,
        struct ieee80211_tx_control *VAR_4,
        struct sk_buff *VAR_5)
{
 struct ath10k *VAR_6 = VAR_3->priv;
 struct ath10k_htt *VAR_7 = &VAR_6->htt;
 struct ieee80211_tx_info *VAR_8 = FUNC_0(VAR_5);
 struct ieee80211_vif *VAR_9 = VAR_8->control.vif;
 struct ieee80211_sta *VAR_10 = VAR_4->sta;
 struct ieee80211_txq *VAR_11 = ((void*)0);
 struct ieee80211_hdr *VAR_12 = (void *)VAR_5->data;
 enum ath10k_hw_txrx_mode VAR_13;
 enum ath10k_mac_tx_path VAR_14;
 bool VAR_15;
 bool VAR_16;
 bool VAR_17;
 int VAR_18;
 u16 VAR_19;

 VAR_19 = FUNC_10(VAR_6, VAR_11, VAR_5);
 FUNC_7(VAR_6, VAR_9, VAR_11, VAR_5, VAR_19);

 VAR_13 = FUNC_8(VAR_6, VAR_9, VAR_10, VAR_5);
 VAR_14 = FUNC_9(VAR_6, VAR_5, VAR_13);
 VAR_15 = (VAR_14 == VAR_1 ||
    VAR_14 == VAR_2);
 VAR_16 = (VAR_14 == VAR_2);

 if (VAR_15) {
  FUNC_14(&VAR_6->htt.tx_lock);
  VAR_17 = FUNC_13(VAR_12->frame_control);

  VAR_18 = FUNC_3(VAR_7);
  if (VAR_18) {
   FUNC_11(VAR_6, "failed to increase tx pending count: %d, dropping\n",
        VAR_18);
   FUNC_15(&VAR_6->htt.tx_lock);
   FUNC_12(VAR_6->hw, VAR_5);
   return;
  }

  VAR_18 = FUNC_5(VAR_7, VAR_16, VAR_17);
  if (VAR_18) {
   FUNC_1(VAR_6, VAR_0, "failed to increase tx mgmt pending count: %d, dropping\n",
       VAR_18);
   FUNC_2(VAR_7);
   FUNC_15(&VAR_6->htt.tx_lock);
   FUNC_12(VAR_6->hw, VAR_5);
   return;
  }
  FUNC_15(&VAR_6->htt.tx_lock);
 }

 VAR_18 = FUNC_6(VAR_6, VAR_9, VAR_13, VAR_14, VAR_5);
 if (VAR_18) {
  FUNC_11(VAR_6, "failed to transmit frame: %d\n", VAR_18);
  if (VAR_15) {
   FUNC_14(&VAR_6->htt.tx_lock);
   FUNC_2(VAR_7);
   if (VAR_16)
    FUNC_4(VAR_7);
   FUNC_15(&VAR_6->htt.tx_lock);
  }
  return;
 }
}
