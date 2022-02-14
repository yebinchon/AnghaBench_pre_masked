
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct ath9k_htc_priv* priv; } ;
struct ath_common {int op_flags; } ;
struct ath9k_htc_priv {int mutex; int ps_work; int beacon_lock; int ah; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath9k_htc_priv*) ;
 struct ath_common* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct ieee80211_hw *VAR_1,
        struct ieee80211_vif *VAR_2,
        const u8 *VAR_3)
{
 struct ath9k_htc_priv *VAR_4 = VAR_1->priv;
 struct ath_common *VAR_5 = FUNC_1(VAR_4->ah);

 FUNC_3(&VAR_4->mutex);
 FUNC_6(&VAR_4->beacon_lock);
 FUNC_5(VAR_0, &VAR_5->op_flags);
 FUNC_7(&VAR_4->beacon_lock);
 FUNC_2(&VAR_4->ps_work);
 FUNC_0(VAR_4);
 FUNC_4(&VAR_4->mutex);
}
