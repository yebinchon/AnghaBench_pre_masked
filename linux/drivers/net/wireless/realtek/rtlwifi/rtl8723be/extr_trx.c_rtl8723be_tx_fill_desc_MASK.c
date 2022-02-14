
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct tx_desc_8723be {int dummy; } ;
struct sk_buff {unsigned int len; scalar_t__ data; } ;
struct rtlwifi_tx_info {int dummy; } ;
struct rtl_tcb_desc {scalar_t__ packet_bw; int mac_id; scalar_t__ ratr_index; scalar_t__ use_driver_rate; scalar_t__ disable_ratefallback; scalar_t__ tx_enable_sw_calc_duration; scalar_t__ rts_use_shortgi; scalar_t__ rts_use_shortpreamble; int rts_rate; int rts_sc; scalar_t__ cts_enable; scalar_t__ rts_enable; scalar_t__ use_shortpreamble; scalar_t__ use_shortgi; int hw_rate; scalar_t__ empkt_num; } ;
struct rtl_priv {int dummy; } ;
struct rtl_pci {int pdev; } ;
struct rtl_mac {scalar_t__ opmode; int bw_40; int cur_40_prime_sc; scalar_t__ rdg_en; } ;
struct rtl_hal {scalar_t__ earlymode_enable; } ;
struct TYPE_4__ {struct ieee80211_key_conf* hw_key; } ;
struct ieee80211_tx_info {int flags; TYPE_2__ control; } ;
struct TYPE_3__ {int cap; int ampdu_density; } ;
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
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 scalar_t__ VAR_15 ;




 int FUNC_1 (struct rtl_tcb_desc*,int *) ;
 int FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ieee80211_hdr*) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,scalar_t__,unsigned int,int ) ;
 int FUNC_15 (struct ieee80211_hw*,struct ieee80211_tx_info*,struct ieee80211_sta*,struct sk_buff*,struct rtl_tcb_desc*) ;
 struct rtl_hal* FUNC_16 (struct rtl_priv*) ;
 struct rtl_mac* FUNC_17 (struct rtl_priv*) ;
 struct rtl_pci* FUNC_18 (int ) ;
 int FUNC_19 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_20 (struct ieee80211_hw*) ;
 int FUNC_21 (struct rtl_tcb_desc*,int*,struct ieee80211_hw*,struct rtlwifi_tx_info*) ;
 struct rtlwifi_tx_info* FUNC_22 (struct sk_buff*) ;
 int FUNC_23 (int *,int) ;
 int FUNC_24 (int *,int) ;
 int FUNC_25 (int *,int) ;
 int FUNC_26 (int *,int) ;
 int FUNC_27 (int *,int) ;
 int FUNC_28 (int *,int) ;
 int FUNC_29 (int *,int) ;
 int FUNC_30 (int *,int) ;
 int FUNC_31 (int *,int) ;
 int FUNC_32 (int *,int) ;
 int FUNC_33 (int *,int ) ;
 int FUNC_34 (int *,int) ;
 int FUNC_35 (int *,int ) ;
 int FUNC_36 (int *,int) ;
 int FUNC_37 (int *,int ) ;
 int FUNC_38 (int *,int ) ;
 int FUNC_39 (int *,int) ;
 int FUNC_40 (int *,int) ;
 int FUNC_41 (int *,int) ;
 int FUNC_42 (int *,scalar_t__) ;
 int FUNC_43 (int *,int) ;
 int FUNC_44 (int *,int) ;
 int FUNC_45 (int *,int) ;
 int FUNC_46 (int *,scalar_t__) ;
 int FUNC_47 (int *,int) ;
 int FUNC_48 (int *,int) ;
 int FUNC_49 (int *,int ) ;
 int FUNC_50 (int *,int) ;
 int FUNC_51 (int *,int ) ;
 int FUNC_52 (int *,int) ;
 int FUNC_53 (int *,int) ;
 int FUNC_54 (int *,int) ;
 int FUNC_55 (int *,int ) ;
 int FUNC_56 (int *,int) ;
 int FUNC_57 (int *,int ) ;
 int FUNC_58 (int *,int) ;
 int FUNC_59 (int *,int) ;
 int FUNC_60 (struct sk_buff*,scalar_t__) ;

void FUNC_61(struct ieee80211_hw *VAR_16,
       struct ieee80211_hdr *VAR_17, u8 *VAR_18,
       u8 *VAR_19, struct ieee80211_tx_info *VAR_20,
       struct ieee80211_sta *VAR_21, struct sk_buff *VAR_22,
       u8 VAR_23, struct rtl_tcb_desc *VAR_24)
{
 struct rtl_priv *VAR_25 = FUNC_20(VAR_16);
 struct rtl_mac *VAR_26 = FUNC_17(FUNC_20(VAR_16));
 struct rtl_pci *VAR_27 = FUNC_18(FUNC_19(VAR_16));
 struct rtl_hal *VAR_28 = FUNC_16(VAR_25);
 struct rtlwifi_tx_info *VAR_29 = FUNC_22(VAR_22);
 __le32 *VAR_30 = (__le32 *)VAR_18;
 u16 VAR_31;
 __le16 VAR_32 = VAR_17->frame_control;
 unsigned int VAR_33 = 0;
 unsigned int VAR_34 = VAR_22->len;
 u8 VAR_35 = FUNC_2(VAR_22, VAR_23);
 bool VAR_36 = ((VAR_17->seq_ctrl &
       FUNC_4(VAR_8)) == 0);
 bool VAR_37 = ((VAR_17->frame_control &
      FUNC_4(VAR_6)) == 0);
 dma_addr_t VAR_38;
 u8 VAR_39 = 0;
 u8 VAR_40 = 0;

 if (VAR_26->opmode == VAR_13) {
  VAR_39 = VAR_26->bw_40;
 } else if (VAR_26->opmode == VAR_12 ||
  VAR_26->opmode == VAR_11) {
  if (VAR_21)
   VAR_39 = VAR_21->ht_cap.cap &
    VAR_7;
 }
 VAR_31 = (FUNC_11(VAR_17->seq_ctrl) & VAR_9) >> 4;
 FUNC_15(VAR_16, VAR_20, VAR_21, VAR_22, VAR_24);

 if (VAR_28->earlymode_enable) {
  FUNC_60(VAR_22, VAR_4);
  FUNC_12(VAR_22->data, 0, VAR_4);
 }
 VAR_33 = VAR_22->len;
 VAR_38 = FUNC_14(VAR_27->pdev, VAR_22->data, VAR_22->len,
     VAR_14);
 if (FUNC_13(VAR_27->pdev, VAR_38)) {
  FUNC_0(VAR_25, VAR_0, VAR_1, "DMA mapping error\n");
  return;
 }
 FUNC_3(VAR_30, sizeof(struct tx_desc_8723be));
 if (FUNC_8(VAR_32) || FUNC_6(VAR_32)) {
  VAR_36 = 1;
  VAR_37 = 1;
 }
 if (VAR_36) {
  if (VAR_28->earlymode_enable) {
   FUNC_43(VAR_30, 1);
   FUNC_42(VAR_30, VAR_15 +
        VAR_4);
   if (VAR_24->empkt_num) {
    FUNC_0(VAR_25, VAR_0, VAR_1,
      "Insert 8 byte.pTcb->EMPktNum:%d\n",
       VAR_24->empkt_num);
    FUNC_1(VAR_24,
           (__le32 *)(VAR_22->data));
   }
  } else {
   FUNC_42(VAR_30, VAR_15);
  }



  FUNC_57(VAR_30, VAR_24->hw_rate);
  if (VAR_24->hw_rate > VAR_3)
   VAR_40 = (VAR_24->use_shortgi) ? 1 : 0;
  else
   VAR_40 = (VAR_24->use_shortpreamble) ? 1 : 0;

  FUNC_29(VAR_30, VAR_40);

  if (VAR_20->flags & VAR_10) {
   FUNC_23(VAR_30, 1);
   FUNC_39(VAR_30, 0x14);
  }
  FUNC_54(VAR_30, VAR_31);
  FUNC_48(VAR_30, ((VAR_24->rts_enable &&
      !VAR_24->cts_enable) ?
      1 : 0));
  FUNC_33(VAR_30, 0);
  FUNC_26(VAR_30, ((VAR_24->cts_enable) ?
           1 : 0));

  FUNC_49(VAR_30, VAR_24->rts_rate);

  FUNC_51(VAR_30, VAR_24->rts_sc);
  FUNC_52(VAR_30,
   ((VAR_24->rts_rate <= VAR_2) ?
    (VAR_24->rts_use_shortpreamble ? 1 : 0) :
    (VAR_24->rts_use_shortgi ? 1 : 0)));

  if (VAR_24->tx_enable_sw_calc_duration)
   FUNC_41(VAR_30, 1);

  if (VAR_39) {
   if (VAR_24->packet_bw == VAR_5) {
    FUNC_27(VAR_30, 1);
    FUNC_58(VAR_30, 3);
   } else {
    FUNC_27(VAR_30, 0);
    FUNC_58(VAR_30, VAR_26->cur_40_prime_sc);
   }
  } else {
   FUNC_27(VAR_30, 0);
   FUNC_58(VAR_30, 0);
  }

  FUNC_37(VAR_30, 0);
  FUNC_44(VAR_30, (u16)VAR_34);
  if (VAR_21) {
   u8 VAR_41 = VAR_21->ht_cap.ampdu_density;
   FUNC_24(VAR_30, VAR_41);
  }
  if (VAR_20->control.hw_key) {
   struct ieee80211_key_conf *VAR_42 =
      VAR_20->control.hw_key;
   switch (VAR_42->cipher) {
   case 128:
   case 129:
   case 130:
    FUNC_53(VAR_30, 0x1);
    break;
   case 131:
    FUNC_53(VAR_30, 0x3);
    break;
   default:
    FUNC_53(VAR_30, 0x0);
    break;
   }
  }

  FUNC_45(VAR_30, VAR_35);
  FUNC_28(VAR_30, 0x1F);
  FUNC_50(VAR_30, 0xF);
  FUNC_30(VAR_30, VAR_24->disable_ratefallback ?
           1 : 0);
  FUNC_59(VAR_30, VAR_24->use_driver_rate ? 1 : 0);




  if (FUNC_7(VAR_32)) {
   if (VAR_26->rdg_en) {
    FUNC_0(VAR_25, VAR_0, VAR_1,
      "Enable RDG function.\n");
    FUNC_47(VAR_30, 1);
    FUNC_32(VAR_30, 1);
   }
  }

  FUNC_21(VAR_24, VAR_18, VAR_16, VAR_29);
 }

 FUNC_31(VAR_30, (VAR_36 ? 1 : 0));
 FUNC_36(VAR_30, (VAR_37 ? 1 : 0));
 FUNC_56(VAR_30, (u16)VAR_33);
 FUNC_55(VAR_30, VAR_38);

 if (1) {
  FUNC_46(VAR_30, VAR_24->ratr_index);
  FUNC_38(VAR_30, VAR_24->mac_id);
 } else {
  FUNC_46(VAR_30, 0xC + VAR_24->ratr_index);
  FUNC_38(VAR_30, VAR_24->mac_id);
 }
 if (!FUNC_7(VAR_32)) {
  FUNC_34(VAR_30, 1);
  FUNC_35(VAR_30, 0);
 }
 FUNC_40(VAR_30, (VAR_37 ? 0 : 1));
 if (FUNC_10(FUNC_5(VAR_17)) ||
     FUNC_9(FUNC_5(VAR_17))) {
  FUNC_25(VAR_30, 1);
 }

 FUNC_0(VAR_25, VAR_0, VAR_1, "\n");
}
