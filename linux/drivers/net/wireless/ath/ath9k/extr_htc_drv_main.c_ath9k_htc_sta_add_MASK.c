
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct ath9k_htc_priv* priv; } ;
struct ath9k_htc_sta {struct ath9k_htc_priv* htc_priv; int rc_update_work; } ;
struct ath9k_htc_priv {int mutex; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct ath9k_htc_priv*,struct ieee80211_vif*,struct ieee80211_sta*) ;
 int FUNC_2 (struct ath9k_htc_priv*,struct ieee80211_sta*) ;
 int FUNC_3 (struct ath9k_htc_priv*) ;
 int FUNC_4 (struct ath9k_htc_priv*) ;
 int VAR_0 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct ieee80211_hw *VAR_1,
        struct ieee80211_vif *VAR_2,
        struct ieee80211_sta *VAR_3)
{
 struct ath9k_htc_priv *VAR_4 = VAR_1->priv;
 struct ath9k_htc_sta *VAR_5 = (struct ath9k_htc_sta *) VAR_3->drv_priv;
 int VAR_6;

 FUNC_5(&VAR_4->mutex);
 FUNC_4(VAR_4);
 VAR_6 = FUNC_1(VAR_4, VAR_2, VAR_3);
 if (!VAR_6) {
  FUNC_0(&VAR_5->rc_update_work, VAR_0);
  VAR_5->htc_priv = VAR_4;
  FUNC_2(VAR_4, VAR_3);
 }
 FUNC_3(VAR_4);
 FUNC_6(&VAR_4->mutex);

 return VAR_6;
}
