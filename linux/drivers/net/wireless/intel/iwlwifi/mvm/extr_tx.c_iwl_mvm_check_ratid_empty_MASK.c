
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct iwl_mvm_tid_data {int state; int ssn; int next_reclaimed; } ;
struct iwl_mvm_sta {int lock; struct ieee80211_vif* vif; struct iwl_mvm_tid_data* tid_data; } ;
struct iwl_mvm {TYPE_2__* trans; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int addr; } ;
struct TYPE_4__ {TYPE_1__* trans_cfg; } ;
struct TYPE_3__ {scalar_t__ gen2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwl_mvm*,char*,int) ;


 int FUNC_1 (struct ieee80211_sta*,size_t,int) ;
 int FUNC_2 (struct ieee80211_vif*,int ,size_t) ;
 int FUNC_3 (struct ieee80211_vif*,int ,size_t) ;
 struct iwl_mvm_sta* FUNC_4 (struct ieee80211_sta*) ;
 scalar_t__ FUNC_5 (struct iwl_mvm*,struct iwl_mvm_tid_data*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct iwl_mvm *VAR_3,
          struct ieee80211_sta *VAR_4, u8 VAR_5)
{
 struct iwl_mvm_sta *VAR_6 = FUNC_4(VAR_4);
 struct iwl_mvm_tid_data *VAR_7 = &VAR_6->tid_data[VAR_5];
 struct ieee80211_vif *VAR_8 = VAR_6->vif;
 u16 VAR_9;

 FUNC_6(&VAR_6->lock);

 if ((VAR_7->state == VAR_1 ||
      VAR_7->state == 128) &&
     FUNC_5(VAR_3, VAR_7) == 0) {





  FUNC_1(VAR_4, VAR_5, 0);
 }





 VAR_9 = VAR_7->ssn;
 if (VAR_3->trans->trans_cfg->gen2)
  VAR_9 &= 0xff;

 if (VAR_9 != VAR_7->next_reclaimed)
  return;

 switch (VAR_7->state) {
 case 129:
  FUNC_0(VAR_3,
        "Can continue addBA flow ssn = next_recl = %d\n",
        VAR_7->next_reclaimed);
  VAR_7->state = VAR_2;
  FUNC_2(VAR_8, VAR_4->addr, VAR_5);
  break;

 case 128:
  FUNC_0(VAR_3,
        "Can continue DELBA flow ssn = next_recl = %d\n",
        VAR_7->next_reclaimed);
  VAR_7->state = VAR_0;
  FUNC_3(VAR_8, VAR_4->addr, VAR_5);
  break;

 default:
  break;
 }
}
