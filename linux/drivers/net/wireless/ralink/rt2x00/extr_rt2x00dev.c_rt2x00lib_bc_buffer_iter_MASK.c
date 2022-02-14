
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct rt2x00_dev {int hw; } ;
struct ieee80211_vif {scalar_t__ type; } ;
struct ieee80211_tx_control {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct sk_buff* FUNC_0 (int ,struct ieee80211_vif*) ;
 int FUNC_1 (int ,struct ieee80211_tx_control*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(void *VAR_1, u8 *VAR_2,
         struct ieee80211_vif *VAR_3)
{
 struct ieee80211_tx_control VAR_4 = {};
 struct rt2x00_dev *VAR_5 = VAR_1;
 struct sk_buff *VAR_6;




 if (VAR_3->type != VAR_0)
  return;




 VAR_6 = FUNC_0(VAR_5->hw, VAR_3);
 while (VAR_6) {
  FUNC_1(VAR_5->hw, &VAR_4, VAR_6);
  VAR_6 = FUNC_0(VAR_5->hw, VAR_3);
 }
}
