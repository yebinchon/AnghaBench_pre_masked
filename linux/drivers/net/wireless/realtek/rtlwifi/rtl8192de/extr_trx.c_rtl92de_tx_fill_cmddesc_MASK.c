
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct rtl_ps_ctl {scalar_t__ fwctrl_lps; } ;
struct rtl_priv {int dummy; } ;
struct rtl_pci {int pdev; } ;
struct rtl_hal {scalar_t__ current_bandtype; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef int dma_addr_t ;
typedef int __le16 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,int *,int ) ;
 int FUNC_2 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int *,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (int ,int ) ;
 int FUNC_21 (int ,scalar_t__,scalar_t__,int ) ;
 struct rtl_hal* FUNC_22 (struct rtl_priv*) ;
 struct rtl_pci* FUNC_23 (int ) ;
 int FUNC_24 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_25 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_26 (struct rtl_priv*) ;
 int FUNC_27 () ;

void FUNC_28(struct ieee80211_hw *VAR_11,
        u8 *VAR_12, bool VAR_13,
        bool VAR_14, struct sk_buff *VAR_15)
{
 struct rtl_priv *VAR_16 = FUNC_25(VAR_11);
 struct rtl_pci *VAR_17 = FUNC_23(FUNC_24(VAR_11));
 struct rtl_ps_ctl *VAR_18 = FUNC_26(VAR_16);
 struct rtl_hal *VAR_19 = FUNC_22(VAR_16);
 u8 VAR_20 = VAR_8;
 dma_addr_t VAR_21 = FUNC_21(VAR_17->pdev,
      VAR_15->data, VAR_15->len, VAR_7);
 struct ieee80211_hdr *VAR_22 = (struct ieee80211_hdr *)(VAR_15->data);
 __le16 VAR_23 = VAR_22->frame_control;

 if (FUNC_20(VAR_17->pdev, VAR_21)) {
  FUNC_2(VAR_16, VAR_2, VAR_4,
    "DMA mapping error\n");
  return;
 }
 FUNC_0(VAR_12, VAR_9);
 if (VAR_13)
  FUNC_8(VAR_12, VAR_10);




 if (VAR_19->current_bandtype == VAR_0) {
  FUNC_17(VAR_12, VAR_6);
 } else {
  FUNC_17(VAR_12, VAR_5);
 }
 FUNC_14(VAR_12, 0);
 FUNC_6(VAR_12, 0);
 FUNC_12(VAR_12, VAR_20);
 FUNC_3(VAR_12, 1);
 FUNC_5(VAR_12, 1);
 FUNC_16(VAR_12, (u16)VAR_15->len);
 FUNC_15(VAR_12, VAR_21);
 FUNC_13(VAR_12, 7);
 FUNC_7(VAR_12, 0);
 FUNC_11(VAR_12, (u16) (VAR_15->len));
 FUNC_3(VAR_12, 1);
 FUNC_5(VAR_12, 1);
 FUNC_8(VAR_12, 0x20);
 FUNC_18(VAR_12, 1);

 if (!FUNC_19(VAR_23) && VAR_18->fwctrl_lps) {
  FUNC_4(VAR_12, 1);
  FUNC_10(VAR_12, 8);
 }

 FUNC_1(VAR_16, VAR_1, VAR_3,
        "H2C Tx Cmd Content", VAR_12, VAR_9);
 FUNC_27();
 FUNC_9(VAR_12, 1);
}
