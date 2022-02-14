
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct ieee80211_hw {int dummy; } ;
struct ath9k_htc_sta {int rc_update_work; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_hw *VAR_1,
        struct ieee80211_vif *VAR_2,
        struct ieee80211_sta *VAR_3, u32 VAR_4)
{
 struct ath9k_htc_sta *VAR_5 = (struct ath9k_htc_sta *) VAR_3->drv_priv;

 if (!(VAR_4 & VAR_0))
  return;

 FUNC_0(&VAR_5->rc_update_work);
}
