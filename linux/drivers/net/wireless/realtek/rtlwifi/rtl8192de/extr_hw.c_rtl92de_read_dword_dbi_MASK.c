
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl_priv*,int ) ;
 int FUNC_3 (struct rtl_priv*,int ,int) ;
 int FUNC_4 (struct rtl_priv*,int ,int) ;
 int FUNC_5 (int) ;

u32 FUNC_6(struct ieee80211_hw *VAR_3, u16 VAR_4, u8 VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_1(VAR_3);
 u32 VAR_7;

 FUNC_4(VAR_6, VAR_0, (VAR_4 & 0xFFC));
 FUNC_3(VAR_6, VAR_1, FUNC_0(1) | VAR_5);
 FUNC_5(10);
 VAR_7 = FUNC_2(VAR_6, VAR_2);
 return VAR_7;
}
