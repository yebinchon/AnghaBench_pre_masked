
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcn36xx_sta {int dummy; } ;
struct wcn36xx {int hw; } ;
struct sk_buff {int dummy; } ;
struct ieee80211_tx_control {scalar_t__ sta; } ;
struct ieee80211_hw {struct wcn36xx* priv; } ;


 int FUNC_0 (int ,struct sk_buff*) ;
 struct wcn36xx_sta* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct wcn36xx*,struct wcn36xx_sta*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_0,
         struct ieee80211_tx_control *VAR_1,
         struct sk_buff *VAR_2)
{
 struct wcn36xx *VAR_3 = VAR_0->priv;
 struct wcn36xx_sta *VAR_4 = ((void*)0);

 if (VAR_1->sta)
  VAR_4 = FUNC_1(VAR_1->sta);

 if (FUNC_2(VAR_3, VAR_4, VAR_2))
  FUNC_0(VAR_3->hw, VAR_2);
}
