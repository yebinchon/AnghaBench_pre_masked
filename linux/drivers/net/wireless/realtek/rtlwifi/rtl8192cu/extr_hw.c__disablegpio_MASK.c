
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct rtl_priv*,scalar_t__) ;
 int FUNC_2 (struct rtl_priv*,scalar_t__) ;
 int FUNC_3 (struct rtl_priv*,scalar_t__,int) ;
 int FUNC_4 (struct rtl_priv*,scalar_t__,int) ;
 int FUNC_5 (struct rtl_priv*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_0(VAR_3);







 u8 VAR_5;
 u16 VAR_6;
 u32 VAR_7;


 FUNC_5(VAR_4, VAR_1+2, 0x0000);
 VAR_7 = FUNC_1(VAR_4, VAR_1) & 0xFFFF00FF;
 VAR_5 = (u8)(VAR_7&0x000000FF);
 VAR_7 |= ((VAR_5<<8) | 0x00FF0000);
 FUNC_4(VAR_4, VAR_1, VAR_7);

 FUNC_3(VAR_4, VAR_0+3, 0x00);
 VAR_6 = FUNC_2(VAR_4, VAR_0+2) & 0xFF0F;
 VAR_5 = (u8)(VAR_6&0x000F);
 VAR_6 |= ((VAR_5<<4) | 0x0780);
 FUNC_5(VAR_4, VAR_1+2, VAR_6);

 FUNC_5(VAR_4, VAR_2, 0x8080);
}
