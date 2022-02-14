
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
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 struct rtl_pci* FUNC_0 (int ) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct rtl_priv*,scalar_t__,int) ;
 int FUNC_4 (struct rtl_priv*,scalar_t__,int) ;
 int FUNC_5 (struct rtl_priv*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_17)
{
 struct rtl_priv *VAR_18 = FUNC_2(VAR_17);
 struct rtl_pci *VAR_19 = FUNC_0(FUNC_1(VAR_17));
 u32 VAR_20;

 VAR_20 = VAR_0 | VAR_1;

 FUNC_4(VAR_18, VAR_14, VAR_20);


 FUNC_4(VAR_18, VAR_3 + 4, 0xfffff000);


 FUNC_4(VAR_18, VAR_4 + 4, 0x003ff000);


 FUNC_5(VAR_18, VAR_8, 0x1F00);


 FUNC_3(VAR_18, VAR_2, 0x70);


 FUNC_5(VAR_18, VAR_13, 0x0707);


 FUNC_4(VAR_18, VAR_6, 0x01000000);
 FUNC_4(VAR_18, VAR_6 + 4, 0x07060504);
 FUNC_4(VAR_18, VAR_12, 0x01000000);
 FUNC_4(VAR_18, VAR_12 + 4, 0x07060504);

 VAR_19->reg_bcn_ctrl_val = 0x1d;
 FUNC_3(VAR_18, VAR_5, VAR_19->reg_bcn_ctrl_val);


 FUNC_3(VAR_18, VAR_16 + 1, 0xff);

 FUNC_5(VAR_18, VAR_11, 0x0040);


 FUNC_4(VAR_18, VAR_7, 0x03086666);

 FUNC_3(VAR_18, VAR_9, 0x80);

 FUNC_3(VAR_18, VAR_15, 0x20);

 FUNC_3(VAR_18, VAR_10, 0x1F);
}
