
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif_chanctx_switch {int dummy; } ;
struct ieee80211_hw {struct ath10k* priv; } ;
struct ath10k {int conf_mutex; } ;
typedef enum ieee80211_chanctx_switch_mode { ____Placeholder_ieee80211_chanctx_switch_mode } ieee80211_chanctx_switch_mode ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,int ,char*,int,int) ;
 int FUNC_1 (struct ath10k*,struct ieee80211_vif_chanctx_switch*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct ieee80211_hw *VAR_1,
     struct ieee80211_vif_chanctx_switch *VAR_2,
     int VAR_3,
     enum ieee80211_chanctx_switch_mode VAR_4)
{
 struct ath10k *VAR_5 = VAR_1->priv;

 FUNC_2(&VAR_5->conf_mutex);

 FUNC_0(VAR_5, VAR_0,
     "mac chanctx switch n_vifs %d mode %d\n",
     VAR_3, VAR_4);
 FUNC_1(VAR_5, VAR_2, VAR_3);

 FUNC_3(&VAR_5->conf_mutex);
 return 0;
}
