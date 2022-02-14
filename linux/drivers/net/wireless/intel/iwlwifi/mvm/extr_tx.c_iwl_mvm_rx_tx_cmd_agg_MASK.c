
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u16 ;
struct TYPE_3__ {int sequence; } ;
struct iwl_rx_packet {TYPE_1__ hdr; scalar_t__ data; } ;
struct iwl_mvm_tx_resp {int wireless_media_time; int tlc_info; int initial_rate; int ra_tid; } ;
struct iwl_mvm_sta {TYPE_2__* tid_data; } ;
struct iwl_mvm {int * fw_id_to_mac_id; } ;
struct ieee80211_sta {int wme; } ;
struct TYPE_4__ {int lq_color; void* tx_time; int rate_n_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct iwl_mvm*,struct iwl_rx_packet*) ;
 struct iwl_mvm_sta* FUNC_6 (struct iwl_mvm*,int) ;
 int FUNC_7 (struct iwl_mvm*,struct iwl_mvm_sta*,void*) ;
 void* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 struct ieee80211_sta* FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 () ;

__attribute__((used)) static void FUNC_13(struct iwl_mvm *VAR_2,
      struct iwl_rx_packet *VAR_3)
{
 struct iwl_mvm_tx_resp *VAR_4 = (void *)VAR_3->data;
 int VAR_5 = FUNC_0(VAR_4->ra_tid);
 int VAR_6 = FUNC_1(VAR_4->ra_tid);
 u16 VAR_7 = FUNC_8(VAR_3->hdr.sequence);
 struct iwl_mvm_sta *VAR_8;
 int VAR_9 = FUNC_2(VAR_7);
 struct ieee80211_sta *VAR_10;

 if (FUNC_4(VAR_9 < VAR_1 &&
    (VAR_9 != VAR_0)))
  return;

 FUNC_5(VAR_2, VAR_3);

 FUNC_11();

 VAR_8 = FUNC_6(VAR_2, VAR_5);

 VAR_10 = FUNC_10(VAR_2->fw_id_to_mac_id[VAR_5]);
 if (FUNC_4(!VAR_10 || !VAR_10->wme)) {
  FUNC_12();
  return;
 }

 if (!FUNC_4(!VAR_8)) {
  VAR_8->tid_data[VAR_6].rate_n_flags =
   FUNC_9(VAR_4->initial_rate);
  VAR_8->tid_data[VAR_6].tx_time =
   FUNC_8(VAR_4->wireless_media_time);
  VAR_8->tid_data[VAR_6].lq_color =
   FUNC_3(VAR_4->tlc_info);
  FUNC_7(VAR_2, VAR_8,
       FUNC_8(VAR_4->wireless_media_time));
 }

 FUNC_12();
}
