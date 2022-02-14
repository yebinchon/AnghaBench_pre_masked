
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl_priv*,int) ;
 int FUNC_3 (struct rtl_priv*,int) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_3,
 u32 *VAR_4, u32 *VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_1(VAR_3);
 u32 VAR_7;

 FUNC_0(VAR_6, VAR_0, VAR_1, "Save MAC parameters.\n");
 for (VAR_7 = 0; VAR_7 < (VAR_2 - 1); VAR_7++)
  VAR_5[VAR_7] = FUNC_2(VAR_6, VAR_4[VAR_7]);
 VAR_5[VAR_7] = FUNC_3(VAR_6, VAR_4[VAR_7]);
}
