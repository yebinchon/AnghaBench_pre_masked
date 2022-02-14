
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct tx_desc_8821ae {int dummy; } ;
struct sk_buff {unsigned int len; scalar_t__ data; } ;
struct rtlwifi_tx_info {int dummy; } ;
struct rtl_tcb_desc {int mac_id; scalar_t__ ratr_index; scalar_t__ use_driver_rate; scalar_t__ disable_ratefallback; scalar_t__ tx_enable_sw_calc_duration; scalar_t__ rts_use_shortgi; scalar_t__ rts_use_shortpreamble; int rts_rate; int rts_sc; scalar_t__ cts_enable; scalar_t__ rts_enable; scalar_t__ use_shortpreamble; scalar_t__ use_shortgi; int hw_rate; scalar_t__ empkt_num; } ;
struct rtl_priv {int dummy; } ;
struct rtl_pci {int pdev; } ;
struct rtl_mac {scalar_t__ rdg_en; } ;
struct rtl_hal {scalar_t__ earlymode_enable; } ;
struct TYPE_4__ {struct ieee80211_key_conf* hw_key; } ;
struct ieee80211_tx_info {int flags; TYPE_2__ control; } ;
struct TYPE_3__ {int ampdu_density; } ;
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
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 scalar_t__ VAR_10 ;




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
 int FUNC_11 (scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,scalar_t__,unsigned int,int ) ;
 int FUNC_14 (struct ieee80211_hw*,struct rtl_tcb_desc*) ;
 int FUNC_15 (struct ieee80211_hw*,int*,int ) ;
 int FUNC_16 (struct rtl_tcb_desc*,int *) ;
 int FUNC_17 (struct ieee80211_hw*,struct rtl_tcb_desc*) ;
 int FUNC_18 (struct ieee80211_hw*,struct ieee80211_tx_info*,struct ieee80211_sta*,struct sk_buff*,struct rtl_tcb_desc*) ;
 struct rtl_hal* FUNC_19 (struct rtl_priv*) ;
 struct rtl_mac* FUNC_20 (struct rtl_priv*) ;
 struct rtl_pci* FUNC_21 (int ) ;
 int FUNC_22 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_23 (struct ieee80211_hw*) ;
 int FUNC_24 (struct rtl_tcb_desc*,int*,struct ieee80211_hw*,struct rtlwifi_tx_info*) ;
 struct rtlwifi_tx_info* FUNC_25 (struct sk_buff*) ;
 int FUNC_26 (int *,int) ;
 int FUNC_27 (int *,int) ;
 int FUNC_28 (int *,int) ;
 int FUNC_29 (int *,int) ;
 int FUNC_30 (int *,int ) ;
 int FUNC_31 (int *,int) ;
 int FUNC_32 (int *,int) ;
 int FUNC_33 (int *,int) ;
 int FUNC_34 (int *,int) ;
 int FUNC_35 (int *,int) ;
 int FUNC_36 (int *,int ) ;
 int FUNC_37 (int *,int) ;
 int FUNC_38 (int *,int ) ;
 int FUNC_39 (int *,int) ;
 int FUNC_40 (int *,int ) ;
 int FUNC_41 (int *,int ) ;
 int FUNC_42 (int *,int) ;
 int FUNC_43 (int *,int) ;
 int FUNC_44 (int *,int) ;
 int FUNC_45 (int *,scalar_t__) ;
 int FUNC_46 (int *,int) ;
 int FUNC_47 (int *,int) ;
 int FUNC_48 (int *,int) ;
 int FUNC_49 (int *,scalar_t__) ;
 int FUNC_50 (int *,int) ;
 int FUNC_51 (int *,int) ;
 int FUNC_52 (int *,int ) ;
 int FUNC_53 (int *,int) ;
 int FUNC_54 (int *,int ) ;
 int FUNC_55 (int *,int) ;
 int FUNC_56 (int *,int) ;
 int FUNC_57 (int *,int) ;
 int FUNC_58 (int *,int ) ;
 int FUNC_59 (int *,unsigned int) ;
 int FUNC_60 (int *,int ) ;
 int FUNC_61 (int *,int ) ;
 int FUNC_62 (int *,int) ;
 int FUNC_63 (struct sk_buff*,scalar_t__) ;

void FUNC_64(struct ieee80211_hw *VAR_11,
       struct ieee80211_hdr *VAR_12, u8 *VAR_13, u8 *VAR_14,
       struct ieee80211_tx_info *VAR_15,
       struct ieee80211_sta *VAR_16,
       struct sk_buff *VAR_17,
       u8 VAR_18, struct rtl_tcb_desc *VAR_19)
{
 struct rtl_priv *VAR_20 = FUNC_23(VAR_11);
 struct rtl_mac *VAR_21 = FUNC_20(FUNC_23(VAR_11));
 struct rtl_pci *VAR_22 = FUNC_21(FUNC_22(VAR_11));
 struct rtl_hal *VAR_23 = FUNC_19(VAR_20);
 struct rtlwifi_tx_info *VAR_24 = FUNC_25(VAR_17);
 u16 VAR_25;
 __le16 VAR_26 = VAR_12->frame_control;
 unsigned int VAR_27 = 0;
 unsigned int VAR_28 = VAR_17->len;
 u8 VAR_29 = FUNC_1(VAR_17, VAR_18);
 bool VAR_30 = ((VAR_12->seq_ctrl &
     FUNC_3(VAR_6)) == 0);
 bool VAR_31 = ((VAR_12->frame_control &
    FUNC_3(VAR_5)) == 0);
 dma_addr_t VAR_32;
 u8 VAR_33 = 0;
 bool VAR_34;
 __le32 *VAR_35 = (__le32 *)VAR_13;

 VAR_25 = (FUNC_10(VAR_12->seq_ctrl) & VAR_7) >> 4;
 FUNC_18(VAR_11, VAR_15, VAR_16, VAR_17, VAR_19);

 if (VAR_23->earlymode_enable) {
  FUNC_63(VAR_17, VAR_4);
  FUNC_11(VAR_17->data, 0, VAR_4);
 }
 VAR_27 = VAR_17->len;
 VAR_32 = FUNC_13(VAR_22->pdev, VAR_17->data, VAR_17->len,
     VAR_9);
 if (FUNC_12(VAR_22->pdev, VAR_32)) {
  FUNC_0(VAR_20, VAR_0, VAR_1,
    "DMA mapping error\n");
  return;
 }
 FUNC_2(VAR_35, sizeof(struct tx_desc_8821ae));
 if (FUNC_7(VAR_26) || FUNC_5(VAR_26)) {
  VAR_30 = 1;
  VAR_31 = 1;
 }
 if (VAR_30) {
  if (VAR_23->earlymode_enable) {
   FUNC_46(VAR_35, 1);
   FUNC_45(VAR_35, VAR_10 +
        VAR_4);
   if (VAR_19->empkt_num) {
    FUNC_0(VAR_20, VAR_0, VAR_1,
      "Insert 8 byte.pTcb->EMPktNum:%d\n",
       VAR_19->empkt_num);
    FUNC_16(VAR_19,
          (__le32 *)VAR_17->data);
   }
  } else {
   FUNC_45(VAR_35, VAR_10);
  }



  FUNC_60(VAR_35, VAR_19->hw_rate);
  if (VAR_19->hw_rate > VAR_3)
   VAR_33 = (VAR_19->use_shortgi) ? 1 : 0;
  else
   VAR_33 = (VAR_19->use_shortpreamble) ? 1 : 0;

  FUNC_32(VAR_35, VAR_33);

  if (VAR_15->flags & VAR_8) {
   FUNC_26(VAR_35, 1);
   FUNC_42(VAR_35, 0x1f);
  }
  FUNC_57(VAR_35, VAR_25);
  FUNC_51(VAR_35,
           ((VAR_19->rts_enable &&
     !VAR_19->cts_enable) ? 1 : 0));
  FUNC_36(VAR_35, 0);
  FUNC_29(VAR_35, ((VAR_19->cts_enable) ? 1 : 0));

  FUNC_52(VAR_35, VAR_19->rts_rate);
  FUNC_54(VAR_35, VAR_19->rts_sc);
  VAR_34 = ((VAR_19->rts_rate <= VAR_2) ?
       (VAR_19->rts_use_shortpreamble ? 1 : 0) :
       (VAR_19->rts_use_shortgi ? 1 : 0));
  FUNC_55(VAR_35, VAR_34);

  if (VAR_19->tx_enable_sw_calc_duration)
   FUNC_44(VAR_35, 1);

  FUNC_30(VAR_35,
        FUNC_14(VAR_11, VAR_19));

  FUNC_61(VAR_35,
        FUNC_17(VAR_11, VAR_19));

  FUNC_40(VAR_35, 0);
  FUNC_47(VAR_35, (u16)VAR_28);
  if (VAR_16) {
   u8 VAR_36 = VAR_16->ht_cap.ampdu_density;

   FUNC_27(VAR_35, VAR_36);
  }
  if (VAR_15->control.hw_key) {
   struct ieee80211_key_conf *VAR_37 =
    VAR_15->control.hw_key;
   switch (VAR_37->cipher) {
   case 128:
   case 129:
   case 130:
    FUNC_56(VAR_35, 0x1);
    break;
   case 131:
    FUNC_56(VAR_35, 0x3);
    break;
   default:
    FUNC_56(VAR_35, 0x0);
    break;
   }
  }

  FUNC_48(VAR_35, VAR_29);
  FUNC_31(VAR_35, 0x1F);
  FUNC_53(VAR_35, 0xF);
  FUNC_33(VAR_35, VAR_19->disable_ratefallback ?
           1 : 0);
  FUNC_62(VAR_35, VAR_19->use_driver_rate ? 1 : 0);

  if (FUNC_6(VAR_26)) {
   if (VAR_21->rdg_en) {
    FUNC_0(VAR_20, VAR_0, VAR_1,
      "Enable RDG function.\n");
    FUNC_50(VAR_35, 1);
    FUNC_35(VAR_35, 1);
   }
  }

  FUNC_24(VAR_19, VAR_13, VAR_11, VAR_24);
 }

 FUNC_34(VAR_35, (VAR_30 ? 1 : 0));
 FUNC_39(VAR_35, (VAR_31 ? 1 : 0));
 FUNC_59(VAR_35, VAR_27);
 FUNC_58(VAR_35, VAR_32);

 if (1) {
  FUNC_49(VAR_35, VAR_19->ratr_index);
  FUNC_41(VAR_35, VAR_19->mac_id);
 } else {
  FUNC_49(VAR_35, 0xC + VAR_19->ratr_index);
  FUNC_41(VAR_35, VAR_19->mac_id);
 }
 if (!FUNC_6(VAR_26)) {
  FUNC_37(VAR_35, 1);
  FUNC_38(VAR_35, 0);
 }
 FUNC_43(VAR_35, (VAR_31 ? 0 : 1));
 if (FUNC_9(FUNC_4(VAR_12)) ||
     FUNC_8(FUNC_4(VAR_12))) {
  FUNC_28(VAR_35, 1);
 }

 FUNC_15(VAR_11, VAR_13, VAR_19->mac_id);
 FUNC_0(VAR_20, VAR_0, VAR_1, "\n");
}
