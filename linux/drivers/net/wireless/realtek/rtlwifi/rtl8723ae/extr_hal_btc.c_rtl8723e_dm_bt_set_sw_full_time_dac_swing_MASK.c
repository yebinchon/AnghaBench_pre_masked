
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int sw_coexist_all_off; } ;
struct rtl_priv {TYPE_1__ btcoexist; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_1 (struct ieee80211_hw*,int,int,int) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_3(
  struct ieee80211_hw *VAR_2,
  bool VAR_3,
  u32 VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_2(VAR_2);

 if (VAR_3) {
  FUNC_0(VAR_5, VAR_0, VAR_1,
    "[BTCoex], SwDacSwing = 0x%x\n", VAR_4);
  FUNC_1(VAR_2, 0x880, 0xff000000,
           VAR_4);
  VAR_5->btcoexist.sw_coexist_all_off = 0;
 } else {
  FUNC_0(VAR_5, VAR_0, VAR_1,
    "[BTCoex], SwDacSwing Off!\n");
  FUNC_1(VAR_2, 0x880, 0xff000000, 0xc0);
 }
}
