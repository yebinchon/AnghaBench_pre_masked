
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ieee80211_hw*,int const*,int) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl_priv*,scalar_t__) ;
 int FUNC_3 (struct rtl_priv*,scalar_t__,int) ;

void FUNC_4(struct ieee80211_hw *VAR_1, u32 VAR_2, const u8 *VAR_3,
         u32 VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_1(VAR_1);
 u8 VAR_6;
 u8 VAR_7 = (u8)(VAR_2 & 0x07);

 VAR_6 = (FUNC_2(VAR_5, VAR_0 + 2) & 0xF8) | VAR_7;

 FUNC_3(VAR_5, (VAR_0 + 2), VAR_6);
 FUNC_0(VAR_1, VAR_3, VAR_4);
}
