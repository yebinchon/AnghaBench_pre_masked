
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_mvm_vif {int csa_work; int color; int id; } ;
struct iwl_mvm {TYPE_2__* fw; int csa_vif; int cs_tx_unblock_dwork; int * vif_id_to_mac; } ;
struct iwl_channel_switch_noa_notif {int id_and_color; } ;
struct TYPE_3__ {int beacon_int; } ;
struct ieee80211_vif {int type; TYPE_1__ bss_conf; int csa_active; } ;
struct TYPE_4__ {int ucode_capa; } ;


 size_t FUNC_0 (int ,int ) ;
 size_t VAR_0 ;
 int FUNC_1 (struct iwl_mvm*,char*) ;
 int VAR_1 ;
 int VAR_2 ;


 size_t VAR_3 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int,char*,size_t,size_t) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (struct ieee80211_vif*,int) ;
 int FUNC_9 (struct ieee80211_vif*) ;
 int FUNC_10 (struct iwl_mvm*,struct ieee80211_vif*) ;
 struct iwl_mvm_vif* FUNC_11 (struct ieee80211_vif*) ;
 int FUNC_12 (struct iwl_rx_packet*) ;
 size_t FUNC_13 (int ) ;
 int FUNC_14 (int) ;
 struct ieee80211_vif* FUNC_15 (int ) ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 struct iwl_rx_packet* FUNC_18 (struct iwl_rx_cmd_buffer*) ;
 int FUNC_19 (int *,int ) ;

void FUNC_20(struct iwl_mvm *VAR_4,
          struct iwl_rx_cmd_buffer *VAR_5)
{
 struct iwl_rx_packet *VAR_6 = FUNC_18(VAR_5);
 struct iwl_channel_switch_noa_notif *VAR_7 = (void *)VAR_6->data;
 struct ieee80211_vif *VAR_8, *VAR_9;
 struct iwl_mvm_vif *VAR_10;
 int VAR_11 = FUNC_12(VAR_6);
 u32 VAR_12, VAR_13, VAR_14;

 if (FUNC_5(VAR_11 < sizeof(*VAR_7)))
  return;

 VAR_12 = FUNC_13(VAR_7->id_and_color);
 VAR_14 = VAR_12 & VAR_0;

 if (FUNC_5(VAR_14 >= VAR_3))
  return;

 FUNC_16();
 VAR_9 = FUNC_15(VAR_4->vif_id_to_mac[VAR_14]);
 VAR_10 = FUNC_11(VAR_9);

 switch (VAR_9->type) {
 case 129:
  VAR_8 = FUNC_15(VAR_4->csa_vif);
  if (FUNC_4(!VAR_8 || !VAR_8->csa_active ||
       VAR_8 != VAR_9))
   goto out_unlock;

  VAR_13 = FUNC_0(VAR_10->id, VAR_10->color);
  if (FUNC_3(VAR_13 != VAR_12,
    "channel switch noa notification on unexpected vif (csa_vif=%d, notif=%d)",
    VAR_13, VAR_12))
   goto out_unlock;

  FUNC_1(VAR_4, "Channel Switch Started Notification\n");

  FUNC_19(&VAR_4->cs_tx_unblock_dwork,
          FUNC_14(VAR_1 *
             VAR_8->bss_conf.beacon_int));

  FUNC_9(VAR_8);

  FUNC_17();

  FUNC_2(VAR_4->csa_vif, ((void*)0));
  return;
 case 128:
  if (!FUNC_7(&VAR_4->fw->ucode_capa,
     VAR_2))
   FUNC_10(VAR_4, VAR_9);
  FUNC_6(&VAR_10->csa_work);
  FUNC_8(VAR_9, 1);
  break;
 default:

  FUNC_5(1);
  break;
 }
out_unlock:
 FUNC_17();
}
