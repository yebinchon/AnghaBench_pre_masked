
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct iwl_mvm_scan_params {int n_ssids; int flags; int type; scalar_t__ measurement_dwell; scalar_t__ pass_all; int hb_type; TYPE_1__* ssids; } ;
struct iwl_mvm {scalar_t__ sched_scan_pass_all; scalar_t__ scan_iter_notif_enabled; TYPE_2__* fw; } ;
struct ieee80211_vif {scalar_t__ type; } ;
struct TYPE_4__ {int ucode_capa; } ;
struct TYPE_3__ {scalar_t__ ssid_len; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (struct iwl_mvm*) ;
 scalar_t__ FUNC_3 (struct iwl_mvm*) ;
 scalar_t__ FUNC_4 (struct iwl_mvm*) ;
 scalar_t__ FUNC_5 (struct iwl_mvm_scan_params*) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct iwl_mvm*) ;

__attribute__((used)) static u16 FUNC_8(struct iwl_mvm *VAR_21,
       struct iwl_mvm_scan_params *VAR_22,
       struct ieee80211_vif *VAR_23)
{
 u16 VAR_24 = 0;

 if (VAR_22->n_ssids == 0)
  VAR_24 = VAR_9;

 if (VAR_22->n_ssids == 1 && VAR_22->ssids[0].ssid_len != 0)
  VAR_24 |= VAR_12;

 if (FUNC_6(VAR_22->type))
  VAR_24 |= VAR_4;

 if (FUNC_3(VAR_21) &&
     FUNC_6(VAR_22->hb_type))
  VAR_24 |= VAR_6;

 if (FUNC_7(VAR_21) &&
     FUNC_1(&VAR_21->fw->ucode_capa,
   VAR_1))
  VAR_24 |= VAR_15;

 if (VAR_22->pass_all)
  VAR_24 |= VAR_10;
 else
  VAR_24 |= VAR_7;

 if (!FUNC_5(VAR_22))
  VAR_24 |= VAR_11;

 if (VAR_22->measurement_dwell)
  VAR_24 |= VAR_5;






 if (VAR_21->sched_scan_pass_all == VAR_20)
  VAR_24 |= VAR_5;

 if (FUNC_2(VAR_21) && VAR_0 &&
     VAR_23->type != VAR_16)
  VAR_24 |= VAR_2;






 if (FUNC_5(VAR_22) &&
     VAR_23->type != VAR_16 &&
     !FUNC_6(VAR_22->type) &&
     !FUNC_2(VAR_21) &&
     !FUNC_4(VAR_21))
  VAR_24 |= VAR_3;

 if (FUNC_4(VAR_21)) {
  if ((VAR_22->flags &
       VAR_19))
   VAR_24 |= VAR_14;





  if ((VAR_22->flags &
       VAR_18) &&
       !FUNC_0(!FUNC_2(VAR_21)))
   VAR_24 |= VAR_13;
  if ((VAR_22->flags & VAR_17))
   VAR_24 |= VAR_8;
 }

 return VAR_24;
}
