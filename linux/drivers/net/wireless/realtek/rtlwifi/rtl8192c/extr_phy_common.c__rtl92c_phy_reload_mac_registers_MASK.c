
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct rtl_priv*,int,int ) ;
 int FUNC_2 (struct rtl_priv*,int,int) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_1,
          u32 *VAR_2, u32 *VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_0(VAR_1);
 u32 VAR_5;

 for (VAR_5 = 0; VAR_5 < (VAR_0 - 1); VAR_5++)
  FUNC_1(VAR_4, VAR_2[VAR_5], (u8)VAR_3[VAR_5]);
 FUNC_2(VAR_4, VAR_2[VAR_5], VAR_3[VAR_5]);
}
