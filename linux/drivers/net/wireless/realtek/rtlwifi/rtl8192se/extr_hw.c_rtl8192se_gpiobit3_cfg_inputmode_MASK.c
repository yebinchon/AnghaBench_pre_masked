
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct rtl_priv*,int ) ;
 int FUNC_2 (struct rtl_priv*,int ,int) ;

void FUNC_3(struct ieee80211_hw *VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_0(VAR_5);
 u8 VAR_7;


 FUNC_2(VAR_6, VAR_4, (VAR_0 | VAR_1));
 VAR_7 = FUNC_1(VAR_6, VAR_2);


 VAR_7 &= VAR_3;
 FUNC_2(VAR_6, VAR_2, VAR_7);

}
