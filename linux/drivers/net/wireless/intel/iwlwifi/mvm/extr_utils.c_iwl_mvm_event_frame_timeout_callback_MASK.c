
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct iwl_mvm {int fwrt; } ;
struct iwl_fw_dbg_trigger_tlv {scalar_t__ data; } ;
struct iwl_fw_dbg_trigger_ba {int frame_timeout; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int addr; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ieee80211_vif*) ;
 int FUNC_2 (int *,struct iwl_fw_dbg_trigger_tlv*,char*,int ,int ) ;
 struct iwl_fw_dbg_trigger_tlv* FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct iwl_mvm *VAR_1,
       struct ieee80211_vif *VAR_2,
       const struct ieee80211_sta *VAR_3,
       u16 VAR_4)
{
 struct iwl_fw_dbg_trigger_tlv *VAR_5;
 struct iwl_fw_dbg_trigger_ba *VAR_6;

 VAR_5 = FUNC_3(&VAR_1->fwrt, FUNC_1(VAR_2),
         VAR_0);
 if (!VAR_5)
  return;

 VAR_6 = (void *)VAR_5->data;

 if (!(FUNC_4(VAR_6->frame_timeout) & FUNC_0(VAR_4)))
  return;

 FUNC_2(&VAR_1->fwrt, VAR_5,
    "Frame from %pM timed out, tid %d",
    VAR_3->addr, VAR_4);
}
