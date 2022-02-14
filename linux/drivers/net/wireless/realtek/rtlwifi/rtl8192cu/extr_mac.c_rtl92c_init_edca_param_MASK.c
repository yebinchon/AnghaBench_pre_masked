
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct rtl_priv*,scalar_t__,int) ;

void FUNC_2(struct ieee80211_hw *VAR_1,
       u16 VAR_2, u16 VAR_3, u8 VAR_4, u8 VAR_5, u8 VAR_6)
{



 u32 VAR_7;
 struct rtl_priv *VAR_8 = FUNC_0(VAR_1);

 VAR_7 = (u32)VAR_6;
 VAR_7 |= ((u32)VAR_4 & 0xF) << 8;
 VAR_7 |= ((u32)VAR_5 & 0xF) << 12;
 VAR_7 |= (u32)VAR_3 << 16;

 FUNC_1(VAR_8, (VAR_0 + (VAR_2 * 4)), VAR_7);
}
