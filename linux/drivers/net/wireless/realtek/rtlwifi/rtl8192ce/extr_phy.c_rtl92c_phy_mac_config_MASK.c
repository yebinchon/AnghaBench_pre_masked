
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_priv {int dummy; } ;
struct rtl_hal {int version; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 struct rtl_hal* FUNC_2 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct rtl_priv*,int,int) ;

bool FUNC_5(struct ieee80211_hw *VAR_0)
{
 struct rtl_priv *VAR_1 = FUNC_3(VAR_0);
 struct rtl_hal *VAR_2 = FUNC_2(FUNC_3(VAR_0));
 bool VAR_3 = FUNC_0(VAR_2->version);
 bool VAR_4 = FUNC_1(VAR_0);

 if (VAR_3)
  FUNC_4(VAR_1, 0x14, 0x71);
 else
  FUNC_4(VAR_1, 0x04CA, 0x0A);
 return VAR_4;
}
