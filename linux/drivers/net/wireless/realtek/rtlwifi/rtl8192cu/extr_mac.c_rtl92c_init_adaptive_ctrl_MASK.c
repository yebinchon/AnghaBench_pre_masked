
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct rtl_priv*,int ) ;
 int FUNC_6 (struct rtl_priv*,int ,int) ;
 int FUNC_7 (struct rtl_priv*,int ,int) ;

void FUNC_8(struct ieee80211_hw *VAR_5)
{
 u16 VAR_6;
 u32 VAR_7;
 struct rtl_priv *VAR_8 = FUNC_4(VAR_5);


 VAR_7 = FUNC_5(VAR_8, VAR_3);
 VAR_7 &= ~VAR_0;
 VAR_7 |= VAR_1;
 FUNC_6(VAR_8, VAR_3, VAR_7);

 VAR_6 = FUNC_1(0x10) | FUNC_2(0x10);
 FUNC_7(VAR_8, VAR_4, VAR_6);

 VAR_6 = FUNC_0(0x30) | FUNC_3(0x30);
 FUNC_6(VAR_8, VAR_2, VAR_6);
}
