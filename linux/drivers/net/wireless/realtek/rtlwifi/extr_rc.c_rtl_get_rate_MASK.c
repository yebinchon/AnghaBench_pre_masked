
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct rtl_priv {int dummy; } ;
struct ieee80211_tx_rate_control {struct sk_buff* skb; } ;
struct ieee80211_tx_rate {int dummy; } ;
struct TYPE_2__ {struct ieee80211_tx_rate* rates; } ;
struct ieee80211_tx_info {TYPE_1__ control; } ;
struct ieee80211_sta {int dummy; } ;
typedef int __le16 ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct rtl_priv*,struct ieee80211_sta*,struct sk_buff*,int) ;
 int FUNC_2 (struct rtl_priv*,struct ieee80211_sta*,struct ieee80211_tx_rate*,struct ieee80211_tx_rate_control*,int,int,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_5(void *VAR_0, struct ieee80211_sta *VAR_1,
    void *VAR_2,
    struct ieee80211_tx_rate_control *VAR_3)
{
 struct rtl_priv *VAR_4 = VAR_0;
 struct sk_buff *VAR_5 = VAR_3->skb;
 struct ieee80211_tx_info *VAR_6 = FUNC_0(VAR_5);
 struct ieee80211_tx_rate *VAR_7 = VAR_6->control.rates;
 __le16 VAR_8 = FUNC_4(VAR_5);
 u8 VAR_9, VAR_10, VAR_11;
 bool VAR_12 = !FUNC_3(VAR_8);

 VAR_11 = FUNC_1(VAR_4, VAR_1, VAR_5, VAR_12);
 VAR_9 = 1;
 FUNC_2(VAR_4, VAR_1, &VAR_7[0], VAR_3,
    VAR_9, VAR_11, 1, VAR_12);

 if (!VAR_12) {
  for (VAR_10 = 1; VAR_10 < 4; VAR_10++)
   FUNC_2(VAR_4, VAR_1, &VAR_7[VAR_10],
      VAR_3, VAR_10, (VAR_11 - VAR_10), 1,
      VAR_12);
 }
}
