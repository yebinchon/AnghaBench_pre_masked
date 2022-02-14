
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int multicast_rsc; } ;
struct TYPE_7__ {int multicast_rsc; } ;
union iwl_all_tsc_rsc {TYPE_4__ tkip; TYPE_3__ aes; } ;
struct iwl_wowlan_status {TYPE_2__* gtk; } ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_key_conf {int cipher; } ;
struct TYPE_5__ {union iwl_all_tsc_rsc all_tsc_rsc; } ;
struct TYPE_6__ {TYPE_1__ rsc; } ;


 int FUNC_0 (int) ;


 int FUNC_1 (struct iwl_mvm*,int ,int *,struct ieee80211_key_conf*) ;
 int FUNC_2 (int ,struct ieee80211_key_conf*) ;

__attribute__((used)) static void FUNC_3(struct iwl_mvm *VAR_0,
       struct ieee80211_key_conf *VAR_1,
       struct iwl_wowlan_status *VAR_2)
{
 union iwl_all_tsc_rsc *VAR_3 = &VAR_2->gtk[0].rsc.all_tsc_rsc;

 switch (VAR_1->cipher) {
 case 129:
  FUNC_1(VAR_0, VAR_3->aes.multicast_rsc, ((void*)0), VAR_1);
  break;
 case 128:
  FUNC_2(VAR_3->tkip.multicast_rsc, VAR_1);
  break;
 default:
  FUNC_0(1);
 }
}
