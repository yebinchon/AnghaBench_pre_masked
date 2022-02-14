
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_mvm {int mutex; } ;
struct TYPE_2__ {int assoc; } ;
struct ieee80211_vif {scalar_t__ type; int p2p; TYPE_1__ bss_conf; } ;
struct ieee80211_hw {int dummy; } ;


 unsigned int VAR_0 ;
 struct iwl_mvm* FUNC_0 (struct ieee80211_hw*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct iwl_mvm*,struct ieee80211_vif*,int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_2,
     struct ieee80211_vif *VAR_3,
     unsigned int VAR_4,
     unsigned int VAR_5)
{
 struct iwl_mvm *VAR_6 = FUNC_0(VAR_2);


 if (!(VAR_5 & VAR_0))
  return;


 if (VAR_3->type != VAR_1 || !VAR_3->bss_conf.assoc ||
     !VAR_3->p2p)
  return;

 FUNC_2(&VAR_6->mutex);
 FUNC_1(VAR_6, VAR_3, 0, ((void*)0));
 FUNC_3(&VAR_6->mutex);
}
