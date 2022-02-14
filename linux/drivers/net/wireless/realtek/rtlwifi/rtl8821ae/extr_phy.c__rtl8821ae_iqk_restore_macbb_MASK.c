
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*,int,int ,int) ;
 int FUNC_4 (struct rtl_priv*,size_t,size_t) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_2,
      u32 *VAR_3,
      u32 *VAR_4,
      u32 VAR_5)
{
 u32 VAR_6;
 struct rtl_priv *VAR_7 = FUNC_2(VAR_2);

 FUNC_3(VAR_2, 0x82c, FUNC_0(31), 0x0);

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
  FUNC_4(VAR_7, VAR_4[VAR_6], VAR_3[VAR_6]);
 FUNC_1(VAR_7, VAR_0, VAR_1, "RestoreMacBB Success!!!!\n");
}
