
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_power_vifs {scalar_t__ bss_vif; scalar_t__ p2p_vif; struct iwl_mvm* mvm; } ;
struct iwl_mvm {int hw; int mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,struct iwl_power_vifs*) ;
 int VAR_1 ;
 int FUNC_1 (struct iwl_mvm*,scalar_t__) ;
 int FUNC_2 (struct iwl_mvm*,scalar_t__) ;
 int FUNC_3 (struct iwl_mvm*,struct iwl_power_vifs*) ;
 int FUNC_4 (struct iwl_mvm*) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct iwl_mvm *VAR_2)
{
 struct iwl_power_vifs VAR_3 = {
  .mvm = VAR_2,
 };
 int VAR_4;

 FUNC_5(&VAR_2->mutex);


 FUNC_0(VAR_2->hw,
     VAR_0,
     VAR_1, &VAR_3);

 FUNC_3(VAR_2, &VAR_3);

 VAR_4 = FUNC_4(VAR_2);
 if (VAR_4)
  return VAR_4;

 if (VAR_3.bss_vif) {
  VAR_4 = FUNC_1(VAR_2, VAR_3.bss_vif);
  if (VAR_4)
   return VAR_4;
 }

 if (VAR_3.p2p_vif) {
  VAR_4 = FUNC_1(VAR_2, VAR_3.p2p_vif);
  if (VAR_4)
   return VAR_4;
 }

 if (VAR_3.bss_vif)
  return FUNC_2(VAR_2, VAR_3.bss_vif);

 return 0;
}
