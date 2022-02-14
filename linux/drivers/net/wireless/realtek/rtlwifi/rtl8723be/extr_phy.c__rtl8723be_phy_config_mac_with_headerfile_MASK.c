
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (struct ieee80211_hw*,int ,int ,int ) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int VAR_4 ;

__attribute__((used)) static bool FUNC_3(struct ieee80211_hw *VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_2(VAR_5);

 FUNC_0(VAR_6, VAR_0, VAR_1, "Read rtl8723beMACPHY_Array\n");

 return FUNC_1(VAR_5,
   VAR_2, VAR_3,
   VAR_4);
}
