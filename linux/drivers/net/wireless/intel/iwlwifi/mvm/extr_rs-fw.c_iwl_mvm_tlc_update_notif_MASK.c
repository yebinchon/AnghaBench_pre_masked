
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct iwl_tlc_update_notif {size_t sta_id; int amsdu_size; int amsdu_enabled; int rate; int flags; } ;
struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_lq_sta_rs_fw {void* last_rate_n_flags; } ;
struct TYPE_2__ {struct iwl_lq_sta_rs_fw rs_fw; } ;
struct iwl_mvm_sta {int amsdu_enabled; scalar_t__ max_amsdu_len; int orig_amsdu_len; TYPE_1__ lq_sta; } ;
struct iwl_mvm {int * fw_id_to_mac_id; } ;
struct ieee80211_sta {scalar_t__ max_amsdu_len; int* max_tid_amsdu_len; scalar_t__ max_rc_amsdu_len; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct ieee80211_sta*) ;
 int FUNC_2 (struct iwl_mvm*,char*,void*,...) ;
 int FUNC_3 (struct iwl_mvm*,char*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct iwl_mvm*,struct ieee80211_sta*,int) ;
 struct iwl_mvm_sta* FUNC_6 (struct ieee80211_sta*) ;
 void* FUNC_7 (int ) ;
 struct ieee80211_sta* FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 struct iwl_rx_packet* FUNC_11 (struct iwl_rx_cmd_buffer*) ;

void FUNC_12(struct iwl_mvm *VAR_3,
         struct iwl_rx_cmd_buffer *VAR_4)
{
 struct iwl_rx_packet *VAR_5 = FUNC_11(VAR_4);
 struct iwl_tlc_update_notif *VAR_6;
 struct ieee80211_sta *VAR_7;
 struct iwl_mvm_sta *VAR_8;
 struct iwl_lq_sta_rs_fw *VAR_9;
 u32 VAR_10;

 FUNC_9();

 VAR_6 = (void *)VAR_5->data;
 VAR_7 = FUNC_8(VAR_3->fw_id_to_mac_id[VAR_6->sta_id]);
 if (FUNC_1(VAR_7)) {
  FUNC_3(VAR_3, "Invalid sta id (%d) in FW TLC notification\n",
   VAR_6->sta_id);
  goto out;
 }

 VAR_8 = FUNC_6(VAR_7);

 if (!VAR_8) {
  FUNC_3(VAR_3, "Invalid sta id (%d) in FW TLC notification\n",
   VAR_6->sta_id);
  goto out;
 }

 VAR_10 = FUNC_7(VAR_6->flags);

 VAR_9 = &VAR_8->lq_sta.rs_fw;

 if (VAR_10 & VAR_2) {
  VAR_9->last_rate_n_flags = FUNC_7(VAR_6->rate);
  FUNC_2(VAR_3, "new rate_n_flags: 0x%X\n",
          VAR_9->last_rate_n_flags);
 }

 if (VAR_10 & VAR_1 && !VAR_8->orig_amsdu_len) {
  u16 VAR_11 = FUNC_7(VAR_6->amsdu_size);
  int VAR_12;

  if (FUNC_4(VAR_7->max_amsdu_len < VAR_11))
   goto out;

  VAR_8->amsdu_enabled = FUNC_7(VAR_6->amsdu_enabled);
  VAR_8->max_amsdu_len = VAR_11;
  VAR_7->max_rc_amsdu_len = VAR_8->max_amsdu_len;

  for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
   if (VAR_8->amsdu_enabled & FUNC_0(VAR_12))
    VAR_7->max_tid_amsdu_len[VAR_12] =
     FUNC_5(VAR_3, VAR_7, VAR_12);
   else




    VAR_7->max_tid_amsdu_len[VAR_12] = 1;
  }

  FUNC_2(VAR_3,
          "AMSDU update. AMSDU size: %d, AMSDU selected size: %d, AMSDU TID bitmap 0x%X\n",
          FUNC_7(VAR_6->amsdu_size), VAR_11,
          VAR_8->amsdu_enabled);
 }
out:
 FUNC_10();
}
