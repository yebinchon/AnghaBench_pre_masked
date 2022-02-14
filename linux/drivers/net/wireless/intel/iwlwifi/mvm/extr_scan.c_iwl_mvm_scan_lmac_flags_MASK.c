
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_mvm_scan_params {int n_ssids; int type; scalar_t__ pass_all; TYPE_1__* ssids; } ;
struct iwl_mvm {scalar_t__ sched_scan_pass_all; scalar_t__ scan_iter_notif_enabled; TYPE_2__* fw; } ;
struct ieee80211_vif {scalar_t__ type; } ;
struct TYPE_4__ {int ucode_capa; } ;
struct TYPE_3__ {scalar_t__ ssid_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct iwl_mvm_scan_params*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct iwl_mvm*) ;

__attribute__((used)) static int FUNC_4(struct iwl_mvm *VAR_11,
       struct iwl_mvm_scan_params *VAR_12,
       struct ieee80211_vif *VAR_13)
{
 int VAR_14 = 0;

 if (VAR_12->n_ssids == 0)
  VAR_14 |= VAR_5;

 if (VAR_12->n_ssids == 1 && VAR_12->ssids[0].ssid_len != 0)
  VAR_14 |= VAR_7;

 if (FUNC_2(VAR_12->type))
  VAR_14 |= VAR_2;

 if (FUNC_3(VAR_11) &&
     FUNC_0(&VAR_11->fw->ucode_capa,
   VAR_8))
  VAR_14 |= VAR_0;

 if (VAR_12->pass_all)
  VAR_14 |= VAR_6;
 else
  VAR_14 |= VAR_4;






 if (VAR_11->sched_scan_pass_all == VAR_10)
  VAR_14 |= VAR_3;

 if (FUNC_1(VAR_12) &&
     VAR_13->type != VAR_9 &&
     !FUNC_2(VAR_12->type))
  VAR_14 |= VAR_1;

 return VAR_14;
}
