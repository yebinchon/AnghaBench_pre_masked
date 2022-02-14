
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
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int *,int ) ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,scalar_t__,int ) ;
 struct rtl_pci* FUNC_5 (int ) ;
 int FUNC_6 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_7 (struct ieee80211_hw*) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (int *,int ) ;
 int FUNC_21 (int *,int) ;

void FUNC_22(struct ieee80211_hw *VAR_9, u8 *VAR_10,
          bool VAR_11, bool VAR_12,
          struct sk_buff *VAR_13)
{
 struct rtl_priv *VAR_14 = FUNC_7(VAR_9);
 struct rtl_pci *VAR_15 = FUNC_5(FUNC_6(VAR_9));
 u8 VAR_16 = VAR_6;
 __le32 *VAR_17 = (__le32 *)VAR_10;

 dma_addr_t VAR_18 = FUNC_4(VAR_15->pdev,
         VAR_13->data, VAR_13->len,
         VAR_5);

 if (FUNC_3(VAR_15->pdev, VAR_18)) {
  FUNC_1(VAR_14, VAR_1, VAR_3,
    "DMA mapping error\n");
  return;
 }
 FUNC_2(VAR_17, VAR_7);

 FUNC_12(VAR_17, VAR_8);

 FUNC_20(VAR_17, VAR_4);

 FUNC_17(VAR_17, 0);

 FUNC_10(VAR_17, 0);

 FUNC_15(VAR_17, VAR_16);

 FUNC_8(VAR_17, 1);
 FUNC_9(VAR_17, 1);

 FUNC_19(VAR_17, (u16)(VAR_13->len));

 FUNC_18(VAR_17, VAR_18);

 FUNC_16(VAR_17, 0);
 FUNC_11(VAR_17, 0);

 FUNC_13(VAR_17, 1);

 FUNC_14(VAR_17, (u16)(VAR_13->len));

 FUNC_8(VAR_17, 1);
 FUNC_9(VAR_17, 1);

 FUNC_21(VAR_17, 1);

 FUNC_0(VAR_14, VAR_0, VAR_2,
        "H2C Tx Cmd Content\n", VAR_17, VAR_7);
}
