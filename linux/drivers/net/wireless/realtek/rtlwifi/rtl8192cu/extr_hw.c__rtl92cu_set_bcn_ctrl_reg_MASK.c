
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtl_usb {scalar_t__ reg_bcn_ctrl_val; } ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;
 struct rtl_usb* FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct rtl_priv*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_1,
          u8 VAR_2, u8 VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_0(VAR_1);
 struct rtl_usb *VAR_5 = FUNC_1(FUNC_2(VAR_1));

 VAR_5->reg_bcn_ctrl_val |= VAR_2;
 VAR_5->reg_bcn_ctrl_val &= ~VAR_3;
 FUNC_3(VAR_4, VAR_0, (u8)VAR_5->reg_bcn_ctrl_val);
}
