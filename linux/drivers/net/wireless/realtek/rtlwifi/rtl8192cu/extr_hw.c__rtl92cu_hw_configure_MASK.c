
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_usb {int reg_bcn_ctrl_val; } ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;
 struct rtl_usb* FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct rtl_priv*,int,int) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_0(VAR_3);
 struct rtl_usb *VAR_5 = FUNC_1(FUNC_2(VAR_3));


 FUNC_3(VAR_4, VAR_2, 0x0f);
 FUNC_3(VAR_4, 0x15, 0xe9);


 FUNC_3(VAR_4, VAR_1, 0xFF);

 FUNC_3(VAR_4, 0xfe40, 0xe0);
 FUNC_3(VAR_4, 0xfe41, 0x8d);
 FUNC_3(VAR_4, 0xfe42, 0x80);
 VAR_5->reg_bcn_ctrl_val = 0x18;
 FUNC_3(VAR_4, VAR_0, (u8)VAR_5->reg_bcn_ctrl_val);
}
