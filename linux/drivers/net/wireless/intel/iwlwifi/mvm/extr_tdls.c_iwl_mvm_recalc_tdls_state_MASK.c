
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_mvm {TYPE_1__* fw; } ;
struct ieee80211_vif {int dummy; } ;
struct TYPE_2__ {int ucode_capa; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (struct iwl_mvm*) ;
 int FUNC_2 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_3 (struct iwl_mvm*,struct ieee80211_vif*) ;

void FUNC_4(struct iwl_mvm *VAR_1, struct ieee80211_vif *VAR_2,
          bool VAR_3)
{
 int VAR_4 = FUNC_3(VAR_1, VAR_2);


 if (VAR_4 == 1 && VAR_3)
  FUNC_1(VAR_1);






 if (FUNC_0(&VAR_1->fw->ucode_capa,
   VAR_0))
  FUNC_2(VAR_1, VAR_2);


 if (VAR_4 == 0 && !VAR_3)
  FUNC_1(VAR_1);
}
