
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sk_buff {scalar_t__ len; int data; } ;
struct rtl_tcb_desc {int mac_id; scalar_t__ use_driver_rate; int ratr_index; scalar_t__ packet_bw; scalar_t__ rts_use_shortgi; scalar_t__ rts_use_shortpreamble; int rts_rate; int rts_sc; scalar_t__ rts_stbc; scalar_t__ cts_enable; scalar_t__ rts_enable; scalar_t__ use_shortpreamble; scalar_t__ use_shortgi; int hw_rate; } ;
struct TYPE_3__ {scalar_t__ useramask; } ;
struct rtl_priv {TYPE_1__ dm; } ;
struct rtl_pci {int pdev; } ;
struct rtl_mac {scalar_t__ opmode; int bw_40; int cur_40_prime_sc; } ;
struct rtl_hal {scalar_t__ version; } ;
struct TYPE_4__ {struct ieee80211_key_conf* hw_key; } ;
struct ieee80211_tx_info {int flags; TYPE_2__ control; } ;
struct ieee80211_sta {scalar_t__ bandwidth; } ;
struct ieee80211_key_conf {int cipher; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_hdr {int frame_control; int seq_ctrl; } ;
typedef int dma_addr_t ;
typedef int __le16 ;


 int FUNC_0 (int*,int ) ;
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
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int*,int) ;
 int FUNC_4 (int*,int) ;
 int FUNC_5 (int*,int) ;
 int FUNC_6 (int*,int) ;
 int FUNC_7 (int*,int ) ;
 int FUNC_8 (int*,int) ;
 int FUNC_9 (int*,int) ;
 int FUNC_10 (int*,int) ;
 int FUNC_11 (int*,int ) ;
 int FUNC_12 (int*,int) ;
 int FUNC_13 (int*,int) ;
 int FUNC_14 (int*,int ) ;
 int FUNC_15 (int*,int) ;
 int FUNC_16 (int*,int ) ;
 int FUNC_17 (int*,int) ;
 int FUNC_18 (int*,int ) ;
 int FUNC_19 (int*,int) ;
 int FUNC_20 (int*,int) ;
 int FUNC_21 (int*,int ) ;
 int FUNC_22 (int*,int) ;
 int FUNC_23 (int*,int) ;
 int FUNC_24 (int*,int) ;
 int FUNC_25 (int*,int) ;
 int FUNC_26 (int*,int ) ;
 int FUNC_27 (int*,int) ;
 int FUNC_28 (int*,int ) ;
 int FUNC_29 (int*,int ) ;
 int FUNC_30 (int*,int ) ;
 int FUNC_31 (int*,int) ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;




 int FUNC_32 (struct sk_buff*,int) ;
 int FUNC_33 (int ) ;
 scalar_t__ FUNC_34 (int) ;
 int FUNC_35 (int) ;
 scalar_t__ FUNC_36 (int) ;
 int FUNC_37 (int) ;
 scalar_t__ FUNC_38 (int ,int ) ;
 int FUNC_39 (int ,int ,scalar_t__,int ) ;
 int FUNC_40 (struct ieee80211_hw*,struct ieee80211_tx_info*,struct ieee80211_sta*,struct sk_buff*,struct rtl_tcb_desc*) ;
 struct rtl_hal* FUNC_41 (struct rtl_priv*) ;
 struct rtl_mac* FUNC_42 (struct rtl_priv*) ;
 struct rtl_pci* FUNC_43 (int ) ;
 int FUNC_44 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_45 (struct ieee80211_hw*) ;

void FUNC_46(struct ieee80211_hw *VAR_20,
  struct ieee80211_hdr *VAR_21, u8 *VAR_22,
  u8 *VAR_23, struct ieee80211_tx_info *VAR_24,
  struct ieee80211_sta *VAR_25,
  struct sk_buff *VAR_26,
  u8 VAR_27, struct rtl_tcb_desc *VAR_28)
{
 struct rtl_priv *VAR_29 = FUNC_45(VAR_20);
 struct rtl_mac *VAR_30 = FUNC_42(FUNC_45(VAR_20));
 struct rtl_pci *VAR_31 = FUNC_43(FUNC_44(VAR_20));
 struct rtl_hal *VAR_32 = FUNC_41(FUNC_45(VAR_20));
 u8 *VAR_33 = VAR_22;
 u16 VAR_34;
 __le16 VAR_35 = VAR_21->frame_control;
 u8 VAR_36 = 0;
 u8 VAR_37 = FUNC_32(VAR_26, VAR_27);
 bool VAR_38 = (!(VAR_21->seq_ctrl & FUNC_33(VAR_10)));
 bool VAR_39 = (!(VAR_21->frame_control &
   FUNC_33(VAR_9)));
 dma_addr_t VAR_40 = FUNC_39(VAR_31->pdev, VAR_26->data, VAR_26->len,
      VAR_17);
 u8 VAR_41 = 0;

 if (FUNC_38(VAR_31->pdev, VAR_40)) {
  FUNC_1(VAR_29, VAR_0, VAR_1,
    "DMA mapping error\n");
  return;
 }
 if (VAR_30->opmode == VAR_16) {
  VAR_41 = VAR_30->bw_40;
 } else if (VAR_30->opmode == VAR_15 ||
  VAR_30->opmode == VAR_14) {
  if (VAR_25)
   VAR_41 = VAR_25->bandwidth >= VAR_12;
 }

 VAR_34 = (FUNC_37(VAR_21->seq_ctrl) & VAR_11) >> 4;

 FUNC_40(VAR_20, VAR_24, VAR_25, VAR_26, VAR_28);

 FUNC_0(VAR_33, VAR_18);

 if (FUNC_36(VAR_35) || FUNC_34(VAR_35)) {
  VAR_38 = 1;
  VAR_39 = 1;
 }

 if (VAR_38) {
  if (VAR_29->dm.useramask) {

   if (VAR_28->mac_id < 32) {
    FUNC_8(VAR_33, VAR_28->mac_id);
    VAR_36 |= VAR_28->mac_id;
   }
  }
  FUNC_15(VAR_33, VAR_36);

  FUNC_24(VAR_33, ((VAR_28->hw_rate >=
     VAR_8) ? 1 : 0));

  if (VAR_32->version == VAR_19) {
   if (VAR_28->hw_rate == VAR_4 ||
       VAR_28->hw_rate == VAR_5 ||
       VAR_28->hw_rate == VAR_7 ||
       VAR_28->hw_rate == VAR_2) {
    VAR_28->hw_rate = VAR_3;
   }
  }

  FUNC_28(VAR_33, VAR_28->hw_rate);

  if (VAR_28->use_shortgi || VAR_28->use_shortpreamble)
   FUNC_29(VAR_33, 0);


  if (VAR_24->flags & VAR_13)
   FUNC_2(VAR_33, 1);


  FUNC_23(VAR_33, VAR_34);




  FUNC_17(VAR_33, ((VAR_28->rts_enable &&
    !VAR_28->cts_enable) ? 1 : 0));
  FUNC_3(VAR_33, ((VAR_28->cts_enable) ?
           1 : 0));
  FUNC_20(VAR_33, ((VAR_28->rts_stbc) ? 1 : 0));

  FUNC_18(VAR_33, VAR_28->rts_rate);
  FUNC_16(VAR_33, 0);
  FUNC_21(VAR_33, VAR_28->rts_sc);
  FUNC_19(VAR_33, ((VAR_28->rts_rate <=
         VAR_6) ?
         (VAR_28->rts_use_shortpreamble ? 1 : 0)
         : (VAR_28->rts_use_shortgi ? 1 : 0)));



  if (VAR_41) {
   if (VAR_28->packet_bw) {
    FUNC_25(VAR_33, 1);

    FUNC_30(VAR_33, 0);
   } else {
    FUNC_25(VAR_33, 0);
    FUNC_30(VAR_33,
         VAR_30->cur_40_prime_sc);
   }
  } else {
   FUNC_25(VAR_33, 0);
   FUNC_30(VAR_33, 0);
  }



  FUNC_7(VAR_33, 0);
  FUNC_10(VAR_33, 32);
  FUNC_12(VAR_33, (u16) VAR_26->len);


  FUNC_14(VAR_33, VAR_28->ratr_index);


  if (VAR_24->control.hw_key) {
   struct ieee80211_key_conf *VAR_42;

   VAR_42 = VAR_24->control.hw_key;
   switch (VAR_42->cipher) {
   case 128:
   case 129:
    FUNC_22(VAR_33, 0x1);
    break;
   case 130:
    FUNC_22(VAR_33, 0x2);
    break;
   case 131:
    FUNC_22(VAR_33, 0x3);
    break;
   default:
    FUNC_22(VAR_33, 0x0);
    break;

   }
  }


  FUNC_11(VAR_33, 0);


  FUNC_13(VAR_33, VAR_37);


  FUNC_4(VAR_33, 0x1F);


  FUNC_31(VAR_33,
          VAR_28->use_driver_rate ? 1 : 0);


  if (!FUNC_35(VAR_35))
   FUNC_9(VAR_33, 1);

 }




 FUNC_5(VAR_33, (VAR_38 ? 1 : 0));
 FUNC_6(VAR_33, (VAR_39 ? 1 : 0));


 FUNC_27(VAR_33, (u16) VAR_26->len);


 FUNC_26(VAR_33, VAR_40);

 FUNC_1(VAR_29, VAR_0, VAR_1, "\n");
}
