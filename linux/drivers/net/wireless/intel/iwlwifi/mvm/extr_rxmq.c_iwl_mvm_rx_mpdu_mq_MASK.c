
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct napi_struct {int dummy; } ;
struct iwl_rx_packet {int len_n_flags; scalar_t__ data; } ;
struct TYPE_7__ {int channel; int energy_a; int energy_b; int tsf_on_air_rise; int phy_data3; int phy_data2; int phy_data1; int phy_data0; int gp2_on_air_rise; int rate_n_flags; } ;
struct TYPE_6__ {int channel; int energy_a; int energy_b; int tsf_on_air_rise; int phy_data3; int phy_data2; int phy_data1; int phy_data0; int gp2_on_air_rise; int rate_n_flags; } ;
struct iwl_rx_mpdu_desc {int mpdu_len; int phy_info; int mac_flags2; int status; int sta_id_flags; int reorder_data; TYPE_2__ v1; TYPE_1__ v3; int phy_data4; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_mvm_vif {scalar_t__ csa_target_freq; } ;
struct iwl_mvm_sta {struct ieee80211_vif* vif; } ;
struct iwl_mvm_rx_phy_data {int d1; int info_type; int d3; int d2; int d0; int d4; } ;
struct TYPE_8__ {int work; scalar_t__ ts; int paused; } ;
struct iwl_mvm {int ampdu_toggle; scalar_t__ ampdu_ref; int monitor_on; scalar_t__ sched_scan_pass_all; TYPE_5__* trans; int fwrt; TYPE_3__ tcm; int csa_tx_blocked_vif; int hw; int * fw_id_to_mac_id; int status; } ;
struct iwl_fw_dbg_trigger_tlv {scalar_t__ data; } ;
struct iwl_fw_dbg_trigger_low_rssi {int rssi; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_rx_status {int enc_flags; int device_timestamp; scalar_t__ freq; scalar_t__ ampdu_reference; scalar_t__ signal; int rate_idx; int nss; int boottime_ns; int band; int encoding; int flag; int mactime; int bw; } ;
struct ieee80211_hdr {int frame_control; int addr4; int addr3; int addr1; int addr2; } ;
typedef scalar_t__ s32 ;
struct TYPE_10__ {TYPE_4__* trans_cfg; } ;
struct TYPE_9__ {scalar_t__ device_family; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ieee80211_rx_status* FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct ieee80211_sta*) ;
 int FUNC_3 (struct iwl_mvm*,char*,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (struct iwl_mvm*,char*) ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
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
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 scalar_t__ VAR_54 ;
 scalar_t__ VAR_55 ;
 scalar_t__ FUNC_5 (int,char*,int,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 struct sk_buff* FUNC_8 (int,int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int,int ) ;
 struct ieee80211_sta* FUNC_11 (int ,int ,int *) ;
 int* FUNC_12 (struct ieee80211_hdr*) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (struct ieee80211_vif*) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int *,struct iwl_fw_dbg_trigger_tlv*,int *) ;
 struct iwl_fw_dbg_trigger_tlv* FUNC_21 (int *,int ,int ) ;
 int FUNC_22 (struct iwl_mvm*,struct sk_buff*) ;
 int FUNC_23 (struct iwl_mvm*,int,int) ;
 scalar_t__ FUNC_24 (struct iwl_mvm*,struct sk_buff*,struct ieee80211_hdr*,int,int,struct iwl_rx_cmd_buffer*) ;
 int FUNC_25 (struct sk_buff*,struct iwl_mvm_rx_phy_data*) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (struct iwl_mvm*,struct ieee80211_rx_status*,int,int,int) ;
 scalar_t__ FUNC_28 (struct ieee80211_sta*,int,struct ieee80211_rx_status*,struct ieee80211_hdr*,struct iwl_rx_mpdu_desc*) ;
 int FUNC_29 (int,int ) ;
 int FUNC_30 (struct iwl_mvm*,struct napi_struct*,struct sk_buff*,int,struct ieee80211_sta*,int) ;
 int FUNC_31 (struct iwl_mvm*,struct napi_struct*,int,struct ieee80211_sta*,struct sk_buff*,struct iwl_rx_mpdu_desc*) ;
 scalar_t__ FUNC_32 (struct iwl_mvm*,struct ieee80211_hdr*,struct ieee80211_rx_status*,int,struct iwl_rx_mpdu_desc*,int,int,int*) ;
 int FUNC_33 (struct ieee80211_sta*,struct sk_buff*,struct iwl_rx_mpdu_desc*) ;
 int FUNC_34 (struct iwl_mvm*,struct sk_buff*,struct iwl_mvm_rx_phy_data*,int,int,int) ;
 struct iwl_mvm_sta* FUNC_35 (struct ieee80211_sta*) ;
 int FUNC_36 (struct iwl_mvm*,struct ieee80211_sta*,int) ;
 struct iwl_mvm_vif* FUNC_37 (struct ieee80211_vif*) ;
 int VAR_56 ;
 int FUNC_38 (struct sk_buff*) ;
 int FUNC_39 () ;
 int FUNC_40 (int) ;
 int FUNC_41 (int ,int ) ;
 int FUNC_42 (int ) ;
 int FUNC_43 (int ) ;
 scalar_t__ FUNC_44 (int) ;
 void* FUNC_45 (int ) ;
 int FUNC_46 () ;
 int FUNC_47 () ;
 int FUNC_48 (struct iwl_mvm*,struct iwl_mvm_sta*,struct ieee80211_rx_status*) ;
 struct iwl_rx_packet* FUNC_49 (struct iwl_rx_cmd_buffer*) ;
 int FUNC_50 (int *,int ) ;
 int FUNC_51 (struct sk_buff*,int) ;
 int FUNC_52 (int ,int *) ;
 scalar_t__ FUNC_53 (int ,scalar_t__) ;
 scalar_t__ FUNC_54 (int) ;

void FUNC_55(struct iwl_mvm *VAR_57, struct napi_struct *VAR_58,
   struct iwl_rx_cmd_buffer *VAR_59, int VAR_60)
{
 struct ieee80211_rx_status *VAR_61;
 struct iwl_rx_packet *VAR_62 = FUNC_49(VAR_59);
 struct iwl_rx_mpdu_desc *VAR_63 = (void *)VAR_62->data;
 struct ieee80211_hdr *VAR_64;
 u32 VAR_65 = FUNC_40(VAR_63->mpdu_len);
 u32 VAR_66, VAR_67;
 u16 VAR_68 = FUNC_40(VAR_63->phy_info);
 struct ieee80211_sta *VAR_69 = ((void*)0);
 struct sk_buff *VAR_70;
 u8 VAR_71 = 0, VAR_72, VAR_73, VAR_74;
 size_t VAR_75;
 struct iwl_mvm_rx_phy_data VAR_76 = {
  .d4 = VAR_63->phy_data4,
  .info_type = VAR_20,
 };
 bool VAR_77 = 0;

 if (FUNC_54(FUNC_52(VAR_5, &VAR_57->status)))
  return;

 if (VAR_57->trans->trans_cfg->device_family >= VAR_3) {
  VAR_66 = FUNC_42(VAR_63->v3.rate_n_flags);
  VAR_72 = VAR_63->v3.channel;
  VAR_67 = FUNC_42(VAR_63->v3.gp2_on_air_rise);
  VAR_73 = VAR_63->v3.energy_a;
  VAR_74 = VAR_63->v3.energy_b;
  VAR_75 = sizeof(*VAR_63);

  VAR_76.d0 = VAR_63->v3.phy_data0;
  VAR_76.d1 = VAR_63->v3.phy_data1;
  VAR_76.d2 = VAR_63->v3.phy_data2;
  VAR_76.d3 = VAR_63->v3.phy_data3;
 } else {
  VAR_66 = FUNC_42(VAR_63->v1.rate_n_flags);
  VAR_72 = VAR_63->v1.channel;
  VAR_67 = FUNC_42(VAR_63->v1.gp2_on_air_rise);
  VAR_73 = VAR_63->v1.energy_a;
  VAR_74 = VAR_63->v1.energy_b;
  VAR_75 = VAR_6;

  VAR_76.d0 = VAR_63->v1.phy_data0;
  VAR_76.d1 = VAR_63->v1.phy_data1;
  VAR_76.d2 = VAR_63->v1.phy_data2;
  VAR_76.d3 = VAR_63->v1.phy_data3;
 }

 if (VAR_68 & VAR_12)
  VAR_76.info_type =
   FUNC_41(VAR_76.d1,
          VAR_19);

 VAR_64 = (void *)(VAR_62->data + VAR_75);



 VAR_70 = FUNC_8(128, VAR_1);
 if (!VAR_70) {
  FUNC_4(VAR_57, "alloc_skb failed\n");
  return;
 }

 if (VAR_63->mac_flags2 & VAR_8) {






  FUNC_51(VAR_70, 2);
 }

 VAR_61 = FUNC_1(VAR_70);


 switch (VAR_66 & VAR_32) {
 case 130:
  break;
 case 129:
  VAR_61->bw = VAR_28;
  break;
 case 128:
  VAR_61->bw = VAR_29;
  break;
 case 131:
  VAR_61->bw = VAR_27;
  break;
 }

 if (VAR_66 & VAR_33)
  FUNC_34(VAR_57, VAR_70, &VAR_76, VAR_66,
         VAR_68, VAR_60);

 FUNC_25(VAR_70, &VAR_76);

 VAR_61 = FUNC_1(VAR_70);

 if (FUNC_32(VAR_57, VAR_64, VAR_61, VAR_68, VAR_63,
         FUNC_42(VAR_62->len_n_flags), VAR_60,
         &VAR_71)) {
  FUNC_38(VAR_70);
  return;
 }





 if (!(VAR_63->status & FUNC_9(VAR_16)) ||
     !(VAR_63->status & FUNC_9(VAR_17))) {
  FUNC_3(VAR_57, "Bad CRC or FIFO: 0x%08X.\n",
        FUNC_40(VAR_63->status));
  VAR_61->flag |= VAR_52;
 }

 if (VAR_66 & VAR_31 &&
     VAR_68 & VAR_11)
  VAR_61->enc_flags |= VAR_46;

 if (FUNC_44(!(VAR_68 & VAR_12))) {
  u64 VAR_78;

  if (VAR_57->trans->trans_cfg->device_family >=
      VAR_3)
   VAR_78 = FUNC_43(VAR_63->v3.tsf_on_air_rise);
  else
   VAR_78 = FUNC_43(VAR_63->v1.tsf_on_air_rise);

  VAR_61->mactime = VAR_78;

  VAR_61->flag |= VAR_53;
 }

 VAR_61->device_timestamp = VAR_67;
 VAR_61->band = VAR_72 > 14 ? VAR_24 :
  VAR_23;
 VAR_61->freq = FUNC_10(VAR_72,
        VAR_61->band);
 FUNC_27(VAR_57, VAR_61, VAR_66, VAR_73,
        VAR_74);


 if (!VAR_60 && (VAR_68 & VAR_9)) {
  bool VAR_79 = VAR_68 & VAR_10;

  VAR_61->flag |= VAR_51;





  if (VAR_79 != VAR_57->ampdu_toggle) {
   VAR_57->ampdu_ref++;
   if (VAR_57->ampdu_ref == 0)
    VAR_57->ampdu_ref++;
   VAR_57->ampdu_toggle = VAR_79;
  }
  VAR_61->ampdu_reference = VAR_57->ampdu_ref;
 }

 if (FUNC_54(VAR_57->monitor_on))
  FUNC_22(VAR_57, VAR_70);

 FUNC_46();

 if (VAR_63->status & FUNC_9(VAR_18)) {
  u8 VAR_80 = VAR_63->sta_id_flags & VAR_15;

  if (!FUNC_7(VAR_80 >= FUNC_0(VAR_57->fw_id_to_mac_id))) {
   VAR_69 = FUNC_45(VAR_57->fw_id_to_mac_id[VAR_80]);
   if (FUNC_2(VAR_69))
    VAR_69 = ((void*)0);
  }
 } else if (!FUNC_19(VAR_64->addr2)) {




  VAR_69 = FUNC_11(VAR_57->hw, VAR_64->addr2, ((void*)0));
 }

 if (VAR_69) {
  struct iwl_mvm_sta *VAR_81 = FUNC_35(VAR_69);
  struct ieee80211_vif *VAR_82 =
   FUNC_45(VAR_57->csa_tx_blocked_vif);
  u8 VAR_83 = (u8)((FUNC_42(VAR_63->reorder_data) &
          VAR_13) >>
          VAR_14);
  struct iwl_fw_dbg_trigger_tlv *VAR_84;
  struct ieee80211_vif *VAR_85 = VAR_81->vif;

  if (!VAR_57->tcm.paused && VAR_65 >= sizeof(*VAR_64) &&
      !FUNC_19(VAR_64->addr1) &&
      FUNC_15(VAR_64->frame_control) &&
      FUNC_53(VAR_56, VAR_57->tcm.ts + VAR_22))
   FUNC_50(&VAR_57->tcm.work, 0);






  if (FUNC_54(VAR_82) && VAR_82 == VAR_85) {
   struct iwl_mvm_vif *VAR_86 =
    FUNC_37(VAR_82);

   if (VAR_86->csa_target_freq == VAR_61->freq)
    FUNC_36(VAR_57, VAR_69,
         0);
  }

  FUNC_48(VAR_57, VAR_81, VAR_61);

  VAR_84 = FUNC_21(&VAR_57->fwrt,
          FUNC_18(VAR_85),
          VAR_0);

  if (VAR_84 && FUNC_14(VAR_64->frame_control)) {
   struct iwl_fw_dbg_trigger_low_rssi *VAR_87;
   s32 VAR_88;

   VAR_87 = (void *)VAR_84->data;
   VAR_88 = FUNC_42(VAR_87->rssi);

   if (VAR_61->signal < VAR_88)
    FUNC_20(&VAR_57->fwrt, VAR_84,
       ((void*)0));
  }

  if (FUNC_15(VAR_64->frame_control))
   FUNC_33(VAR_69, VAR_70, VAR_63);

  if (FUNC_28(VAR_69, VAR_60, VAR_61, VAR_64, VAR_63)) {
   FUNC_38(VAR_70);
   goto out;
  }







  if ((VAR_63->mac_flags2 & VAR_7) &&
      !FUNC_6(!FUNC_16(VAR_64->frame_control))) {
   u8 *VAR_89 = FUNC_12(VAR_64);

   *VAR_89 &= ~VAR_2;

   if (VAR_57->trans->trans_cfg->device_family ==
       VAR_4) {
    FUNC_26(VAR_64->addr3);

    if (FUNC_13(VAR_64->frame_control))
     FUNC_26(VAR_64->addr4);
   }
  }
  if (VAR_83 != VAR_21) {
   u32 VAR_90 = FUNC_42(VAR_63->reorder_data);

   FUNC_23(VAR_57, VAR_90, VAR_83);
  }
 }

 if (!(VAR_66 & VAR_31) &&
     VAR_66 & VAR_36)
  VAR_61->enc_flags |= VAR_47;
 if (VAR_66 & VAR_25)
  VAR_61->enc_flags |= VAR_44;
 if (VAR_66 & VAR_35)
  VAR_61->enc_flags |= VAR_45;
 if (VAR_66 & VAR_34) {
  u8 VAR_91 = (VAR_66 & VAR_37) >>
    VAR_38;
  VAR_61->encoding = VAR_49;
  VAR_61->rate_idx = VAR_66 & VAR_26;
  VAR_61->enc_flags |= VAR_91 << VAR_48;
 } else if (VAR_66 & VAR_39) {
  u8 VAR_92 = (VAR_66 & VAR_37) >>
    VAR_38;
  VAR_61->nss =
   ((VAR_66 & VAR_40) >>
      VAR_41) + 1;
  VAR_61->rate_idx = VAR_66 & VAR_42;
  VAR_61->encoding = VAR_50;
  VAR_61->enc_flags |= VAR_92 << VAR_48;
  if (VAR_66 & VAR_30)
   VAR_61->enc_flags |= VAR_43;
 } else if (!(VAR_66 & VAR_33)) {
  int VAR_93 = FUNC_29(VAR_66,
              VAR_61->band);

  if (FUNC_5(VAR_93 < 0 || VAR_93 > 0xFF,
    "Invalid rate flags 0x%x, band %d,\n",
    VAR_66, VAR_61->band)) {
   FUNC_38(VAR_70);
   goto out;
  }
  VAR_61->rate_idx = VAR_93;
 }


 if (!VAR_60) {
  if (FUNC_54((FUNC_14(VAR_64->frame_control) ||
         FUNC_17(VAR_64->frame_control)) &&
        VAR_57->sched_scan_pass_all ==
        VAR_54))
   VAR_57->sched_scan_pass_all = VAR_55;

  if (FUNC_54(FUNC_14(VAR_64->frame_control) ||
        FUNC_17(VAR_64->frame_control)))
   VAR_61->boottime_ns = FUNC_39();
 }

 if (FUNC_24(VAR_57, VAR_70, VAR_64, VAR_65, VAR_71, VAR_59)) {
  FUNC_38(VAR_70);
  goto out;
 }

 if (!FUNC_31(VAR_57, VAR_58, VAR_60, VAR_69, VAR_70, VAR_63))
  FUNC_30(VAR_57, VAR_58, VAR_70, VAR_60,
      VAR_69, VAR_77);
out:
 FUNC_47();
}
