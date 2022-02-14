
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sk_buff {unsigned int len; scalar_t__ data; } ;
struct rtlwifi_tx_info {int dummy; } ;
struct rtl_tcb_desc {int use_driver_rate; scalar_t__ packet_bw; scalar_t__ ratr_index; scalar_t__ mac_id; scalar_t__ disable_ratefallback; scalar_t__ tx_enable_sw_calc_duration; scalar_t__ rts_use_shortgi; scalar_t__ rts_use_shortpreamble; int rts_rate; int rts_sc; scalar_t__ cts_enable; scalar_t__ rts_enable; scalar_t__ use_shortpreamble; scalar_t__ use_shortgi; int hw_rate; scalar_t__ empkt_num; } ;
struct TYPE_5__ {scalar_t__ useramask; } ;
struct TYPE_6__ {scalar_t__ is_special_data; } ;
struct rtl_priv {TYPE_1__ dm; TYPE_2__ ra; } ;
struct rtl_pci {int pdev; } ;
struct rtl_mac {scalar_t__ opmode; int bw_40; int cur_40_prime_sc; scalar_t__ rdg_en; } ;
struct rtl_hal {scalar_t__ earlymode_enable; } ;
struct TYPE_8__ {struct ieee80211_key_conf* hw_key; } ;
struct ieee80211_tx_info {int flags; TYPE_4__ control; } ;
struct TYPE_7__ {int cap; int ampdu_density; } ;
struct ieee80211_sta {TYPE_3__ ht_cap; } ;
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
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 scalar_t__ VAR_16 ;




 int FUNC_1 (struct rtl_tcb_desc*,int*) ;
 int FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ieee80211_hdr*) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,scalar_t__,unsigned int,int ) ;
 int FUNC_15 (struct ieee80211_hw*,int*,int*,int,struct sk_buff*,int ) ;
 int FUNC_16 (struct ieee80211_hw*,struct ieee80211_tx_info*,struct ieee80211_sta*,struct sk_buff*,struct rtl_tcb_desc*) ;
 struct rtl_hal* FUNC_17 (struct rtl_priv*) ;
 struct rtl_mac* FUNC_18 (struct rtl_priv*) ;
 struct rtl_pci* FUNC_19 (int ) ;
 int FUNC_20 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_21 (struct ieee80211_hw*) ;
 int FUNC_22 (struct rtl_tcb_desc*,int*,struct ieee80211_hw*,struct rtlwifi_tx_info*) ;
 struct rtlwifi_tx_info* FUNC_23 (struct sk_buff*) ;
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
 int FUNC_36 (int *,scalar_t__) ;
 int FUNC_37 (int *,int) ;
 int FUNC_38 (int *,int) ;
 int FUNC_39 (int *,int) ;
 int FUNC_40 (int *,scalar_t__) ;
 int FUNC_41 (int *,int) ;
 int FUNC_42 (int *,int) ;
 int FUNC_43 (int *,scalar_t__) ;
 int FUNC_44 (int *,int) ;
 int FUNC_45 (int *,int) ;
 int FUNC_46 (int *,int ) ;
 int FUNC_47 (int *,int) ;
 int FUNC_48 (int *,int ) ;
 int FUNC_49 (int *,int) ;
 int FUNC_50 (int *,int) ;
 int FUNC_51 (int *,int) ;
 int FUNC_52 (int *,int ) ;
 int FUNC_53 (int *,int ) ;
 int FUNC_54 (int *,int) ;
 int FUNC_55 (int *,int) ;
 int FUNC_56 (struct sk_buff*,scalar_t__) ;

void FUNC_57(struct ieee80211_hw *VAR_17,
     struct ieee80211_hdr *VAR_18, u8 *VAR_19,
     u8 *VAR_20,
     struct ieee80211_tx_info *VAR_21,
     struct ieee80211_sta *VAR_22,
     struct sk_buff *VAR_23,
     u8 VAR_24, struct rtl_tcb_desc *VAR_25)
{
 struct rtl_priv *VAR_26 = FUNC_21(VAR_17);
 struct rtl_mac *VAR_27 = FUNC_18(FUNC_21(VAR_17));
 struct rtl_pci *VAR_28 = FUNC_19(FUNC_20(VAR_17));
 struct rtl_hal *VAR_29 = FUNC_17(VAR_26);
 struct rtlwifi_tx_info *VAR_30 = FUNC_23(VAR_23);
 u16 VAR_31;
 __le16 VAR_32 = VAR_18->frame_control;
 unsigned int VAR_33;
 u8 VAR_34 = FUNC_2(VAR_23, VAR_24);
 bool VAR_35 = ((VAR_18->seq_ctrl &
       FUNC_3(VAR_9)) == 0);
 bool VAR_36 = ((VAR_18->frame_control &
      FUNC_3(VAR_7)) == 0);
 dma_addr_t VAR_37;
 u8 VAR_38 = 0;
 u8 VAR_39;
 __le32 *VAR_40 = (__le32 *)VAR_19;

 if (VAR_27->opmode == VAR_14) {
  VAR_38 = VAR_27->bw_40;
 } else if (VAR_27->opmode == VAR_13 ||
     VAR_27->opmode == VAR_12) {
  if (VAR_22)
   VAR_38 = VAR_22->ht_cap.cap &
    VAR_8;
 }
 VAR_31 = (FUNC_11(VAR_18->seq_ctrl) & VAR_10) >> 4;
 FUNC_16(VAR_17, VAR_21, VAR_22, VAR_23, VAR_25);

 if (VAR_29->earlymode_enable) {
  FUNC_56(VAR_23, VAR_5);
  FUNC_12(VAR_23->data, 0, VAR_5);
 }
 VAR_33 = VAR_23->len;
 VAR_37 = FUNC_14(VAR_28->pdev, VAR_23->data, VAR_23->len,
     VAR_15);
 if (FUNC_13(VAR_28->pdev, VAR_37)) {
  FUNC_0(VAR_26, VAR_0, VAR_1,
    "DMA mapping error\n");
  return;
 }

 if (VAR_20 != ((void*)0))
  FUNC_15(VAR_17, VAR_20, VAR_19, VAR_24,
         VAR_23, VAR_37);

 if (FUNC_8(VAR_32) || FUNC_5(VAR_32)) {
  VAR_35 = 1;
  VAR_36 = 1;
 }
 if (VAR_35) {
  if (VAR_29->earlymode_enable) {
   FUNC_41(VAR_40, 1);
   FUNC_40(VAR_40,
        VAR_16 + VAR_5);
   if (VAR_25->empkt_num) {
    FUNC_0(VAR_26, VAR_0, VAR_1,
      "Insert 8 byte.pTcb->EMPktNum:%d\n",
       VAR_25->empkt_num);
    FUNC_1(VAR_25,
         (u8 *)(VAR_23->data));
   }
  } else {
   FUNC_40(VAR_40, VAR_16);
  }


  FUNC_53(VAR_40, VAR_25->hw_rate);

  if (FUNC_7(VAR_32)) {
   VAR_25->use_driver_rate = 1;
  } else {
   if (VAR_26->ra.is_special_data) {
    VAR_25->use_driver_rate = 1;
    FUNC_53(VAR_40, VAR_2);
   } else {
    VAR_25->use_driver_rate = 0;
   }
  }

  if (VAR_25->hw_rate > VAR_4)
   VAR_39 = (VAR_25->use_shortgi) ? 1 : 0;
  else
   VAR_39 = (VAR_25->use_shortpreamble) ? 1 : 0;

  if (VAR_21->flags & VAR_11) {
   FUNC_24(VAR_40, 1);
   FUNC_37(VAR_40, 0x14);
  }
  FUNC_51(VAR_40, VAR_31);
  FUNC_45(VAR_40,
           ((VAR_25->rts_enable &&
      !VAR_25->cts_enable) ? 1 : 0));
  FUNC_33(VAR_40, 0);
  FUNC_27(VAR_40,
         ((VAR_25->cts_enable) ? 1 : 0));

  FUNC_46(VAR_40, VAR_25->rts_rate);
  FUNC_48(VAR_40, VAR_25->rts_sc);
  FUNC_49(VAR_40,
    ((VAR_25->rts_rate <= VAR_3) ?
     (VAR_25->rts_use_shortpreamble ? 1 : 0) :
     (VAR_25->rts_use_shortgi ? 1 : 0)));

  if (VAR_25->tx_enable_sw_calc_duration)
   FUNC_39(VAR_40, 1);

  if (VAR_38) {
   if (VAR_25->packet_bw == VAR_6) {
    FUNC_28(VAR_40, 1);
    FUNC_54(VAR_40, 3);
   } else {
    FUNC_28(VAR_40, 0);
    FUNC_54(VAR_40,
          VAR_27->cur_40_prime_sc);
   }
  } else {
   FUNC_28(VAR_40, 0);
   FUNC_54(VAR_40, 0);
  }

  FUNC_35(VAR_40, 0);
  if (VAR_22) {
   u8 VAR_41 = VAR_22->ht_cap.ampdu_density;

   FUNC_25(VAR_40, VAR_41);
  }
  if (VAR_21->control.hw_key) {
   struct ieee80211_key_conf *VAR_42 = VAR_21->control.hw_key;

   switch (VAR_42->cipher) {
   case 128:
   case 129:
   case 130:
    FUNC_50(VAR_40, 0x1);
    break;
   case 131:
    FUNC_50(VAR_40, 0x3);
    break;
   default:
    FUNC_50(VAR_40, 0x0);
    break;
   }
  }

  FUNC_42(VAR_40, VAR_34);
  FUNC_29(VAR_40, 0x1F);
  FUNC_47(VAR_40, 0xF);
  FUNC_30(VAR_40,
           VAR_25->disable_ratefallback ? 1 : 0);
  FUNC_55(VAR_40, VAR_25->use_driver_rate ? 1 : 0);





  if (!VAR_25->use_driver_rate) {


  }
  if (FUNC_6(VAR_32)) {
   if (VAR_27->rdg_en) {
    FUNC_0(VAR_26, VAR_0, VAR_1,
      "Enable RDG function.\n");
    FUNC_44(VAR_40, 1);
    FUNC_32(VAR_40, 1);
   }
  }

  FUNC_22(VAR_25, VAR_19, VAR_17, VAR_30);
 }

 FUNC_31(VAR_40, (VAR_35 ? 1 : 0));
 FUNC_34(VAR_40, (VAR_36 ? 1 : 0));
 FUNC_52(VAR_40, VAR_37);
 if (VAR_26->dm.useramask) {
  FUNC_43(VAR_40, VAR_25->ratr_index);
  FUNC_36(VAR_40, VAR_25->mac_id);
 } else {
  FUNC_43(VAR_40, 0xC + VAR_25->ratr_index);
  FUNC_36(VAR_40, VAR_25->ratr_index);
 }

 FUNC_38(VAR_40, (VAR_36 ? 0 : 1));
 if (FUNC_10(FUNC_4(VAR_18)) ||
     FUNC_9(FUNC_4(VAR_18))) {
  FUNC_26(VAR_40, 1);
 }
 FUNC_0(VAR_26, VAR_0, VAR_1, "\n");
}
