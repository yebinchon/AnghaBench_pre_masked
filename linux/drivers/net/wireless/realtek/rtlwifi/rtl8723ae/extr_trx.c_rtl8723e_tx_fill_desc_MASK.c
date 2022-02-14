
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct tx_desc_8723e {int dummy; } ;
struct sk_buff {scalar_t__ len; int data; } ;
struct rtl_tcb_desc {scalar_t__ packet_bw; scalar_t__ ratr_index; scalar_t__ mac_id; scalar_t__ use_driver_rate; scalar_t__ rts_use_shortgi; scalar_t__ rts_use_shortpreamble; int rts_rate; int rts_sc; scalar_t__ rts_stbc; scalar_t__ cts_enable; scalar_t__ rts_enable; scalar_t__ use_shortpreamble; scalar_t__ use_shortgi; int hw_rate; } ;
struct rtl_ps_ctl {scalar_t__ fwctrl_lps; } ;
struct TYPE_6__ {scalar_t__ useramask; } ;
struct rtl_priv {TYPE_3__ dm; } ;
struct rtl_pci {int pdev; } ;
struct rtl_mac {scalar_t__ opmode; int bw_40; int cur_40_prime_sc; scalar_t__ rdg_en; } ;
struct TYPE_5__ {struct ieee80211_key_conf* hw_key; } ;
struct ieee80211_tx_info {int flags; TYPE_2__ control; } ;
struct TYPE_4__ {int cap; int ampdu_density; } ;
struct ieee80211_sta {TYPE_1__ ht_cap; } ;
struct ieee80211_key_conf {int cipher; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_hdr {int frame_control; int seq_ctrl; } ;
typedef int dma_addr_t ;
typedef int __le32 ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int VAR_13 ;




 int FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ieee80211_hdr*) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ,scalar_t__,int ) ;
 int FUNC_13 (struct ieee80211_hw*,struct ieee80211_tx_info*,struct ieee80211_sta*,struct sk_buff*,struct rtl_tcb_desc*) ;
 struct rtl_mac* FUNC_14 (struct rtl_priv*) ;
 struct rtl_pci* FUNC_15 (int ) ;
 int FUNC_16 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_17 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_18 (struct rtl_priv*) ;
 int FUNC_19 (int *,int) ;
 int FUNC_20 (int *,int) ;
 int FUNC_21 (int *,int) ;
 int FUNC_22 (int *,int) ;
 int FUNC_23 (int *,int) ;
 int FUNC_24 (int *,int) ;
 int FUNC_25 (int *,int) ;
 int FUNC_26 (int *,int ) ;
 int FUNC_27 (int *,int) ;
 int FUNC_28 (int *,int) ;
 int FUNC_29 (int *,int) ;
 int FUNC_30 (int *,int) ;
 int FUNC_31 (int *,int) ;
 int FUNC_32 (int *,int) ;
 int FUNC_33 (int *,int ) ;
 int FUNC_34 (int *,scalar_t__) ;
 int FUNC_35 (int *,int) ;
 int FUNC_36 (int *,int) ;
 int FUNC_37 (int *,int ) ;
 int FUNC_38 (int *,int ) ;
 int FUNC_39 (int *,int) ;
 int FUNC_40 (int *,int) ;
 int FUNC_41 (int *,scalar_t__) ;
 int FUNC_42 (int *,int) ;
 int FUNC_43 (int *,int ) ;
 int FUNC_44 (int *,int) ;
 int FUNC_45 (int *,int ) ;
 int FUNC_46 (int *,int) ;
 int FUNC_47 (int *,int ) ;
 int FUNC_48 (int *,int) ;
 int FUNC_49 (int *,int) ;
 int FUNC_50 (int *,int) ;
 int FUNC_51 (int *,int) ;
 int FUNC_52 (int *,int ) ;
 int FUNC_53 (int *,int) ;
 int FUNC_54 (int *,int ) ;
 int FUNC_55 (int *,int) ;
 int FUNC_56 (int *,int) ;

void FUNC_57(struct ieee80211_hw *VAR_14,
      struct ieee80211_hdr *VAR_15, u8 *VAR_16,
      u8 *VAR_17, struct ieee80211_tx_info *VAR_18,
      struct ieee80211_sta *VAR_19,
      struct sk_buff *VAR_20,
      u8 VAR_21, struct rtl_tcb_desc *VAR_22)
{
 struct rtl_priv *VAR_23 = FUNC_17(VAR_14);
 struct rtl_mac *VAR_24 = FUNC_14(FUNC_17(VAR_14));
 struct rtl_pci *VAR_25 = FUNC_15(FUNC_16(VAR_14));
 struct rtl_ps_ctl *VAR_26 = FUNC_18(FUNC_17(VAR_14));
 bool VAR_27 = 1;

 u8 *VAR_28 = (u8 *)VAR_16;
 __le32 *VAR_29 = (__le32 *)VAR_28;
 u16 VAR_30;
 __le16 VAR_31 = VAR_15->frame_control;
 u8 VAR_32 = FUNC_1(VAR_20, VAR_21);
 bool VAR_33 = ((VAR_15->seq_ctrl &
     FUNC_3(VAR_6)) == 0);

 bool VAR_34 = ((VAR_15->frame_control &
    FUNC_3(VAR_4)) == 0);

 dma_addr_t VAR_35 = FUNC_12(VAR_25->pdev,
         VAR_20->data, VAR_20->len,
         VAR_12);
 u8 VAR_36 = 0;

 if (FUNC_11(VAR_25->pdev, VAR_35)) {
  FUNC_0(VAR_23, VAR_0, VAR_1,
    "DMA mapping error\n");
  return;
 }
 if (VAR_24->opmode == VAR_11) {
  VAR_36 = VAR_24->bw_40;
 } else if (VAR_24->opmode == VAR_10 ||
  VAR_24->opmode == VAR_9) {
  if (VAR_19)
   VAR_36 = VAR_19->ht_cap.cap &
    VAR_5;
 }

 VAR_30 = (FUNC_10(VAR_15->seq_ctrl) & VAR_7) >> 4;

 FUNC_13(VAR_14, VAR_18, VAR_19, VAR_20, VAR_22);

 FUNC_2(VAR_29, sizeof(struct tx_desc_8723e));

 if (FUNC_7(VAR_31) || FUNC_5(VAR_31)) {
  VAR_33 = 1;
  VAR_34 = 1;
 }

 if (VAR_33) {
  FUNC_37(VAR_29, VAR_13);

  FUNC_54(VAR_29, VAR_22->hw_rate);

  if (VAR_22->use_shortgi || VAR_22->use_shortpreamble)
   FUNC_25(VAR_29, 1);

  if (VAR_18->flags & VAR_8) {
   FUNC_19(VAR_29, 1);
   FUNC_35(VAR_29, 0x14);
  }
  FUNC_51(VAR_29, VAR_30);

  FUNC_44(VAR_29,
           ((VAR_22->rts_enable &&
     !VAR_22->cts_enable) ? 1 : 0));
  FUNC_29(VAR_29,
       ((VAR_22->rts_enable ||
       VAR_22->cts_enable) ? 1 : 0));
  FUNC_22(VAR_29,
         ((VAR_22->cts_enable) ? 1 : 0));
  FUNC_49(VAR_29,
         ((VAR_22->rts_stbc) ? 1 : 0));

  FUNC_45(VAR_29, VAR_22->rts_rate);
  FUNC_43(VAR_29, 0);
  FUNC_47(VAR_29, VAR_22->rts_sc);
  FUNC_48(VAR_29,
    ((VAR_22->rts_rate <= VAR_2) ?
    (VAR_22->rts_use_shortpreamble ? 1 : 0)
    : (VAR_22->rts_use_shortgi ? 1 : 0)));

  if (VAR_36) {
   if (VAR_22->packet_bw == VAR_3) {
    FUNC_23(VAR_29, 1);
    FUNC_55(VAR_29, 3);
   } else {
    FUNC_23(VAR_29, 0);
    FUNC_55(VAR_29,
     VAR_24->cur_40_prime_sc);
   }
  } else {
   FUNC_23(VAR_29, 0);
   FUNC_55(VAR_29, 0);
  }

  FUNC_33(VAR_29, 0);
  FUNC_39(VAR_29, (u16)VAR_20->len);

  if (VAR_19) {
   u8 VAR_37 = VAR_19->ht_cap.ampdu_density;
   FUNC_20(VAR_29, VAR_37);
  }

  if (VAR_18->control.hw_key) {
   struct ieee80211_key_conf *VAR_38 =
       VAR_18->control.hw_key;

   switch (VAR_38->cipher) {
   case 128:
   case 129:
   case 130:
    FUNC_50(VAR_29, 0x1);
    break;
   case 131:
    FUNC_50(VAR_29, 0x3);
    break;
   default:
    FUNC_50(VAR_29, 0x0);
    break;

   }
  }

  FUNC_38(VAR_29, 0);
  FUNC_40(VAR_29, VAR_32);

  FUNC_24(VAR_29, 0x1F);
  FUNC_46(VAR_29, 0xF);
  FUNC_26(VAR_29, 0);
  FUNC_56(VAR_29, VAR_22->use_driver_rate ? 1 : 0);

  if (FUNC_6(VAR_31)) {
   if (VAR_24->rdg_en) {
    FUNC_0(VAR_23, VAR_0, VAR_1,
      "Enable RDG function.\n");
    FUNC_42(VAR_29, 1);
    FUNC_28(VAR_29, 1);
   }
  }
 }

 FUNC_27(VAR_29, (VAR_33 ? 1 : 0));
 FUNC_32(VAR_29, (VAR_34 ? 1 : 0));

 FUNC_53(VAR_29, (u16)VAR_20->len);

 FUNC_52(VAR_29, VAR_35);

 if (VAR_23->dm.useramask) {
  FUNC_41(VAR_29, VAR_22->ratr_index);
  FUNC_34(VAR_29, VAR_22->mac_id);
 } else {
  FUNC_41(VAR_29, 0xC + VAR_22->ratr_index);
  FUNC_34(VAR_29, VAR_22->ratr_index);
 }

 if ((!FUNC_6(VAR_31)) && VAR_26->fwctrl_lps) {
  FUNC_30(VAR_29, 1);



  if (!VAR_27)
   FUNC_31(VAR_29, 1);

 }

 FUNC_36(VAR_29, (VAR_34 ? 0 : 1));

 if (FUNC_9(FUNC_4(VAR_15)) ||
     FUNC_8(FUNC_4(VAR_15))) {
  FUNC_21(VAR_29, 1);
 }

 FUNC_0(VAR_23, VAR_0, VAR_1, "\n");
}
