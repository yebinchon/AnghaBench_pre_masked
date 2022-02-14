
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int,int) ;
 scalar_t__ FUNC_1 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (int,int) ;

void FUNC_4(struct ieee80211_hw *VAR_2, u32 VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_2(VAR_2);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  if (FUNC_1(VAR_2))
   break;
  FUNC_3(1000, 2000);
  FUNC_0(VAR_4, VAR_0, VAR_1,
    "Wait 1ms (%d/%d) to disable key.\n", VAR_5, VAR_3);
 }
}
