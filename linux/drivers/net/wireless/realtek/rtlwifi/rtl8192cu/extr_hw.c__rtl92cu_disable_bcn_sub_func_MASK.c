
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_priv {int dummy; } ;
struct rtl_hal {int version; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211_hw*,int ,int ) ;
 struct rtl_hal* FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_0)
{
 struct rtl_priv *VAR_1 = FUNC_4(VAR_0);
 struct rtl_hal *VAR_2 = FUNC_3(VAR_1);

 if (FUNC_1(VAR_2->version))
  FUNC_2(VAR_0, FUNC_0(1), 0);
 else
  FUNC_2(VAR_0, FUNC_0(4), 0);
}
