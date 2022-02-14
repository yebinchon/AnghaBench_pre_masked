
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*,size_t,int ,size_t) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_3,
           u32 *VAR_4, u32 *VAR_5,
           u32 VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_1(VAR_3);
 u32 VAR_8;

 FUNC_0(VAR_7, VAR_0, VAR_1,
  "Reload ADDA power saving parameters !\n");
 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
  FUNC_2(VAR_3, VAR_4[VAR_8], VAR_2, VAR_5[VAR_8]);
}
