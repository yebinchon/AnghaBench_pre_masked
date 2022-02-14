
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u64 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_mvm {int * fw_id_to_mac_id; } ;
struct iwl_ba_window_status_notif {int * start_seq_num; int * bitmap; int * mpdu_rx_count; int * ra_tid; } ;
struct ieee80211_sta {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct ieee80211_sta*) ;
 scalar_t__ FUNC_1 (int,char*,int) ;
 int FUNC_2 (struct ieee80211_sta*,size_t,int,int ,scalar_t__) ;
 int FUNC_3 (struct iwl_rx_packet*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct ieee80211_sta* FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 struct iwl_rx_packet* FUNC_10 (struct iwl_rx_cmd_buffer*) ;

void FUNC_11(struct iwl_mvm *VAR_5,
     struct iwl_rx_cmd_buffer *VAR_6)
{
 struct iwl_rx_packet *VAR_7 = FUNC_10(VAR_6);
 struct iwl_ba_window_status_notif *VAR_8 = (void *)VAR_7->data;
 int VAR_9;
 u32 VAR_10 = FUNC_3(VAR_7);

 if (FUNC_1(VAR_10 != sizeof(*VAR_8),
        "Received window status notification of wrong size (%u)\n",
        VAR_10))
  return;

 FUNC_8();
 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  struct ieee80211_sta *VAR_11;
  u8 VAR_12, VAR_13;
  u64 VAR_14;
  u32 VAR_15;
  u16 VAR_16;
  u16 VAR_17;

  VAR_16 = FUNC_4(VAR_8->ra_tid[VAR_9]);

  if (!(VAR_16 & VAR_3))
   continue;

  VAR_17 = FUNC_4(VAR_8->mpdu_rx_count[VAR_9]);
  if (VAR_17 == 0)
   continue;

  VAR_13 = VAR_16 & VAR_2;

  VAR_12 = (VAR_16 & VAR_0)
    >> VAR_1;
  VAR_11 = FUNC_7(VAR_5->fw_id_to_mac_id[VAR_12]);
  if (FUNC_0(VAR_11))
   continue;
  VAR_14 = FUNC_6(VAR_8->bitmap[VAR_9]);
  VAR_15 = FUNC_5(VAR_8->start_seq_num[VAR_9]);


  FUNC_2(VAR_11, VAR_13, VAR_15, VAR_14,
           VAR_17);
 }
 FUNC_9();
}
