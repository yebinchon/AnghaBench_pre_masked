
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_power_vifs {scalar_t__ ap_active; scalar_t__ p2p_active; scalar_t__ bss_active; scalar_t__ ap_vif; scalar_t__ p2p_vif; scalar_t__ bss_vif; } ;
struct iwl_mvm_vif {int pm_enabled; TYPE_1__* phy_ctxt; } ;
struct iwl_mvm {int hw; int mutex; } ;
struct TYPE_2__ {scalar_t__ id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct iwl_mvm*,int *) ;
 struct iwl_mvm_vif* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct iwl_mvm *VAR_2,
     struct iwl_power_vifs *VAR_3)
{
 struct iwl_mvm_vif *VAR_4 = ((void*)0);
 struct iwl_mvm_vif *VAR_5 = ((void*)0);
 struct iwl_mvm_vif *VAR_6 = ((void*)0);
 bool VAR_7 = 0;
 bool VAR_8 = 0;

 FUNC_3(&VAR_2->mutex);


 FUNC_0(VAR_2->hw,
     VAR_0,
     VAR_1,
     ((void*)0));

 if (VAR_3->bss_vif)
  VAR_4 = FUNC_2(VAR_3->bss_vif);

 if (VAR_3->p2p_vif)
  VAR_5 = FUNC_2(VAR_3->p2p_vif);

 if (VAR_3->ap_vif)
  VAR_6 = FUNC_2(VAR_3->ap_vif);


 if (FUNC_1(VAR_2, ((void*)0)))
  return;


 if (VAR_3->bss_active && !VAR_3->p2p_active && !VAR_3->ap_active) {
  VAR_4->pm_enabled = 1;
  return;
 }


 if (VAR_3->p2p_active && !VAR_3->bss_active && !VAR_3->ap_active) {
  VAR_5->pm_enabled = 1;
  return;
 }

 if (VAR_3->bss_active && VAR_3->p2p_active)
  VAR_7 = (VAR_4->phy_ctxt->id ==
           VAR_5->phy_ctxt->id);
 if (VAR_3->bss_active && VAR_3->ap_active)
  VAR_8 = (VAR_4->phy_ctxt->id ==
       VAR_6->phy_ctxt->id);


 if (!(VAR_7 || VAR_8)) {
  if (VAR_3->bss_active)
   VAR_4->pm_enabled = 1;
  if (VAR_3->p2p_active)
   VAR_5->pm_enabled = 1;
  return;
 }





 if (VAR_7 && !VAR_3->ap_active) {

  VAR_4->pm_enabled = 1;
  VAR_5->pm_enabled = 1;
 }
}
