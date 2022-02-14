
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_peer_assoc_complete_arg {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct ath10k {int conf_mutex; } ;


 int FUNC_0 (struct ath10k*,struct ieee80211_vif*,struct ieee80211_sta*,struct wmi_peer_assoc_complete_arg*) ;
 int FUNC_1 (struct ath10k*,struct ieee80211_vif*,struct ieee80211_sta*,struct wmi_peer_assoc_complete_arg*) ;
 int FUNC_2 (struct ath10k*,struct ieee80211_vif*,struct ieee80211_sta*,struct wmi_peer_assoc_complete_arg*) ;
 int FUNC_3 (struct ath10k*,struct ieee80211_vif*,struct ieee80211_sta*,struct wmi_peer_assoc_complete_arg*) ;
 int FUNC_4 (struct ath10k*,struct ieee80211_vif*,struct ieee80211_sta*,struct wmi_peer_assoc_complete_arg*) ;
 int FUNC_5 (struct ath10k*,struct ieee80211_vif*,struct ieee80211_sta*,struct wmi_peer_assoc_complete_arg*) ;
 int FUNC_6 (struct ath10k*,struct ieee80211_vif*,struct ieee80211_sta*,struct wmi_peer_assoc_complete_arg*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct wmi_peer_assoc_complete_arg*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct ath10k *VAR_0,
         struct ieee80211_vif *VAR_1,
         struct ieee80211_sta *VAR_2,
         struct wmi_peer_assoc_complete_arg *VAR_3)
{
 FUNC_7(&VAR_0->conf_mutex);

 FUNC_8(VAR_3, 0, sizeof(*VAR_3));

 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_5(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_6(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);

 return 0;
}
