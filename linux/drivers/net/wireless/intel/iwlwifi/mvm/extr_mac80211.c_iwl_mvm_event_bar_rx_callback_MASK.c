
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iwl_mvm {int fwrt; } ;
struct iwl_fw_dbg_trigger_tlv {scalar_t__ data; } ;
struct iwl_fw_dbg_trigger_ba {int rx_bar; } ;
struct ieee80211_vif {int dummy; } ;
struct TYPE_5__ {int ssn; int tid; TYPE_1__* sta; } ;
struct TYPE_6__ {TYPE_2__ ba; } ;
struct ieee80211_event {TYPE_3__ u; } ;
struct TYPE_4__ {int addr; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ieee80211_vif*) ;
 int FUNC_2 (int *,struct iwl_fw_dbg_trigger_tlv*,char*,int ,int ,int ) ;
 struct iwl_fw_dbg_trigger_tlv* FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct iwl_mvm *VAR_1,
       struct ieee80211_vif *VAR_2,
       const struct ieee80211_event *VAR_3)
{
 struct iwl_fw_dbg_trigger_tlv *VAR_4;
 struct iwl_fw_dbg_trigger_ba *VAR_5;

 VAR_4 = FUNC_3(&VAR_1->fwrt, FUNC_1(VAR_2),
         VAR_0);
 if (!VAR_4)
  return;

 VAR_5 = (void *)VAR_4->data;

 if (!(FUNC_4(VAR_5->rx_bar) & FUNC_0(VAR_3->u.ba.tid)))
  return;

 FUNC_2(&VAR_1->fwrt, VAR_4,
    "BAR received from %pM, tid %d, ssn %d",
    VAR_3->u.ba.sta->addr, VAR_3->u.ba.tid,
    VAR_3->u.ba.ssn);
}
