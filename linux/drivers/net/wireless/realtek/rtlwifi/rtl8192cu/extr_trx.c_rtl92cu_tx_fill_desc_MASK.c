
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct sk_buff {int len; } ;
struct rtl_tcb_desc {scalar_t__ ratr_index; scalar_t__ mac_id; scalar_t__ use_driver_rate; scalar_t__ rts_use_shortgi; scalar_t__ rts_use_shortpreamble; int rts_rate; int rts_sc; scalar_t__ rts_stbc; scalar_t__ cts_enable; scalar_t__ rts_enable; scalar_t__ use_shortpreamble; scalar_t__ use_shortgi; int hw_rate; } ;
struct rtl_ps_ctl {scalar_t__ fwctrl_lps; scalar_t__ leisure_ps; } ;
struct TYPE_12__ {scalar_t__ useramask; } ;
struct rtl_priv {TYPE_6__ dm; } ;
struct rtl_mac {int cur_40_prime_sc; scalar_t__ rdg_en; int bssid; int vif; scalar_t__ bw_40; TYPE_3__* tids; } ;
struct TYPE_11__ {struct ieee80211_key_conf* hw_key; TYPE_1__* rates; } ;
struct ieee80211_tx_info {int flags; TYPE_5__ control; } ;
struct TYPE_10__ {size_t ampdu_density; } ;
struct ieee80211_sta {TYPE_4__ ht_cap; } ;
struct ieee80211_key_conf {int cipher; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_hdr {int seq_ctrl; int frame_control; } ;
typedef enum rtl_desc_qsel { ____Placeholder_rtl_desc_qsel } rtl_desc_qsel ;
typedef int __le32 ;
typedef int __le16 ;
struct TYPE_8__ {scalar_t__ agg_state; } ;
struct TYPE_9__ {TYPE_2__ agg; } ;
struct TYPE_7__ {size_t flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;




 int FUNC_1 (struct ieee80211_hw*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct ieee80211_sta* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct ieee80211_hdr*) ;
 size_t* FUNC_6 (struct ieee80211_hdr*) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *,int ,int ) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (struct ieee80211_hw*,struct ieee80211_tx_info*,struct ieee80211_sta*,struct sk_buff*,struct rtl_tcb_desc*) ;
 struct rtl_mac* FUNC_16 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_17 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_18 (struct rtl_priv*) ;
 int FUNC_19 (int *,int) ;
 int FUNC_20 (int *,int) ;
 int FUNC_21 (int *,size_t) ;
 int FUNC_22 (int *,int) ;
 int FUNC_23 (int *,int) ;
 int FUNC_24 (int *,int) ;
 int FUNC_25 (int *,int) ;
 int FUNC_26 (int *,int) ;
 int FUNC_27 (int *,int) ;
 int FUNC_28 (int *,int ) ;
 int FUNC_29 (int *,int) ;
 int FUNC_30 (int *,int) ;
 int FUNC_31 (int *,int) ;
 int FUNC_32 (int *,int ) ;
 int FUNC_33 (int *,scalar_t__) ;
 int FUNC_34 (int *,int) ;
 int FUNC_35 (int *,int) ;
 int FUNC_36 (int *,int ) ;
 int FUNC_37 (int *,int) ;
 int FUNC_38 (int *,int ) ;
 int FUNC_39 (int *,int) ;
 int FUNC_40 (int *,int) ;
 int FUNC_41 (int *,int) ;
 int FUNC_42 (int *,scalar_t__) ;
 int FUNC_43 (int *,int) ;
 int FUNC_44 (int *,int ) ;
 int FUNC_45 (int *,int) ;
 int FUNC_46 (int *,int ) ;
 int FUNC_47 (int *,int) ;
 int FUNC_48 (int *,int ) ;
 int FUNC_49 (int *,int) ;
 int FUNC_50 (int *,int) ;
 int FUNC_51 (int *,int) ;
 int FUNC_52 (int *,int) ;
 int FUNC_53 (int *,int ) ;
 int FUNC_54 (int *,int) ;
 int FUNC_55 (struct sk_buff*) ;
 size_t* FUNC_56 (struct sk_buff*,int ) ;

void FUNC_57(struct ieee80211_hw *VAR_11,
     struct ieee80211_hdr *VAR_12, u8 *VAR_13,
     u8 *VAR_14, struct ieee80211_tx_info *VAR_15,
     struct ieee80211_sta *VAR_16,
     struct sk_buff *VAR_17,
     u8 VAR_18,
     struct rtl_tcb_desc *VAR_19)
{
 struct rtl_priv *VAR_20 = FUNC_17(VAR_11);
 struct rtl_mac *VAR_21 = FUNC_16(FUNC_17(VAR_11));
 struct rtl_ps_ctl *VAR_22 = FUNC_18(FUNC_17(VAR_11));
 bool VAR_23 = 1;
 u8 *VAR_24 = FUNC_6(VAR_12);
 u8 VAR_25 = VAR_24[0] & VAR_3;
 u16 VAR_26;
 __le16 VAR_27 = VAR_12->frame_control;
 u8 VAR_28 = VAR_15->control.rates[0].flags;
 u16 VAR_29 = VAR_17->len;
 enum rtl_desc_qsel VAR_30 = FUNC_1(VAR_11, VAR_27,
      FUNC_55(VAR_17));
 u8 *VAR_31;
 __le32 *VAR_32;

 VAR_26 = (FUNC_11(VAR_12->seq_ctrl) & VAR_4) >> 4;
 FUNC_15(VAR_11, VAR_15, VAR_16, VAR_17, VAR_19);
 VAR_31 = FUNC_56(VAR_17, VAR_10);
 VAR_32 = (__le32 *)VAR_31;
 FUNC_12(VAR_32, 0, VAR_10);
 FUNC_39(VAR_32, VAR_29);
 FUNC_32(VAR_32, 0);
 FUNC_38(VAR_32, VAR_9);
 FUNC_36(VAR_32, VAR_10);
 FUNC_53(VAR_32, VAR_19->hw_rate);
 if (VAR_19->use_shortgi || VAR_19->use_shortpreamble)
  FUNC_27(VAR_32, 1);
 if (VAR_21->tids[VAR_25].agg.agg_state == VAR_8 &&
      VAR_15->flags & VAR_5) {
  FUNC_20(VAR_32, 1);
  FUNC_34(VAR_32, 0x14);
 } else {
  FUNC_19(VAR_32, 1);
 }
 FUNC_52(VAR_32, VAR_26);
 FUNC_45(VAR_32,
          ((VAR_19->rts_enable &&
    !VAR_19->cts_enable) ? 1 : 0));
 FUNC_30(VAR_32,
      ((VAR_19->rts_enable ||
       VAR_19->cts_enable) ? 1 : 0));
 FUNC_23(VAR_32, ((VAR_19->cts_enable) ? 1 : 0));
 FUNC_50(VAR_32, ((VAR_19->rts_stbc) ? 1 : 0));
 FUNC_46(VAR_32, VAR_19->rts_rate);
 FUNC_44(VAR_32, 0);
 FUNC_48(VAR_32, VAR_19->rts_sc);
 FUNC_49(VAR_32,
         ((VAR_19->rts_rate <= VAR_2) ?
          (VAR_19->rts_use_shortpreamble ? 1 : 0)
          : (VAR_19->rts_use_shortgi ? 1 : 0)));
 if (VAR_21->bw_40) {
  if (VAR_28 & VAR_7) {
   FUNC_24(VAR_32, 1);
   FUNC_26(VAR_32, 3);
  } else if(VAR_28 & VAR_6){
   FUNC_24(VAR_32, 1);
   FUNC_26(VAR_32, VAR_21->cur_40_prime_sc);
  } else {
   FUNC_24(VAR_32, 0);
   FUNC_26(VAR_32, 0);
  }
 } else {
  FUNC_24(VAR_32, 0);
  FUNC_26(VAR_32, 0);
 }
 FUNC_13();
 VAR_16 = FUNC_4(VAR_21->vif, VAR_21->bssid);
 if (VAR_16) {
  u8 VAR_33 = VAR_16->ht_cap.ampdu_density;

  FUNC_21(VAR_32, VAR_33);
 }
 FUNC_14();
 if (VAR_15->control.hw_key) {
  struct ieee80211_key_conf *VAR_34 = VAR_15->control.hw_key;

  switch (VAR_34->cipher) {
  case 128:
  case 129:
  case 130:
   FUNC_51(VAR_32, 0x1);
   break;
  case 131:
   FUNC_51(VAR_32, 0x3);
   break;
  default:
   FUNC_51(VAR_32, 0x0);
   break;
  }
 }
 FUNC_37(VAR_32, 0);
 FUNC_41(VAR_32, VAR_30);
 FUNC_25(VAR_32, 0x1F);
 FUNC_47(VAR_32, 0xF);
 FUNC_28(VAR_32, 0);
 FUNC_54(VAR_32, VAR_19->use_driver_rate ? 1 : 0);
 if (FUNC_8(VAR_27)) {
  if (VAR_21->rdg_en) {
   FUNC_0(VAR_20, VAR_0, VAR_1,
     "Enable RDG function\n");
   FUNC_43(VAR_32, 1);
   FUNC_29(VAR_32, 1);
  }
 }
 if (VAR_20->dm.useramask) {
  FUNC_42(VAR_32, VAR_19->ratr_index);
  FUNC_33(VAR_32, VAR_19->mac_id);
 } else {
  FUNC_42(VAR_32, 0xC + VAR_19->ratr_index);
  FUNC_33(VAR_32, VAR_19->ratr_index);
 }
 if ((!FUNC_8(VAR_27)) && VAR_22->leisure_ps &&
       VAR_22->fwctrl_lps) {
  FUNC_31(VAR_32, 1);
  FUNC_37(VAR_32, 8);
  if (!VAR_23)
   FUNC_40(VAR_32, 1);
 }
 if (FUNC_7(VAR_27))
  FUNC_35(VAR_32, 1);
 if (FUNC_10(FUNC_5(VAR_12)) ||
     FUNC_9(FUNC_5(VAR_12)))
  FUNC_22(VAR_32, 1);
 FUNC_2(VAR_32);
 FUNC_3(VAR_32);
 FUNC_0(VAR_20, VAR_0, VAR_1, "==>\n");
}
