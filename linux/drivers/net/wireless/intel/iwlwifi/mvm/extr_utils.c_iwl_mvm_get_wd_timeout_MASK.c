
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct iwl_mvm {TYPE_3__* trans; TYPE_5__* fw; } ;
struct iwl_fw_dbg_trigger_txq_timer {int p2p_device; int p2p_go; int p2p_client; int softap; int bss; int ibss; int command_queue; int tdls; } ;
struct iwl_fw_dbg_trigger_tlv {scalar_t__ data; } ;
struct ieee80211_vif {scalar_t__ type; } ;
struct TYPE_11__ {int ucode_capa; } ;
struct TYPE_10__ {scalar_t__ tfd_q_hang_detect; } ;
struct TYPE_9__ {TYPE_2__* trans_cfg; } ;
struct TYPE_8__ {TYPE_1__* base_params; } ;
struct TYPE_7__ {unsigned int wd_timeout; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;







 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (struct ieee80211_vif*) ;
 struct iwl_fw_dbg_trigger_tlv* FUNC_3 (TYPE_5__*,int ) ;
 int FUNC_4 (TYPE_5__*,int ) ;
 TYPE_4__ VAR_4 ;
 unsigned int FUNC_5 (int ) ;

unsigned int FUNC_6(struct iwl_mvm *VAR_5,
        struct ieee80211_vif *VAR_6,
        bool VAR_7, bool VAR_8)
{
 struct iwl_fw_dbg_trigger_tlv *VAR_9;
 struct iwl_fw_dbg_trigger_txq_timer *VAR_10;
 unsigned int VAR_11 = VAR_8 ?
  VAR_1 :
  VAR_5->trans->trans_cfg->base_params->wd_timeout;

 if (!FUNC_4(VAR_5->fw, VAR_0)) {




  if (FUNC_1(&VAR_5->fw->ucode_capa,
    VAR_2) &&
      VAR_6 && VAR_6->type == 133)
   return VAR_3;
  return VAR_4.tfd_q_hang_detect ?
   VAR_11 : VAR_3;
 }

 VAR_9 = FUNC_3(VAR_5->fw, VAR_0);
 VAR_10 = (void *)VAR_9->data;

 if (VAR_7)
  return FUNC_5(VAR_10->tdls);

 if (VAR_8)
  return FUNC_5(VAR_10->command_queue);

 if (FUNC_0(!VAR_6))
  return VAR_11;

 switch (FUNC_2(VAR_6)) {
 case 134:
  return FUNC_5(VAR_10->ibss);
 case 128:
  return FUNC_5(VAR_10->bss);
 case 133:
  return FUNC_5(VAR_10->softap);
 case 131:
  return FUNC_5(VAR_10->p2p_client);
 case 129:
  return FUNC_5(VAR_10->p2p_go);
 case 130:
  return FUNC_5(VAR_10->p2p_device);
 case 132:
  return VAR_11;
 default:
  FUNC_0(1);
  return VAR_5->trans->trans_cfg->base_params->wd_timeout;
 }
}
