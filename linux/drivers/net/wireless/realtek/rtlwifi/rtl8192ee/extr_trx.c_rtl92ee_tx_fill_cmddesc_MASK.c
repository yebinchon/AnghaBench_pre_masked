
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {scalar_t__ len; int data; } ;
struct rtl_priv {int dummy; } ;
struct rtl_pci {int pdev; } ;
struct ieee80211_hw {int dummy; } ;
typedef int dma_addr_t ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int *,int) ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,scalar_t__,int ) ;
 struct rtl_pci* FUNC_5 (int ) ;
 int FUNC_6 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_7 (struct ieee80211_hw*) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (int *,int ) ;
 int FUNC_21 (int *,int) ;

void FUNC_22(struct ieee80211_hw *VAR_7,
        u8 *VAR_8, bool VAR_9,
        bool VAR_10, struct sk_buff *VAR_11)
{
 struct rtl_priv *VAR_12 = FUNC_7(VAR_7);
 struct rtl_pci *VAR_13 = FUNC_5(FUNC_6(VAR_7));
 u8 VAR_14 = VAR_6;
 dma_addr_t VAR_15 = FUNC_4(VAR_13->pdev,
         VAR_11->data, VAR_11->len,
         VAR_5);
 u8 VAR_16 = 40;
 __le32 *VAR_17 = (__le32 *)VAR_8;

 if (FUNC_3(VAR_13->pdev, VAR_15)) {
  FUNC_1(VAR_12, VAR_1, VAR_3,
    "DMA mapping error\n");
  return;
 }
 FUNC_2(VAR_17, VAR_16);

 if (VAR_9)
  FUNC_12(VAR_17, VAR_16);

 FUNC_20(VAR_17, VAR_4);

 FUNC_17(VAR_17, 0);

 FUNC_10(VAR_17, 0);

 FUNC_15(VAR_17, VAR_14);

 FUNC_8(VAR_17, 1);
 FUNC_9(VAR_17, 1);

 FUNC_19(VAR_17, (u16)(VAR_11->len));

 FUNC_18(VAR_17, VAR_15);

 FUNC_16(VAR_17, 7);
 FUNC_11(VAR_17, 0);

 FUNC_13(VAR_17, 1);

 FUNC_14(VAR_17, (u16)(VAR_11->len));

 FUNC_8(VAR_17, 1);
 FUNC_9(VAR_17, 1);

 FUNC_12(VAR_17, 40);

 FUNC_21(VAR_17, 1);

 FUNC_0(VAR_12, VAR_0, VAR_2,
        "H2C Tx Cmd Content\n", VAR_17, VAR_16);
}
