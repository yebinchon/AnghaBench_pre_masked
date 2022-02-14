
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct iwl_mvm_vif {int ap_ibss_active; int csa_bcn_pending; int ps_disabled; int monitor_active; struct iwl_mvm_phy_ctxt* phy_ctxt; } ;
struct iwl_mvm_phy_ctxt {int dummy; } ;
struct iwl_mvm {TYPE_1__* fw; int mutex; struct iwl_mvm_phy_ctxt* phy_ctxts; } ;
struct TYPE_4__ {int beacon_int; } ;
struct ieee80211_vif {int type; TYPE_2__ bss_conf; } ;
struct ieee80211_chanctx_conf {scalar_t__ drv_priv; } ;
struct TYPE_3__ {int ucode_capa; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_2 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_3 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_4 (struct iwl_mvm*,struct ieee80211_vif*,int,int *) ;
 int FUNC_5 (struct iwl_mvm*) ;
 int FUNC_6 (struct iwl_mvm*,struct ieee80211_vif*,int,int,int,int) ;
 int FUNC_7 (struct iwl_mvm*,int,int *) ;
 struct iwl_mvm_vif* FUNC_8 (struct ieee80211_vif*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct iwl_mvm *VAR_2,
     struct ieee80211_vif *VAR_3,
     struct ieee80211_chanctx_conf *VAR_4,
     bool VAR_5)
{
 u16 *VAR_6 = (u16 *)VAR_4->drv_priv;
 struct iwl_mvm_phy_ctxt *VAR_7 = &VAR_2->phy_ctxts[*VAR_6];
 struct iwl_mvm_vif *VAR_8 = FUNC_8(VAR_3);
 int VAR_9;

 FUNC_9(&VAR_2->mutex);

 VAR_8->phy_ctxt = VAR_7;

 switch (VAR_3->type) {
 case 130:

  if (VAR_5) {
   VAR_8->ap_ibss_active = 1;
   break;
  }

 case 131:




  VAR_9 = 0;
  goto out;
 case 128:
  VAR_8->csa_bcn_pending = 0;
  break;
 case 129:

  VAR_8->ps_disabled = 1;
  break;
 default:
  VAR_9 = -VAR_0;
  goto out;
 }

 VAR_9 = FUNC_2(VAR_2, VAR_3);
 if (VAR_9)
  goto out;





 FUNC_5(VAR_2);





 if (VAR_3->type == 129) {
  VAR_8->monitor_active = 1;
  VAR_9 = FUNC_7(VAR_2, 0, ((void*)0));
  if (VAR_9)
   goto out_remove_binding;

  VAR_9 = FUNC_1(VAR_2, VAR_3);
  if (VAR_9)
   goto out_remove_binding;

 }


 if (VAR_3->type == 130) {
  FUNC_7(VAR_2, 0, ((void*)0));
  FUNC_4(VAR_2, VAR_3, 0, ((void*)0));
 }

 if (VAR_5 && VAR_3->type == 128) {
  VAR_8->csa_bcn_pending = 1;

  if (!FUNC_0(&VAR_2->fw->ucode_capa,
     VAR_1)) {
   u32 VAR_10 = 3 * VAR_3->bss_conf.beacon_int;




   FUNC_6(VAR_2, VAR_3, VAR_10, VAR_10,
      VAR_3->bss_conf.beacon_int / 2,
      1);
  }

  FUNC_7(VAR_2, 0, ((void*)0));
 }

 goto out;

out_remove_binding:
 FUNC_3(VAR_2, VAR_3);
 FUNC_5(VAR_2);
out:
 if (VAR_9)
  VAR_8->phy_ctxt = ((void*)0);
 return VAR_9;
}
