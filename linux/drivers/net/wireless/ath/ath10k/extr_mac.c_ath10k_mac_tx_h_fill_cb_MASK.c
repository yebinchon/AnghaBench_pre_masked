
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_txq {int dummy; } ;
struct TYPE_2__ {int hw_key; } ;
struct ieee80211_tx_info {TYPE_1__ control; } ;
struct ieee80211_hdr {int frame_control; } ;
struct ath10k_skb_cb {int airtime_est; struct ieee80211_txq* txq; struct ieee80211_vif* vif; int flags; } ;
struct ath10k {int dummy; } ;


 struct ath10k_skb_cb* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ieee80211_tx_info* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct ieee80211_vif*,struct sk_buff*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct ath10k *VAR_4,
        struct ieee80211_vif *VAR_5,
        struct ieee80211_txq *VAR_6,
        struct sk_buff *VAR_7, u16 VAR_8)
{
 struct ieee80211_hdr *VAR_9 = (void *)VAR_7->data;
 struct ath10k_skb_cb *VAR_10 = FUNC_0(VAR_7);
 const struct ieee80211_tx_info *VAR_11 = FUNC_1(VAR_7);
 bool VAR_12 = FUNC_4(VAR_9->frame_control) ||
   FUNC_5(VAR_9->frame_control);

 VAR_10->flags = 0;
 if (!FUNC_2(VAR_5, VAR_7))
  VAR_10->flags |= VAR_1;

 if (FUNC_6(VAR_9->frame_control))
  VAR_10->flags |= VAR_0;

 if (FUNC_5(VAR_9->frame_control))
  VAR_10->flags |= VAR_2;





 if (VAR_12 && FUNC_3(VAR_9->frame_control) &&
     !VAR_11->control.hw_key) {
  VAR_10->flags |= VAR_1;
  VAR_10->flags |= VAR_3;
 }

 VAR_10->vif = VAR_5;
 VAR_10->txq = VAR_6;
 VAR_10->airtime_est = VAR_8;
}
