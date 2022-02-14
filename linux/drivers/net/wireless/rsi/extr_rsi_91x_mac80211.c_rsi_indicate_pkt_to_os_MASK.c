
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rsi_hw {int sc_nvifs; struct ieee80211_hw* hw; } ;
struct rsi_common {scalar_t__ iface_down; struct rsi_hw* priv; } ;
struct ieee80211_rx_status {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 struct ieee80211_rx_status* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct ieee80211_hw*,struct sk_buff*) ;
 int FUNC_3 (struct ieee80211_hw*,struct sk_buff*,struct rsi_common*,struct ieee80211_rx_status*) ;

void FUNC_4(struct rsi_common *VAR_0,
       struct sk_buff *VAR_1)
{
 struct rsi_hw *VAR_2 = VAR_0->priv;
 struct ieee80211_hw *VAR_3 = VAR_2->hw;
 struct ieee80211_rx_status *VAR_4 = FUNC_0(VAR_1);

 if ((VAR_0->iface_down) || (!VAR_2->sc_nvifs)) {
  FUNC_1(VAR_1);
  return;
 }


 FUNC_3(VAR_3, VAR_1, VAR_0, VAR_4);

 FUNC_2(VAR_3, VAR_1);
}
