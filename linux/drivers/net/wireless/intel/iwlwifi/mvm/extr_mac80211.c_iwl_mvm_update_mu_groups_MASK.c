
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_mvm {int dummy; } ;
struct iwl_mu_group_mgmt_cmd {int user_position; int membership_status; } ;
struct TYPE_3__ {int position; int membership; } ;
struct TYPE_4__ {TYPE_1__ mu_group; } ;
struct ieee80211_vif {TYPE_2__ bss_conf; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct iwl_mvm*,int ,int ,int,struct iwl_mu_group_mgmt_cmd*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct iwl_mvm *VAR_4,
        struct ieee80211_vif *VAR_5)
{
 struct iwl_mu_group_mgmt_cmd VAR_6 = {};

 FUNC_2(VAR_6.membership_status, VAR_5->bss_conf.mu_group.membership,
        VAR_2);
 FUNC_2(VAR_6.user_position, VAR_5->bss_conf.mu_group.position,
        VAR_3);

 return FUNC_1(VAR_4,
        FUNC_0(VAR_0,
         VAR_1),
        0, sizeof(VAR_6), &VAR_6);
}
