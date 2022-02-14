
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_mvm {int fwrt; } ;
struct iwl_missed_beacons_notif {int consec_missed_beacons_since_last_rx; int consec_missed_beacons; int num_expected_beacons; int num_recvd_beacons; int mac_id; } ;
struct iwl_fw_dbg_trigger_tlv {scalar_t__ data; } ;
struct iwl_fw_dbg_trigger_missed_bcon {int stop_consec_missed_bcon_since_rx; int stop_consec_missed_bcon; } ;
struct ieee80211_vif {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct ieee80211_vif*) ;
 int FUNC_2 (struct ieee80211_vif*) ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *,struct iwl_fw_dbg_trigger_tlv*,int *) ;
 struct iwl_fw_dbg_trigger_tlv* FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (struct iwl_mvm*,struct ieee80211_vif*,char*) ;
 struct ieee80211_vif* FUNC_7 (struct iwl_mvm*,scalar_t__,int) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 struct iwl_rx_packet* FUNC_11 (struct iwl_rx_cmd_buffer*) ;

void FUNC_12(struct iwl_mvm *VAR_4,
         struct iwl_rx_cmd_buffer *VAR_5)
{
 struct iwl_rx_packet *VAR_6 = FUNC_11(VAR_5);
 struct iwl_missed_beacons_notif *VAR_7 = (void *)VAR_6->data;
 struct iwl_fw_dbg_trigger_missed_bcon *VAR_8;
 struct iwl_fw_dbg_trigger_tlv *VAR_9;
 u32 VAR_10, VAR_11;
 u32 VAR_12, VAR_13;
 struct ieee80211_vif *VAR_14;
 u32 VAR_15 = FUNC_8(VAR_7->mac_id);

 FUNC_0(VAR_4,
         "missed bcn mac_id=%u, consecutive=%u (%u, %u, %u)\n",
         FUNC_8(VAR_7->mac_id),
         FUNC_8(VAR_7->consec_missed_beacons),
         FUNC_8(VAR_7->consec_missed_beacons_since_last_rx),
         FUNC_8(VAR_7->num_recvd_beacons),
         FUNC_8(VAR_7->num_expected_beacons));

 FUNC_9();

 VAR_14 = FUNC_7(VAR_4, VAR_15, 1);
 if (!VAR_14)
  goto out;

 VAR_12 = FUNC_8(VAR_7->consec_missed_beacons);
 VAR_13 =
  FUNC_8(VAR_7->consec_missed_beacons_since_last_rx);




 if (VAR_12 > VAR_3)
  FUNC_6(VAR_4, VAR_14, "missed beacons");
 else if (VAR_13 > VAR_2)
  FUNC_1(VAR_14);

 FUNC_3(&VAR_4->fwrt,
          VAR_1, ((void*)0));

 VAR_9 = FUNC_5(&VAR_4->fwrt, FUNC_2(VAR_14),
     VAR_0);
 if (!VAR_9)
  goto out;

 VAR_8 = (void *)VAR_9->data;
 VAR_10 = FUNC_8(VAR_8->stop_consec_missed_bcon);
 VAR_11 =
  FUNC_8(VAR_8->stop_consec_missed_bcon_since_rx);



 if (VAR_13 >= VAR_11 ||
     VAR_12 >= VAR_10)
  FUNC_4(&VAR_4->fwrt, VAR_9, ((void*)0));

out:
 FUNC_10();
}
