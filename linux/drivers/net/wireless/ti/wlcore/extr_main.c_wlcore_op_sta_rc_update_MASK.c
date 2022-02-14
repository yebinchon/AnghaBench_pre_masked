
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wl12xx_vif {int rc_update_work; int rc_ht_cap; int rc_update_bw; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int ht_cap; int bandwidth; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211_hw*,int *) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int ,char*) ;
 struct wl12xx_vif* FUNC_3 (struct ieee80211_vif*) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_2,
        struct ieee80211_vif *VAR_3,
        struct ieee80211_sta *VAR_4,
        u32 VAR_5)
{
 struct wl12xx_vif *VAR_6 = FUNC_3(VAR_3);

 FUNC_2(VAR_0, "mac80211 sta_rc_update");

 if (!(VAR_5 & VAR_1))
  return;


 VAR_6->rc_update_bw = VAR_4->bandwidth;
 FUNC_1(&VAR_6->rc_ht_cap, &VAR_4->ht_cap, sizeof(VAR_4->ht_cap));
 FUNC_0(VAR_2, &VAR_6->rc_update_work);
}
