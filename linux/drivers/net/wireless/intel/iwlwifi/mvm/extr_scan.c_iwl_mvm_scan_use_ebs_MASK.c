
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_ucode_capabilities {int flags; } ;
struct iwl_mvm {scalar_t__ last_ebs_successful; TYPE_1__* fw; } ;
struct ieee80211_vif {scalar_t__ type; } ;
struct TYPE_2__ {struct iwl_ucode_capabilities ucode_capa; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct iwl_mvm*) ;
 scalar_t__ FUNC_1 (struct iwl_mvm*) ;
 int FUNC_2 (struct iwl_mvm*) ;
 int FUNC_3 (struct iwl_mvm*,int ) ;

__attribute__((used)) static inline bool FUNC_4(struct iwl_mvm *VAR_4,
     struct ieee80211_vif *VAR_5)
{
 const struct iwl_ucode_capabilities *VAR_6 = &VAR_4->fw->ucode_capa;
 bool VAR_7;

 if (FUNC_0(VAR_4))
  VAR_7 = FUNC_3(VAR_4, VAR_2);
 else
  VAR_7 = FUNC_2(VAR_4);
 return ((VAR_6->flags & VAR_1) &&
  VAR_4->last_ebs_successful && VAR_0 &&
  VAR_5->type != VAR_3 &&
  (!VAR_7 || FUNC_1(VAR_4)));
}
