
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*,scalar_t__,int,int) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_3, bool VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_2(VAR_3);


 FUNC_1(VAR_5, VAR_0, VAR_1, "\n");

 if (VAR_4)
  FUNC_3(VAR_3, VAR_2 + 4, FUNC_0(29) | FUNC_0(28), 0x1);
 else
  FUNC_3(VAR_3, VAR_2 + 4, FUNC_0(29) | FUNC_0(28), 0x2);
}
