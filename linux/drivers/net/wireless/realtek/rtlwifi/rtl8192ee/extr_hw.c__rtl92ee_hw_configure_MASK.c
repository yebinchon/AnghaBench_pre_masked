
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct rtl_pci {int reg_bcn_ctrl_val; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 struct rtl_pci* FUNC_0 (int ) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct rtl_priv*,int,int) ;
 int FUNC_4 (struct rtl_priv*,scalar_t__,int) ;
 int FUNC_5 (struct rtl_priv*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_29)
{
 struct rtl_priv *VAR_30 = FUNC_2(VAR_29);
 struct rtl_pci *VAR_31 = FUNC_0(FUNC_1(VAR_29));
 u32 VAR_32;

 VAR_32 = VAR_0 | VAR_1;

 FUNC_4(VAR_30, VAR_22, VAR_32);


 FUNC_4(VAR_30, VAR_4, 0x00000010);
 FUNC_4(VAR_30, VAR_4 + 4, 0x3e0ff000);


 FUNC_4(VAR_30, VAR_5, 0x00000010);
 FUNC_4(VAR_30, VAR_5 + 4, 0x000ff000);


 FUNC_3(VAR_30, VAR_26, 0x09);


 FUNC_5(VAR_30, VAR_13, 0x1F80);


 FUNC_5(VAR_30, VAR_21, 0x0707);


 FUNC_4(VAR_30, VAR_7, 0x0201ffff);


 FUNC_4(VAR_30, VAR_11, 0x01000000);
 FUNC_4(VAR_30, VAR_11 + 4, 0x07060504);
 FUNC_4(VAR_30, VAR_20, 0x01000000);
 FUNC_4(VAR_30, VAR_20 + 4, 0x07060504);


 FUNC_3(VAR_30, VAR_6, 0x2);
 FUNC_3(VAR_30, VAR_10, 0xff);

 VAR_31->reg_bcn_ctrl_val = 0x1d;
 FUNC_3(VAR_30, VAR_8, VAR_31->reg_bcn_ctrl_val);






 FUNC_3(VAR_30, VAR_9, 0);


 FUNC_3(VAR_30, VAR_28 + 1, 0xff);

 FUNC_3(VAR_30, VAR_18, 0);
 FUNC_3(VAR_30, VAR_3, 0x16);

 FUNC_5(VAR_30, VAR_17, 0x0040);
 FUNC_5(VAR_30, VAR_19, 0x08ff);


 FUNC_4(VAR_30, VAR_12, 0x03086666);


 FUNC_3(VAR_30, VAR_2, 0x40);


 FUNC_5(VAR_30, VAR_27, 0x100a);
 FUNC_5(VAR_30, VAR_14, 0x100a);


 FUNC_5(VAR_30, VAR_24, 0x100a);


 FUNC_5(VAR_30, VAR_25, 0x100a);


 FUNC_3(VAR_30, 0x4C7, 0x80);

 FUNC_3(VAR_30, VAR_23, 0x20);

 FUNC_5(VAR_30, VAR_16, 0x1717);


 FUNC_4(VAR_30, VAR_15, 0xffffffff);
 FUNC_4(VAR_30, VAR_15 + 4, 0xffffffff);
}
