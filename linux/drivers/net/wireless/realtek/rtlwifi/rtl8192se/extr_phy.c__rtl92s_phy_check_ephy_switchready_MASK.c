
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl_priv*,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_0)
{
 struct rtl_priv *VAR_1 = FUNC_1(VAR_0);
 u32 VAR_2 = 100;
 u8 VAR_3;

 VAR_3 = FUNC_2(VAR_1, 0x554);
 while ((VAR_3 & FUNC_0(5)) && (VAR_2 > 0)) {
  VAR_3 = FUNC_2(VAR_1, 0x554);
  VAR_2--;


  FUNC_3(50);
 }
}
