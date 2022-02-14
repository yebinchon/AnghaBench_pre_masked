
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int * VAR_0 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct rtl_priv*,int ,int) ;

void FUNC_2(struct ieee80211_hw *VAR_1, u8 VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_0(VAR_1);
 u8 VAR_4;

 for (VAR_4 = 0; VAR_4 < 6; VAR_4++)
  FUNC_1(VAR_3, VAR_0[VAR_4], VAR_2);
}
