
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ath_common {int dummy; } ;
struct ath_beacon_config {int beacon_interval; } ;
struct ath9k_htc_vif {int bslot; int tsfadjust; } ;
struct ath9k_htc_priv {struct ath_beacon_config cur_beacon_conf; int ah; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct ath_common* FUNC_1 (int ) ;
 int FUNC_2 (struct ath_common*,int ,char*,unsigned long long,int) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct ath9k_htc_priv *VAR_2,
        struct ieee80211_vif *VAR_3)
{
 struct ath_common *VAR_4 = FUNC_1(VAR_2->ah);
 struct ath9k_htc_vif *VAR_5 = (struct ath9k_htc_vif *)VAR_3->drv_priv;
 struct ath_beacon_config *VAR_6 = &VAR_2->cur_beacon_conf;
 u64 VAR_7;

 if (VAR_5->bslot == 0)
  return;






 VAR_7 = VAR_6->beacon_interval * VAR_5->bslot / VAR_0;
 VAR_5->tsfadjust = FUNC_3(FUNC_0(VAR_7));

 FUNC_2(VAR_4, VAR_1, "tsfadjust is: %llu for bslot: %d\n",
  (unsigned long long)VAR_7, VAR_5->bslot);
}
