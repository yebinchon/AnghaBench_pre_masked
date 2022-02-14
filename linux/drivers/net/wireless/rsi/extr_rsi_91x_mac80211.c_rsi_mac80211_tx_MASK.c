
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct rsi_hw {struct rsi_common* priv; } ;
struct rsi_common {int mac_ops_resumed; } ;
struct ieee80211_tx_control {int dummy; } ;
struct ieee80211_hw {struct rsi_hw* priv; } ;
struct ieee80211_hdr {int frame_control; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct rsi_common*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_0,
       struct ieee80211_tx_control *VAR_1,
       struct sk_buff *VAR_2)
{
 struct rsi_hw *VAR_3 = VAR_0->priv;
 struct rsi_common *VAR_4 = VAR_3->priv;
 struct ieee80211_hdr *VAR_5 = (struct ieee80211_hdr *)VAR_2->data;

 if (FUNC_0(VAR_5->frame_control))
  VAR_4->mac_ops_resumed = 0;

 FUNC_1(VAR_4, VAR_2);
}
