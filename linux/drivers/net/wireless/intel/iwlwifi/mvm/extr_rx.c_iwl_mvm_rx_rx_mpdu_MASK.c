
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct napi_struct {int dummy; } ;
struct iwl_rx_phy_info {int phy_flags; int channel; int system_timestamp; int timestamp; int rate_n_flags; } ;
struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rx_mpdu_res_start {int byte_count; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_mvm_vif {scalar_t__ csa_target_freq; } ;
struct iwl_mvm_sta {struct ieee80211_vif* vif; } ;
struct TYPE_2__ {int paused; } ;
struct iwl_mvm {scalar_t__ sched_scan_pass_all; int ampdu_ref; TYPE_1__ tcm; int fwrt; int csa_tx_blocked_vif; int hw; int * fw_id_to_mac_id; struct iwl_rx_phy_info last_phy_info; } ;
struct iwl_fw_dbg_trigger_tlv {scalar_t__ data; } ;
struct iwl_fw_dbg_trigger_low_rssi {int rssi; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_rx_status {int flag; scalar_t__ freq; scalar_t__ signal; int enc_flags; int rate_idx; int nss; int boottime_ns; int band; int encoding; int bw; int ampdu_reference; scalar_t__ mactime; void* device_timestamp; } ;
struct ieee80211_hdr {int frame_control; int addr1; int addr2; } ;
typedef scalar_t__ s32 ;
typedef int __le32 ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_rx_status* FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct ieee80211_sta*) ;
 int FUNC_3 (struct iwl_mvm*,char*,int) ;
 int FUNC_4 (struct iwl_mvm*,char*,int) ;
 int FUNC_5 (struct iwl_mvm*,char*,scalar_t__,unsigned long long) ;
 int FUNC_6 (struct iwl_mvm*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
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
 int VAR_22 ;
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
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ FUNC_7 (int,char*,int,int ) ;
 int FUNC_8 (int) ;
 struct sk_buff* FUNC_9 (int,int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int,int ) ;
 struct ieee80211_sta* FUNC_12 (int ,int ,int *) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (struct ieee80211_vif*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int *,struct iwl_fw_dbg_trigger_tlv*,int *) ;
 struct iwl_fw_dbg_trigger_tlv* FUNC_19 (int *,int ,int ) ;
 int FUNC_20 (struct iwl_mvm*,struct iwl_rx_phy_info*,struct ieee80211_rx_status*) ;
 int FUNC_21 (int,int ) ;
 int FUNC_22 (struct iwl_mvm*,struct ieee80211_sta*,struct napi_struct*,struct sk_buff*,struct ieee80211_hdr*,int,int,struct iwl_rx_cmd_buffer*) ;
 int FUNC_23 (struct ieee80211_sta*,struct sk_buff*,int) ;
 int FUNC_24 (struct iwl_mvm*,struct ieee80211_sta*,struct ieee80211_hdr*,int,struct iwl_rx_phy_info*,int) ;
 scalar_t__ FUNC_25 (struct iwl_mvm*,struct ieee80211_hdr*,struct ieee80211_rx_status*,int,int*) ;
 struct iwl_mvm_sta* FUNC_26 (struct ieee80211_sta*) ;
 int FUNC_27 (struct iwl_mvm*,struct ieee80211_sta*,int) ;
 int FUNC_28 (struct iwl_mvm*,int,int) ;
 struct iwl_mvm_vif* FUNC_29 (struct ieee80211_vif*) ;
 int FUNC_30 (struct sk_buff*) ;
 int FUNC_31 () ;
 int FUNC_32 (int ) ;
 void* FUNC_33 (int ) ;
 int FUNC_34 (int *) ;
 scalar_t__ FUNC_35 (int ) ;
 void* FUNC_36 (int ) ;
 int FUNC_37 () ;
 int FUNC_38 () ;
 int FUNC_39 (struct iwl_mvm*,struct iwl_mvm_sta*,struct ieee80211_rx_status*) ;
 struct iwl_rx_packet* FUNC_40 (struct iwl_rx_cmd_buffer*) ;
 scalar_t__ FUNC_41 (int) ;

void FUNC_42(struct iwl_mvm *VAR_42, struct napi_struct *VAR_43,
   struct iwl_rx_cmd_buffer *VAR_44)
{
 struct ieee80211_hdr *VAR_45;
 struct ieee80211_rx_status *VAR_46;
 struct iwl_rx_packet *VAR_47 = FUNC_40(VAR_44);
 struct iwl_rx_phy_info *VAR_48;
 struct iwl_rx_mpdu_res_start *VAR_49;
 struct ieee80211_sta *VAR_50 = ((void*)0);
 struct sk_buff *VAR_51;
 u32 VAR_52;
 u32 VAR_53;
 u32 VAR_54;
 u8 VAR_55 = 0;

 VAR_48 = &VAR_42->last_phy_info;
 VAR_49 = (struct iwl_rx_mpdu_res_start *)VAR_47->data;
 VAR_45 = (struct ieee80211_hdr *)(VAR_47->data + sizeof(*VAR_49));
 VAR_52 = FUNC_32(VAR_49->byte_count);
 VAR_54 = FUNC_34((__le32 *)
  (VAR_47->data + sizeof(*VAR_49) + VAR_52));




 VAR_51 = FUNC_9(128, VAR_1);
 if (!VAR_51) {
  FUNC_6(VAR_42, "alloc_skb failed\n");
  return;
 }

 VAR_46 = FUNC_1(VAR_51);




 if (FUNC_25(VAR_42, VAR_45, VAR_46, VAR_54,
      &VAR_55)) {
  FUNC_3(VAR_42, "Bad decryption results 0x%08x\n",
          VAR_54);
  FUNC_30(VAR_51);
  return;
 }





 if (!(VAR_54 & VAR_33) ||
     !(VAR_54 & VAR_34)) {
  FUNC_4(VAR_42, "Bad CRC or FIFO: 0x%08X.\n", VAR_54);
  VAR_46->flag |= VAR_30;
 }


 VAR_53 = FUNC_33(VAR_48->rate_n_flags);


 VAR_46->mactime = FUNC_35(VAR_48->timestamp);
 VAR_46->device_timestamp = FUNC_33(VAR_48->system_timestamp);
 VAR_46->band =
  (VAR_48->phy_flags & FUNC_10(VAR_38)) ?
    VAR_2 : VAR_3;
 VAR_46->freq =
  FUNC_11(FUNC_32(VAR_48->channel),
            VAR_46->band);


 VAR_46->flag |= VAR_31;

 FUNC_20(VAR_42, VAR_48, VAR_46);

 FUNC_5(VAR_42, "Rssi %d, TSF %llu\n", VAR_46->signal,
         (unsigned long long)VAR_46->mactime);

 FUNC_37();
 if (VAR_54 & VAR_35) {
  u32 VAR_56 = VAR_54 & VAR_36;

  VAR_56 >>= VAR_32;

  if (!FUNC_8(VAR_56 >= FUNC_0(VAR_42->fw_id_to_mac_id))) {
   VAR_50 = FUNC_36(VAR_42->fw_id_to_mac_id[VAR_56]);
   if (FUNC_2(VAR_50))
    VAR_50 = ((void*)0);
  }
 } else if (!FUNC_17(VAR_45->addr2)) {



  VAR_50 = FUNC_12(VAR_42->hw, VAR_45->addr2, ((void*)0));
 }

 if (VAR_50) {
  struct iwl_mvm_sta *VAR_57 = FUNC_26(VAR_50);
  struct ieee80211_vif *VAR_58 =
   FUNC_36(VAR_42->csa_tx_blocked_vif);
  struct iwl_fw_dbg_trigger_tlv *VAR_59;
  struct ieee80211_vif *VAR_60 = VAR_57->vif;





  if (FUNC_41(VAR_58) && VAR_60 == VAR_58) {
   struct iwl_mvm_vif *VAR_61 =
    FUNC_29(VAR_58);

   if (VAR_61->csa_target_freq == VAR_46->freq)
    FUNC_27(VAR_42, VAR_50,
         0);
  }

  FUNC_39(VAR_42, VAR_57, VAR_46);

  VAR_59 = FUNC_19(&VAR_42->fwrt,
          FUNC_16(VAR_60),
          VAR_0);

  if (VAR_59 && FUNC_13(VAR_45->frame_control)) {
   struct iwl_fw_dbg_trigger_low_rssi *VAR_62;
   s32 VAR_63;

   VAR_62 = (void *)VAR_59->data;
   VAR_63 = FUNC_33(VAR_62->rssi);

   if (VAR_46->signal < VAR_63)
    FUNC_18(&VAR_42->fwrt, VAR_59,
       ((void*)0));
  }

  if (!VAR_42->tcm.paused && VAR_52 >= sizeof(*VAR_45) &&
      !FUNC_17(VAR_45->addr1) &&
      FUNC_14(VAR_45->frame_control))
   FUNC_24(VAR_42, VAR_50, VAR_45, VAR_52, VAR_48,
           VAR_53);

  if (FUNC_14(VAR_45->frame_control))
   FUNC_23(VAR_50, VAR_51, VAR_54);
 }
 FUNC_38();


 if (VAR_48->phy_flags & FUNC_10(VAR_39))
  VAR_46->enc_flags |= VAR_24;

 if (VAR_48->phy_flags & FUNC_10(VAR_37)) {





  VAR_46->flag |= VAR_29;
  VAR_46->ampdu_reference = VAR_42->ampdu_ref;
 }


 switch (VAR_53 & VAR_11) {
 case 130:
  break;
 case 129:
  VAR_46->bw = VAR_7;
  break;
 case 128:
  VAR_46->bw = VAR_8;
  break;
 case 131:
  VAR_46->bw = VAR_6;
  break;
 }
 if (!(VAR_53 & VAR_10) &&
     VAR_53 & VAR_14)
  VAR_46->enc_flags |= VAR_25;
 if (VAR_53 & VAR_4)
  VAR_46->enc_flags |= VAR_22;
 if (VAR_53 & VAR_13)
  VAR_46->enc_flags |= VAR_23;
 if (VAR_53 & VAR_12) {
  u8 VAR_64 = (VAR_53 & VAR_15) >>
    VAR_16;
  VAR_46->encoding = VAR_27;
  VAR_46->rate_idx = VAR_53 & VAR_5;
  VAR_46->enc_flags |= VAR_64 << VAR_26;
 } else if (VAR_53 & VAR_17) {
  u8 VAR_65 = (VAR_53 & VAR_15) >>
    VAR_16;
  VAR_46->nss =
   ((VAR_53 & VAR_18) >>
      VAR_19) + 1;
  VAR_46->rate_idx = VAR_53 & VAR_20;
  VAR_46->encoding = VAR_28;
  VAR_46->enc_flags |= VAR_65 << VAR_26;
  if (VAR_53 & VAR_9)
   VAR_46->enc_flags |= VAR_21;
 } else {
  int VAR_66 = FUNC_21(VAR_53,
              VAR_46->band);

  if (FUNC_7(VAR_66 < 0 || VAR_66 > 0xFF,
    "Invalid rate flags 0x%x, band %d,\n",
    VAR_53, VAR_46->band)) {
   FUNC_30(VAR_51);
   return;
  }
  VAR_46->rate_idx = VAR_66;
 }






 if (FUNC_41((FUNC_13(VAR_45->frame_control) ||
        FUNC_15(VAR_45->frame_control)) &&
       VAR_42->sched_scan_pass_all == VAR_40))
  VAR_42->sched_scan_pass_all = VAR_41;

 if (FUNC_41(FUNC_13(VAR_45->frame_control) ||
       FUNC_15(VAR_45->frame_control)))
  VAR_46->boottime_ns = FUNC_31();

 FUNC_22(VAR_42, VAR_50, VAR_43, VAR_51, VAR_45, VAR_52,
     VAR_55, VAR_44);
}
