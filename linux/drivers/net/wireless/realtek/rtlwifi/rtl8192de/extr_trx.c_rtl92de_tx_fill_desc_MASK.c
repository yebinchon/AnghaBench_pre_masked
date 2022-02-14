
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct tx_desc_92d {int dummy; } ;
struct sk_buff {unsigned int len; scalar_t__ data; } ;
struct rtl_tcb_desc {void* hw_rate; void* rts_rate; scalar_t__ ratr_index; scalar_t__ mac_id; scalar_t__ use_driver_rate; scalar_t__ disable_ratefallback; scalar_t__ packet_bw; scalar_t__ rts_use_shortgi; scalar_t__ rts_use_shortpreamble; int rts_sc; scalar_t__ rts_stbc; scalar_t__ cts_enable; scalar_t__ rts_enable; scalar_t__ use_shortpreamble; scalar_t__ use_shortgi; scalar_t__ empkt_num; } ;
struct rtl_ps_ctl {scalar_t__ fwctrl_lps; } ;
struct TYPE_6__ {scalar_t__ useramask; } ;
struct rtl_priv {TYPE_3__ dm; } ;
struct rtl_pci {int pdev; } ;
struct rtl_mac {scalar_t__ opmode; int bw_40; int cur_40_prime_sc; scalar_t__ rdg_en; } ;
struct rtl_hal {scalar_t__ current_bandtype; scalar_t__ macphymode; scalar_t__ earlymode_enable; } ;
struct TYPE_5__ {struct ieee80211_key_conf* hw_key; } ;
struct ieee80211_tx_info {int flags; TYPE_2__ control; } ;
struct TYPE_4__ {int ampdu_density; } ;
struct ieee80211_sta {scalar_t__ bandwidth; TYPE_1__ ht_cap; } ;
struct ieee80211_key_conf {int cipher; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_hdr {int frame_control; int seq_ctrl; } ;
typedef int dma_addr_t ;
typedef int __le16 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int*,int) ;
 int FUNC_4 (int*,int) ;
 int FUNC_5 (int*,int) ;
 int FUNC_6 (int*,int) ;
 int FUNC_7 (int*,int) ;
 int FUNC_8 (int*,int) ;
 int FUNC_9 (int*,int) ;
 int FUNC_10 (int*,int) ;
 int FUNC_11 (int*,int) ;
 int FUNC_12 (int*,int) ;
 int FUNC_13 (int*,int) ;
 int FUNC_14 (int*,int ) ;
 int FUNC_15 (int*,scalar_t__) ;
 int FUNC_16 (int*,int) ;
 int FUNC_17 (int*,int) ;
 int FUNC_18 (int*,scalar_t__) ;
 int FUNC_19 (int*,int) ;
 int FUNC_20 (int*,int) ;
 int FUNC_21 (int*,int) ;
 int FUNC_22 (int*,int) ;
 int FUNC_23 (int*,int) ;
 int FUNC_24 (int*,scalar_t__) ;
 int FUNC_25 (int*,int) ;
 int FUNC_26 (int*,int ) ;
 int FUNC_27 (int*,int) ;
 int FUNC_28 (int*,int) ;
 int FUNC_29 (int*,int) ;
 int FUNC_30 (int*,int ) ;
 int FUNC_31 (int*,int) ;
 int FUNC_32 (int*,int) ;
 int FUNC_33 (int*,int) ;
 int FUNC_34 (int*,int) ;
 int FUNC_35 (int*,int ) ;
 int FUNC_36 (int*,int) ;
 int FUNC_37 (int*,void*) ;
 int FUNC_38 (int*,int) ;
 int FUNC_39 (int*,int) ;
 scalar_t__ VAR_18 ;




 int FUNC_40 (struct rtl_tcb_desc*,int*) ;
 int FUNC_41 (struct sk_buff*,int) ;
 int FUNC_42 (int ) ;
 scalar_t__ FUNC_43 (int) ;
 scalar_t__ FUNC_44 (int) ;
 scalar_t__ FUNC_45 (int) ;
 int FUNC_46 (int) ;
 int FUNC_47 (scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_48 (int ,int ) ;
 int FUNC_49 (int ,scalar_t__,unsigned int,int ) ;
 int FUNC_50 (struct ieee80211_hw*,struct ieee80211_tx_info*,struct ieee80211_sta*,struct sk_buff*,struct rtl_tcb_desc*) ;
 struct rtl_hal* FUNC_51 (struct rtl_priv*) ;
 struct rtl_mac* FUNC_52 (struct rtl_priv*) ;
 struct rtl_pci* FUNC_53 (int ) ;
 int FUNC_54 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_55 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_56 (struct rtl_priv*) ;
 int FUNC_57 (struct sk_buff*,scalar_t__) ;

void FUNC_58(struct ieee80211_hw *VAR_19,
     struct ieee80211_hdr *VAR_20, u8 *VAR_21,
     u8 *VAR_22, struct ieee80211_tx_info *VAR_23,
     struct ieee80211_sta *VAR_24,
     struct sk_buff *VAR_25,
     u8 VAR_26, struct rtl_tcb_desc *VAR_27)
{
 struct rtl_priv *VAR_28 = FUNC_55(VAR_19);
 struct rtl_mac *VAR_29 = FUNC_52(FUNC_55(VAR_19));
 struct rtl_pci *VAR_30 = FUNC_53(FUNC_54(VAR_19));
 struct rtl_hal *VAR_31 = FUNC_51(VAR_28);
 struct rtl_ps_ctl *VAR_32 = FUNC_56(FUNC_55(VAR_19));
 u8 *VAR_33 = VAR_21;
 u16 VAR_34;
 __le16 VAR_35 = VAR_20->frame_control;
 unsigned int VAR_36 = 0;
 unsigned int VAR_37 = VAR_25->len;
 u8 VAR_38 = FUNC_41(VAR_25, VAR_26);
 bool VAR_39 = ((VAR_20->seq_ctrl &
   FUNC_42(VAR_10)) == 0);
 bool VAR_40 = ((VAR_20->frame_control &
   FUNC_42(VAR_9)) == 0);
 dma_addr_t VAR_41;
 u8 VAR_42 = 0;

 if (VAR_29->opmode == VAR_16) {
  VAR_42 = VAR_29->bw_40;
 } else if (VAR_29->opmode == VAR_15 ||
  VAR_29->opmode == VAR_14) {
  if (VAR_24)
   VAR_42 = VAR_24->bandwidth >= VAR_12;
 }
 VAR_34 = (FUNC_46(VAR_20->seq_ctrl) & VAR_11) >> 4;
 FUNC_50(VAR_19, VAR_23, VAR_24, VAR_25, VAR_27);

 if (VAR_31->earlymode_enable) {
  FUNC_57(VAR_25, VAR_8);
  FUNC_47(VAR_25->data, 0, VAR_8);
 }
 VAR_36 = VAR_25->len;
 VAR_41 = FUNC_49(VAR_30->pdev, VAR_25->data, VAR_25->len,
     VAR_17);
 if (FUNC_48(VAR_30->pdev, VAR_41)) {
  FUNC_1(VAR_28, VAR_1, VAR_3,
    "DMA mapping error\n");
  return;
 }
 FUNC_0(VAR_33, sizeof(struct tx_desc_92d));
 if (FUNC_45(VAR_35) || FUNC_43(VAR_35)) {
  VAR_39 = 1;
  VAR_40 = 1;
 }
 if (VAR_39) {
  if (VAR_31->earlymode_enable) {
   FUNC_20(VAR_33, 1);
   FUNC_18(VAR_33, VAR_18 +
        VAR_8);
   if (VAR_27->empkt_num) {
    FUNC_1(VAR_28, VAR_1, VAR_2,
      "Insert 8 byte.pTcb->EMPktNum:%d\n",
      VAR_27->empkt_num);
    FUNC_40(VAR_27,
         (u8 *)(VAR_25->data));
   }
  } else {
   FUNC_18(VAR_33, VAR_18);
  }

  if (VAR_31->current_bandtype == VAR_0)
   if (VAR_27->hw_rate < VAR_5)
    VAR_27->hw_rate = VAR_5;
  FUNC_37(VAR_33, VAR_27->hw_rate);
  if (VAR_27->use_shortgi || VAR_27->use_shortpreamble)
   FUNC_7(VAR_33, 1);

  if (VAR_31->macphymode == VAR_7 &&
   VAR_27->hw_rate == VAR_6)
   FUNC_7(VAR_33, 1);

  if (VAR_23->flags & VAR_13) {
   FUNC_2(VAR_33, 1);
   FUNC_16(VAR_33, 0x14);
  }
  FUNC_34(VAR_33, VAR_34);
  FUNC_27(VAR_33, ((VAR_27->rts_enable &&
           !VAR_27->cts_enable) ? 1 : 0));
  FUNC_12(VAR_33, ((VAR_27->rts_enable
       || VAR_27->cts_enable) ? 1 : 0));
  FUNC_4(VAR_33, ((VAR_27->cts_enable) ? 1 : 0));
  FUNC_32(VAR_33, ((VAR_27->rts_stbc) ? 1 : 0));

  if (VAR_31->current_bandtype == VAR_0)
   if (VAR_27->rts_rate < VAR_5)
    VAR_27->rts_rate = VAR_5;
  FUNC_28(VAR_33, VAR_27->rts_rate);
  FUNC_26(VAR_33, 0);
  FUNC_30(VAR_33, VAR_27->rts_sc);
  FUNC_31(VAR_33, ((VAR_27->rts_rate <=
   VAR_4) ?
   (VAR_27->rts_use_shortpreamble ? 1 : 0) :
   (VAR_27->rts_use_shortgi ? 1 : 0)));
  if (VAR_42) {
   if (VAR_27->packet_bw) {
    FUNC_5(VAR_33, 1);
    FUNC_38(VAR_33, 3);
   } else {
    FUNC_5(VAR_33, 0);
    FUNC_38(VAR_33,
       VAR_29->cur_40_prime_sc);
   }
  } else {
   FUNC_5(VAR_33, 0);
   FUNC_38(VAR_33, 0);
  }
  FUNC_14(VAR_33, 0);
  FUNC_21(VAR_33, (u16) VAR_37);
  if (VAR_24) {
   u8 VAR_43 = VAR_24->ht_cap.ampdu_density;
   FUNC_3(VAR_33, VAR_43);
  }
  if (VAR_23->control.hw_key) {
   struct ieee80211_key_conf *VAR_44;

   VAR_44 = VAR_23->control.hw_key;
   switch (VAR_44->cipher) {
   case 128:
   case 129:
   case 130:
    FUNC_33(VAR_33, 0x1);
    break;
   case 131:
    FUNC_33(VAR_33, 0x3);
    break;
   default:
    FUNC_33(VAR_33, 0x0);
    break;

   }
  }
  FUNC_19(VAR_33, 0);
  FUNC_23(VAR_33, VAR_38);
  FUNC_6(VAR_33, 0x1F);
  FUNC_29(VAR_33, 0xF);
  FUNC_8(VAR_33, VAR_27->disable_ratefallback ?
           1 : 0);
  FUNC_39(VAR_33, VAR_27->use_driver_rate ? 1 : 0);




  if (!VAR_27->use_driver_rate) {
   FUNC_28(VAR_33, 0x08);

  }
  if (FUNC_44(VAR_35)) {
   if (VAR_29->rdg_en) {
    FUNC_1(VAR_28, VAR_1, VAR_3,
      "Enable RDG function\n");
    FUNC_25(VAR_33, 1);
    FUNC_10(VAR_33, 1);
   }
  }
 }

 FUNC_9(VAR_33, (VAR_39 ? 1 : 0));
 FUNC_13(VAR_33, (VAR_40 ? 1 : 0));
 FUNC_36(VAR_33, (u16) VAR_36);
 FUNC_35(VAR_33, VAR_41);
 if (VAR_28->dm.useramask) {
  FUNC_24(VAR_33, VAR_27->ratr_index);
  FUNC_15(VAR_33, VAR_27->mac_id);
 } else {
  FUNC_24(VAR_33, 0xC + VAR_27->ratr_index);
  FUNC_15(VAR_33, VAR_27->ratr_index);
 }
 if (FUNC_44(VAR_35))
  FUNC_22(VAR_33, 1);

 if ((!FUNC_44(VAR_35)) && VAR_32->fwctrl_lps) {
  FUNC_11(VAR_33, 1);
  FUNC_19(VAR_33, 8);
 }
 FUNC_17(VAR_33, (VAR_40 ? 0 : 1));
 FUNC_1(VAR_28, VAR_1, VAR_3, "\n");
}
