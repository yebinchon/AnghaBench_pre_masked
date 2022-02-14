
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct ath9k_htc_priv* priv; } ;
struct ath_common {int op_flags; } ;
struct ath9k_htc_priv {int mutex; int beacon_lock; int ah; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath9k_htc_priv*) ;
 int FUNC_1 (struct ath9k_htc_priv*) ;
 int FUNC_2 (struct ath9k_htc_priv*) ;
 struct ath_common* FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct ieee80211_hw *VAR_1,
           struct ieee80211_vif *VAR_2)
{
 struct ath9k_htc_priv *VAR_3 = VAR_1->priv;
 struct ath_common *VAR_4 = FUNC_3(VAR_3->ah);

 FUNC_5(&VAR_3->mutex);
 FUNC_7(&VAR_3->beacon_lock);
 FUNC_4(VAR_0, &VAR_4->op_flags);
 FUNC_8(&VAR_3->beacon_lock);
 FUNC_1(VAR_3);
 FUNC_2(VAR_3);
 FUNC_0(VAR_3);
 FUNC_6(&VAR_3->mutex);
}
