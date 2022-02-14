
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int fwrt; } ;
struct iwl_fw_dbg_trigger_tlv {scalar_t__ data; } ;
struct iwl_fw_dbg_trigger_mlme {scalar_t__ stop_connection_loss; } ;
struct ieee80211_vif {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_vif*) ;
 int FUNC_1 (struct ieee80211_vif*) ;
 int FUNC_2 (int *,struct iwl_fw_dbg_trigger_tlv*,char*,char const*) ;
 struct iwl_fw_dbg_trigger_tlv* FUNC_3 (int *,int ,int ) ;

void FUNC_4(struct iwl_mvm *VAR_1, struct ieee80211_vif *VAR_2,
        const char *VAR_3)
{
 struct iwl_fw_dbg_trigger_tlv *VAR_4;
 struct iwl_fw_dbg_trigger_mlme *VAR_5;

 VAR_4 = FUNC_3(&VAR_1->fwrt, FUNC_1(VAR_2),
         VAR_0);
 if (!VAR_4)
  goto out;

 VAR_5 = (void *)VAR_4->data;

 if (VAR_5->stop_connection_loss &&
     --VAR_5->stop_connection_loss)
  goto out;

 FUNC_2(&VAR_1->fwrt, VAR_4, "%s", VAR_3);

out:
 FUNC_0(VAR_2);
}
