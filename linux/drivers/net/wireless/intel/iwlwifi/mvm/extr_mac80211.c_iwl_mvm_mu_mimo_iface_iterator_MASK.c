
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_mu_group_mgmt_notif {int user_position; int membership_status; } ;
struct ieee80211_vif {scalar_t__ mu_mimo_owner; } ;


 int FUNC_0 (struct ieee80211_vif*,int *,int *) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, u8 *VAR_1,
        struct ieee80211_vif *VAR_2)
{
 if (VAR_2->mu_mimo_owner) {
  struct iwl_mu_group_mgmt_notif *VAR_3 = VAR_0;






  FUNC_0(VAR_2,
        (u8 *)&VAR_3->membership_status,
        (u8 *)&VAR_3->user_position);
 }
}
