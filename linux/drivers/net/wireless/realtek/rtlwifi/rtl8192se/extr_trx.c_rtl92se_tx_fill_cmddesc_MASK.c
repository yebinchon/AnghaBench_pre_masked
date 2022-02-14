
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {scalar_t__ len; int data; scalar_t__ cb; } ;
struct rtl_tcb_desc {scalar_t__ cmd_or_init; int last_inipkt; } ;
struct rtl_priv {int dummy; } ;
struct rtl_pci {int pdev; } ;
struct rtl_hal {int h2c_txcmd_seq; } ;
struct ieee80211_hw {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_2 (int ,int,int,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ,scalar_t__,int ) ;
 struct rtl_hal* FUNC_14 (struct rtl_priv*) ;
 struct rtl_pci* FUNC_15 (int ) ;
 int FUNC_16 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_17 (struct ieee80211_hw*) ;
 int FUNC_18 () ;

void FUNC_19(struct ieee80211_hw *VAR_5, u8 *VAR_6,
 bool VAR_7, bool VAR_8, struct sk_buff *VAR_9)
{
 struct rtl_priv *VAR_10 = FUNC_17(VAR_5);
 struct rtl_pci *VAR_11 = FUNC_15(FUNC_16(VAR_5));
 struct rtl_hal *VAR_12 = FUNC_14(FUNC_17(VAR_5));
 struct rtl_tcb_desc *VAR_13 = (struct rtl_tcb_desc *)(VAR_9->cb);

 dma_addr_t VAR_14 = FUNC_13(VAR_11->pdev, VAR_9->data, VAR_9->len,
   VAR_3);

 if (FUNC_12(VAR_11->pdev, VAR_14)) {
  FUNC_1(VAR_10, VAR_0, VAR_1,
    "DMA mapping error\n");
  return;
 }

 FUNC_0(VAR_6, VAR_4);


 if (VAR_13->cmd_or_init == VAR_2) {

  FUNC_5(VAR_6, VAR_13->last_inipkt);


  FUNC_3(VAR_6, 1);
  FUNC_4(VAR_6, 1);


  FUNC_8(VAR_6, (u16)(VAR_9->len));
  FUNC_11(VAR_6, (u16)(VAR_9->len));
  FUNC_10(VAR_6, VAR_14);

  FUNC_18();
  FUNC_7(VAR_6, 1);
 } else {

  FUNC_3(VAR_6, 1);
  FUNC_4(VAR_6, 1);

  FUNC_6(VAR_6, 0x20);


  FUNC_8(VAR_6, (u16)(VAR_9->len));

  FUNC_9(VAR_6, 0x13);

  FUNC_2(VAR_9->data, 24, 7, VAR_12->h2c_txcmd_seq);

  FUNC_11(VAR_6, (u16)(VAR_9->len));
  FUNC_10(VAR_6, VAR_14);

  FUNC_18();
  FUNC_7(VAR_6, 1);

 }
}
