
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct mwl8k_priv {int capture_beacon; int finalize_join_worker; int * beacon_skb; int capture_bssid; } ;
struct ieee80211_hw {struct mwl8k_priv* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ieee80211_hw*,int *) ;
 int * FUNC_2 (struct sk_buff*,int ) ;

__attribute__((used)) static inline void FUNC_3(struct ieee80211_hw *VAR_1,
         struct sk_buff *VAR_2)
{
 struct mwl8k_priv *VAR_3 = VAR_1->priv;

 VAR_3->capture_beacon = 0;
 FUNC_0(VAR_3->capture_bssid);






 VAR_3->beacon_skb = FUNC_2(VAR_2, VAR_0);
 if (VAR_3->beacon_skb != ((void*)0))
  FUNC_1(VAR_1, &VAR_3->finalize_join_worker);
}
