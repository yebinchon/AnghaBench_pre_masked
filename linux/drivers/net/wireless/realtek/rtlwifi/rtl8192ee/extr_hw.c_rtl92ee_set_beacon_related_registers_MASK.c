
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rtl_priv {int dummy; } ;
struct rtl_pci {scalar_t__ reg_bcn_ctrl_val; } ;
struct rtl_mac {int beacon_interval; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ieee80211_hw*) ;
 struct rtl_mac* FUNC_2 (struct rtl_priv*) ;
 struct rtl_pci* FUNC_3 (int ) ;
 int FUNC_4 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (struct rtl_priv*,int,int) ;
 int FUNC_7 (struct rtl_priv*,int ,int) ;

void FUNC_8(struct ieee80211_hw *VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_5(VAR_6);
 struct rtl_mac *VAR_8 = FUNC_2(FUNC_5(VAR_6));
 struct rtl_pci *VAR_9 = FUNC_3(FUNC_4(VAR_6));
 u16 VAR_10, VAR_11;

 VAR_10 = VAR_8->beacon_interval;
 VAR_11 = 2;
 FUNC_1(VAR_6);
 FUNC_7(VAR_7, VAR_0, VAR_11);
 FUNC_7(VAR_7, VAR_3, VAR_10);
 FUNC_7(VAR_7, VAR_1, 0x660f);
 FUNC_6(VAR_7, VAR_4, 0x18);
 FUNC_6(VAR_7, VAR_5, 0x18);
 FUNC_6(VAR_7, 0x606, 0x30);
 VAR_9->reg_bcn_ctrl_val |= FUNC_0(3);
 FUNC_6(VAR_7, VAR_2, (u8)VAR_9->reg_bcn_ctrl_val);
}
