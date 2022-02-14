
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct tx_desc_92c {int dummy; } ;
struct sk_buff {scalar_t__ len; int data; } ;
struct rtl_tcb_desc {scalar_t__ ratr_index; scalar_t__ mac_id; scalar_t__ use_driver_rate; scalar_t__ packet_bw; scalar_t__ rts_use_shortgi; scalar_t__ rts_use_shortpreamble; int rts_rate; int rts_sc; scalar_t__ rts_stbc; scalar_t__ cts_enable; scalar_t__ rts_enable; scalar_t__ use_shortpreamble; scalar_t__ use_shortgi; int hw_rate; } ;
struct rtl_ps_ctl {scalar_t__ fwctrl_lps; } ;
struct TYPE_6__ {scalar_t__ useramask; } ;
struct rtl_priv {TYPE_3__ dm; } ;
struct rtl_pci {int pdev; } ;
struct rtl_mac {scalar_t__ opmode; int bw_40; int cur_40_prime_sc; scalar_t__ rdg_en; int bssid; int vif; } ;
struct TYPE_5__ {struct ieee80211_key_conf* hw_key; } ;
struct ieee80211_tx_info {int flags; TYPE_2__ control; } ;
struct TYPE_4__ {int ampdu_density; } ;
struct ieee80211_sta {scalar_t__ bandwidth; TYPE_1__ ht_cap; } ;
struct ieee80211_key_conf {int cipher; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_hdr {int frame_control; int seq_ctrl; } ;
typedef int dma_addr_t ;
typedef int __le32 ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int VAR_13 ;




 int FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ) ;
 struct ieee80211_sta* FUNC_4 (struct ieee80211_hw*,int ,int ) ;
 int FUNC_5 (struct ieee80211_hdr*) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ,scalar_t__,int ) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 (struct ieee80211_hw*,struct ieee80211_tx_info*,struct ieee80211_sta*,struct sk_buff*,struct rtl_tcb_desc*) ;
 struct rtl_mac* FUNC_17 (struct rtl_priv*) ;
 struct rtl_pci* FUNC_18 (int ) ;
 int FUNC_19 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_20 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_21 (struct rtl_priv*) ;
 int FUNC_22 (int *,int) ;
 int FUNC_23 (int *,int) ;
 int FUNC_24 (int *,int) ;
 int FUNC_25 (int *,int) ;
 int FUNC_26 (int *,int) ;
 int FUNC_27 (int *,int) ;
 int FUNC_28 (int *,int) ;
 int FUNC_29 (int *,int ) ;
 int FUNC_30 (int *,int) ;
 int FUNC_31 (int *,int) ;
 int FUNC_32 (int *,int) ;
 int FUNC_33 (int *,int) ;
 int FUNC_34 (int *,int) ;
 int FUNC_35 (int *,int ) ;
 int FUNC_36 (int *,scalar_t__) ;
 int FUNC_37 (int *,int) ;
 int FUNC_38 (int *,int) ;
 int FUNC_39 (int *,int ) ;
 int FUNC_40 (int *,int) ;
 int FUNC_41 (int *,int) ;
 int FUNC_42 (int *,int) ;
 int FUNC_43 (int *,int) ;
 int FUNC_44 (int *,scalar_t__) ;
 int FUNC_45 (int *,int) ;
 int FUNC_46 (int *,int ) ;
 int FUNC_47 (int *,int) ;
 int FUNC_48 (int *,int ) ;
 int FUNC_49 (int *,int) ;
 int FUNC_50 (int *,int ) ;
 int FUNC_51 (int *,int) ;
 int FUNC_52 (int *,int) ;
 int FUNC_53 (int *,int) ;
 int FUNC_54 (int *,int) ;
 int FUNC_55 (int *,int ) ;
 int FUNC_56 (int *,int) ;
 int FUNC_57 (int *,int ) ;
 int FUNC_58 (int *,int) ;
 int FUNC_59 (int *,int) ;

void FUNC_60(struct ieee80211_hw *VAR_14,
     struct ieee80211_hdr *VAR_15, u8 *VAR_16,
     u8 *VAR_17, struct ieee80211_tx_info *VAR_18,
     struct ieee80211_sta *VAR_19,
     struct sk_buff *VAR_20,
     u8 VAR_21, struct rtl_tcb_desc *VAR_22)
{
 struct rtl_priv *VAR_23 = FUNC_20(VAR_14);
 struct rtl_mac *VAR_24 = FUNC_17(FUNC_20(VAR_14));
 struct rtl_pci *VAR_25 = FUNC_18(FUNC_19(VAR_14));
 struct rtl_ps_ctl *VAR_26 = FUNC_21(FUNC_20(VAR_14));
 bool VAR_27 = 1;
 __le32 *VAR_28 = (__le32 *)VAR_16;
 u16 VAR_29;
 __le16 VAR_30 = VAR_15->frame_control;
 u8 VAR_31 = FUNC_1(VAR_20, VAR_21);
 bool VAR_32 = ((VAR_15->seq_ctrl &
     FUNC_3(VAR_4)) == 0);

 bool VAR_33 = ((VAR_15->frame_control &
    FUNC_3(VAR_3)) == 0);

 dma_addr_t VAR_34 = FUNC_13(VAR_25->pdev,
         VAR_20->data, VAR_20->len,
         VAR_12);

 u8 VAR_35 = 0;

 if (FUNC_12(VAR_25->pdev, VAR_34)) {
  FUNC_0(VAR_23, VAR_0, VAR_1,
    "DMA mapping error\n");
  return;
 }
 FUNC_14();
 VAR_19 = FUNC_4(VAR_14, VAR_24->vif, VAR_24->bssid);
 if (VAR_24->opmode == VAR_11) {
  VAR_35 = VAR_24->bw_40;
 } else if (VAR_24->opmode == VAR_9 ||
     VAR_24->opmode == VAR_8 ||
     VAR_24->opmode == VAR_10) {
  if (VAR_19)
   VAR_35 = VAR_19->bandwidth >= VAR_6;
 }

 VAR_29 = (FUNC_11(VAR_15->seq_ctrl) & VAR_5) >> 4;

 FUNC_16(VAR_14, VAR_18, VAR_19, VAR_20, VAR_22);

 FUNC_2(VAR_28, sizeof(struct tx_desc_92c));

 if (FUNC_8(VAR_30) || FUNC_6(VAR_30)) {
  VAR_32 = 1;
  VAR_33 = 1;
 }
 if (VAR_32) {
  FUNC_39(VAR_28, VAR_13);

  FUNC_57(VAR_28, VAR_22->hw_rate);

  if (VAR_22->use_shortgi || VAR_22->use_shortpreamble)
   FUNC_28(VAR_28, 1);

  if (VAR_18->flags & VAR_7) {
   FUNC_22(VAR_28, 1);
   FUNC_37(VAR_28, 0x14);
  }
  FUNC_54(VAR_28, VAR_29);

  FUNC_47(VAR_28, ((VAR_22->rts_enable &&
      !VAR_22->
      cts_enable) ? 1 : 0));
  FUNC_32(VAR_28,
       ((VAR_22->rts_enable
         || VAR_22->cts_enable) ? 1 : 0));
  FUNC_25(VAR_28, ((VAR_22->cts_enable) ? 1 : 0));
  FUNC_52(VAR_28, ((VAR_22->rts_stbc) ? 1 : 0));

  FUNC_48(VAR_28, VAR_22->rts_rate);
  FUNC_46(VAR_28, 0);
  FUNC_50(VAR_28, VAR_22->rts_sc);
  FUNC_51(VAR_28,
          ((VAR_22->rts_rate <= VAR_2) ?
           (VAR_22->rts_use_shortpreamble ? 1 : 0)
           : (VAR_22->rts_use_shortgi ? 1 : 0)));

  if (VAR_35) {
   if (VAR_22->packet_bw) {
    FUNC_26(VAR_28, 1);
    FUNC_58(VAR_28, 3);
   } else {
    FUNC_26(VAR_28, 0);
    FUNC_58(VAR_28,
       VAR_24->cur_40_prime_sc);
   }
  } else {
   FUNC_26(VAR_28, 0);
   FUNC_58(VAR_28, 0);
  }

  FUNC_35(VAR_28, 0);
  FUNC_41(VAR_28, (u16)VAR_20->len);

  if (VAR_19) {
   u8 VAR_36 = VAR_19->ht_cap.ampdu_density;

   FUNC_23(VAR_28, VAR_36);
  }

  if (VAR_18->control.hw_key) {
   struct ieee80211_key_conf *VAR_37 =
       VAR_18->control.hw_key;

   switch (VAR_37->cipher) {
   case 128:
   case 129:
   case 130:
    FUNC_53(VAR_28, 0x1);
    break;
   case 131:
    FUNC_53(VAR_28, 0x3);
    break;
   default:
    FUNC_53(VAR_28, 0x0);
    break;

   }
  }

  FUNC_40(VAR_28, 0);
  FUNC_43(VAR_28, VAR_31);

  FUNC_27(VAR_28, 0x1F);
  FUNC_49(VAR_28, 0xF);
  FUNC_29(VAR_28, 0);
  FUNC_59(VAR_28, VAR_22->use_driver_rate ? 1 : 0);

  if (FUNC_7(VAR_30)) {
   if (VAR_24->rdg_en) {
    FUNC_0(VAR_23, VAR_0, VAR_1,
      "Enable RDG function\n");
    FUNC_45(VAR_28, 1);
    FUNC_31(VAR_28, 1);
   }
  }
 }
 FUNC_15();

 FUNC_30(VAR_28, (VAR_32 ? 1 : 0));
 FUNC_34(VAR_28, (VAR_33 ? 1 : 0));

 FUNC_56(VAR_28, (u16)VAR_20->len);

 FUNC_55(VAR_28, VAR_34);

 if (VAR_23->dm.useramask) {
  FUNC_44(VAR_28, VAR_22->ratr_index);
  FUNC_36(VAR_28, VAR_22->mac_id);
 } else {
  FUNC_44(VAR_28, 0xC + VAR_22->ratr_index);
  FUNC_36(VAR_28, VAR_22->ratr_index);
 }

 if ((!FUNC_7(VAR_30)) && VAR_26->fwctrl_lps) {
  FUNC_33(VAR_28, 1);
  FUNC_40(VAR_28, 8);

  if (!VAR_27)
   FUNC_42(VAR_28, 1);
 }

 FUNC_38(VAR_28, (VAR_33 ? 0 : 1));

 if (FUNC_10(FUNC_5(VAR_15)) ||
     FUNC_9(FUNC_5(VAR_15))) {
  FUNC_24(VAR_28, 1);
 }

 FUNC_0(VAR_23, VAR_0, VAR_1, "\n");
}
