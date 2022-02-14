
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct ath9k_htc_priv* priv; } ;
struct ath9k_htc_priv {int mutex; int ah; } ;


 int FUNC_0 (struct ath9k_htc_priv*) ;
 int FUNC_1 (struct ath9k_htc_priv*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_0,
         struct ieee80211_vif *VAR_1, u64 VAR_2)
{
 struct ath9k_htc_priv *VAR_3 = VAR_0->priv;

 FUNC_3(&VAR_3->mutex);
 FUNC_1(VAR_3);
 FUNC_2(VAR_3->ah, VAR_2);
 FUNC_0(VAR_3);
 FUNC_4(&VAR_3->mutex);
}
