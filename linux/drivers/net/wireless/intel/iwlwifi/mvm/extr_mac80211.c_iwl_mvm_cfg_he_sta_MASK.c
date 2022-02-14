
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct iwl_mvm_vif {TYPE_1__* queue_params; scalar_t__ he_ru_2mhz_block; } ;
struct iwl_mvm {int * fw_id_to_mac_id; TYPE_4__* fw; } ;
struct iwl_he_sta_context_cmd_v1 {int dummy; } ;
struct TYPE_14__ {void**** pkt_ext_qam_th; } ;
struct iwl_he_sta_context_cmd {int sta_id; void* frame_time_rts_th; int rand_alloc_ecwmin; int rand_alloc_ecwmax; int flags; int profile_periodicity; int ema_ap; int bssid_index; int max_bssid_indicator; int ref_bssid_addr; TYPE_2__* trig_based_txf; TYPE_7__ pkt_ext; int htc_flags; int htc_trig_based_pkt_ext; int bss_color; int tid_limit; } ;
struct iwl_he_pkt_ext {int*** pkt_ext_qam_th; } ;
struct TYPE_10__ {int frame_time_rts_th; int uora_ocw_range; int profile_periodicity; int ema_ap; int bssid_index; int bssid_indicator; int transmitter_bssid; scalar_t__ nontransmitted; scalar_t__ uora_exists; scalar_t__ ack_enabled; scalar_t__ multi_sta_back_32bit; int htc_trig_based_pkt_ext; int bss_color; } ;
struct ieee80211_vif {TYPE_3__ bss_conf; } ;
struct TYPE_12__ {int* mac_cap_info; int* phy_cap_info; } ;
struct TYPE_13__ {int* ppe_thres; TYPE_5__ he_cap_elem; int has_he; } ;
struct ieee80211_sta {TYPE_6__ he_cap; } ;
struct ieee80211_he_mu_edca_param_ac_rec {int ecw_min_max; int aifsn; int mu_edca_timer; } ;
typedef int sta_ctxt_cmd ;
struct TYPE_11__ {int ucode_capa; } ;
struct TYPE_9__ {void* mu_time; void* aifsn; void* cwmax; void* cwmin; } ;
struct TYPE_8__ {int mu_edca; struct ieee80211_he_mu_edca_param_ac_rec mu_edca_param_rec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_0 (struct ieee80211_sta*) ;
 int FUNC_1 (struct iwl_mvm*,char*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_2 (struct iwl_mvm*,char*,int,int) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_3 (int,char*) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 void* FUNC_9 (int*,int) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (struct iwl_mvm*,int ,int ,int,struct iwl_he_sta_context_cmd*) ;
 struct iwl_mvm_vif* FUNC_12 (struct ieee80211_vif*) ;
 int FUNC_13 (TYPE_7__*,int,int) ;
 struct ieee80211_sta* FUNC_14 (int ) ;
 int FUNC_15 () ;
 int FUNC_16 () ;

__attribute__((used)) static void FUNC_17(struct iwl_mvm *VAR_35,
          struct ieee80211_vif *VAR_36, u8 VAR_37)
{
 struct iwl_mvm_vif *VAR_38 = FUNC_12(VAR_36);
 struct iwl_he_sta_context_cmd VAR_39 = {
  .sta_id = VAR_37,
  .tid_limit = VAR_23,
  .bss_color = VAR_36->bss_conf.bss_color,
  .htc_trig_based_pkt_ext = VAR_36->bss_conf.htc_trig_based_pkt_ext,
  .frame_time_rts_th =
   FUNC_4(VAR_36->bss_conf.frame_time_rts_th),
 };
 int VAR_40 = FUNC_7(&VAR_35->fw->ucode_capa,
         VAR_24) ?
     sizeof(VAR_39) :
     sizeof(struct iwl_he_sta_context_cmd_v1);
 struct ieee80211_sta *VAR_41;
 u32 VAR_42;
 int VAR_43;

 FUNC_15();

 VAR_41 = FUNC_14(VAR_35->fw_id_to_mac_id[VAR_39.sta_id]);
 if (FUNC_0(VAR_41)) {
  FUNC_16();
  FUNC_3(1, "Can't find STA to configure HE\n");
  return;
 }

 if (!VAR_41->he_cap.has_he) {
  FUNC_16();
  return;
 }

 VAR_42 = 0;


 if (VAR_38->he_ru_2mhz_block)
  VAR_42 |= VAR_32;


 if (VAR_41->he_cap.he_cap_elem.mac_cap_info[0] &
     VAR_1)
  VAR_39.htc_flags |= FUNC_5(VAR_20);
 if ((VAR_41->he_cap.he_cap_elem.mac_cap_info[1] &
       VAR_2) ||
     (VAR_41->he_cap.he_cap_elem.mac_cap_info[2] &
       VAR_4)) {
  u8 VAR_44 =
   ((VAR_41->he_cap.he_cap_elem.mac_cap_info[2] &
     VAR_4) << 1) +
    (VAR_41->he_cap.he_cap_elem.mac_cap_info[1] &
     VAR_2);

  if (VAR_44 == 2)
   VAR_39.htc_flags |=
    FUNC_5(VAR_18);
  else if (VAR_44 == 3)
   VAR_39.htc_flags |=
    FUNC_5(VAR_17);
 }
 if (VAR_41->he_cap.he_cap_elem.mac_cap_info[2] & VAR_3)
  VAR_39.htc_flags |= FUNC_5(VAR_16);
 if (VAR_41->he_cap.he_cap_elem.mac_cap_info[3] &
     VAR_5)
  VAR_39.htc_flags |= FUNC_5(VAR_19);
 if (VAR_41->he_cap.he_cap_elem.mac_cap_info[4] & VAR_6)
  VAR_39.htc_flags |= FUNC_5(VAR_15);





 FUNC_13(&VAR_39.pkt_ext, 7, sizeof(VAR_39.pkt_ext));


 if (VAR_41->he_cap.he_cap_elem.phy_cap_info[6] &
     VAR_7) {
  u8 VAR_45 = (VAR_41->he_cap.ppe_thres[0] &
     VAR_12) + 1;
  u8 VAR_46 =
   (VAR_41->he_cap.ppe_thres[0] &
    VAR_13) >>
   VAR_14;
  u8 *VAR_47 = &VAR_41->he_cap.ppe_thres[0];
  u8 VAR_48 = 7;







  if (VAR_45 > VAR_26) {
   FUNC_2(VAR_35, "Got NSS = %d - trimming to %d\n", VAR_45,
     VAR_26);
   VAR_45 = VAR_26;
  }

  for (VAR_43 = 0; VAR_43 < VAR_45; VAR_43++) {
   u8 VAR_49 = VAR_46 << 1;
   u8 VAR_50;

   for (VAR_50 = 0; VAR_50 < VAR_25; VAR_50++) {
    VAR_49 >>= 1;
    if (!(VAR_49 & 1))
     continue;

    VAR_39.pkt_ext.pkt_ext_qam_th[VAR_43][VAR_50][1] =
     FUNC_9(VAR_47,
              VAR_48);
    VAR_48 +=
     VAR_11;
    VAR_39.pkt_ext.pkt_ext_qam_th[VAR_43][VAR_50][0] =
     FUNC_9(VAR_47,
              VAR_48);
    VAR_48 +=
     VAR_11;
   }
  }

  VAR_42 |= VAR_30;
 } else if ((VAR_41->he_cap.he_cap_elem.phy_cap_info[9] &
      VAR_8) !=
    VAR_9) {
  int VAR_51 = -1;
  int VAR_52 = -1;


  switch (VAR_41->he_cap.he_cap_elem.phy_cap_info[9] &
   VAR_8) {
  case 130:
   VAR_51 = VAR_22;
   VAR_52 = VAR_22;
   break;
  case 128:
   VAR_51 = VAR_21;
   VAR_52 = VAR_22;
   break;
  case 129:
   VAR_51 = VAR_22;
   VAR_52 = VAR_21;
   break;
  }


  if (VAR_51 >= 0 && VAR_52 >= 0) {
   struct iwl_he_pkt_ext *VAR_53 =
    (struct iwl_he_pkt_ext *)&VAR_39.pkt_ext;

   for (VAR_43 = 0; VAR_43 < VAR_26; VAR_43++) {
    u8 VAR_54;

    for (VAR_54 = 0; VAR_54 < VAR_25;
         VAR_54++) {
     VAR_53->pkt_ext_qam_th[VAR_43][VAR_54][0] =
      VAR_51;
     VAR_53->pkt_ext_qam_th[VAR_43][VAR_54][1] =
      VAR_52;
    }
   }

   VAR_42 |= VAR_30;
  }
 }
 FUNC_16();


 VAR_42 |= VAR_29;
 for (VAR_43 = 0; VAR_43 < VAR_10; VAR_43++) {
  struct ieee80211_he_mu_edca_param_ac_rec *VAR_55 =
   &VAR_38->queue_params[VAR_43].mu_edca_param_rec;
  u8 VAR_56 = FUNC_10(VAR_43);

  if (!VAR_38->queue_params[VAR_43].mu_edca) {
   VAR_42 &= ~VAR_29;
   break;
  }

  VAR_39.trig_based_txf[VAR_56].cwmin =
   FUNC_4(VAR_55->ecw_min_max & 0xf);
  VAR_39.trig_based_txf[VAR_56].cwmax =
   FUNC_4((VAR_55->ecw_min_max & 0xf0) >> 4);
  VAR_39.trig_based_txf[VAR_56].aifsn =
   FUNC_4(VAR_55->aifsn);
  VAR_39.trig_based_txf[VAR_56].mu_time =
   FUNC_4(VAR_55->mu_edca_timer);
 }

 if (VAR_36->bss_conf.multi_sta_back_32bit)
  VAR_42 |= VAR_27;

 if (VAR_36->bss_conf.ack_enabled)
  VAR_42 |= VAR_28;

 if (VAR_36->bss_conf.uora_exists) {
  VAR_42 |= VAR_33;

  VAR_39.rand_alloc_ecwmin =
   VAR_36->bss_conf.uora_ocw_range & 0x7;
  VAR_39.rand_alloc_ecwmax =
   (VAR_36->bss_conf.uora_ocw_range >> 3) & 0x7;
 }

 if (VAR_36->bss_conf.nontransmitted) {
  VAR_42 |= VAR_31;
  FUNC_6(VAR_39.ref_bssid_addr,
    VAR_36->bss_conf.transmitter_bssid);
  VAR_39.max_bssid_indicator =
   VAR_36->bss_conf.bssid_indicator;
  VAR_39.bssid_index = VAR_36->bss_conf.bssid_index;
  VAR_39.ema_ap = VAR_36->bss_conf.ema_ap;
  VAR_39.profile_periodicity =
   VAR_36->bss_conf.profile_periodicity;
 }

 VAR_39.flags = FUNC_5(VAR_42);

 if (FUNC_11(VAR_35, FUNC_8(VAR_34,
       VAR_0, 0),
     0, VAR_40, &VAR_39))
  FUNC_1(VAR_35, "Failed to config FW to work HE!\n");
}
