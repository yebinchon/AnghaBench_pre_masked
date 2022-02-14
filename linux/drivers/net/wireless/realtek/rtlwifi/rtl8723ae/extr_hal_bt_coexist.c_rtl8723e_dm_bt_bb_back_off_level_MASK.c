
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int sw_coexist_all_off; } ;
struct rtl_priv {TYPE_1__ btcoexist; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl_priv*,int,int) ;

void FUNC_3(struct ieee80211_hw *VAR_4, u8 VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_1(VAR_4);

 if (VAR_5 == VAR_0) {
  FUNC_0(VAR_6, VAR_2, VAR_3,
    "[BT]BBBackOffLevel Off!\n");
  FUNC_2(VAR_6, 0xc04, 0x3a05611);
 } else if (VAR_5 == VAR_1) {
  FUNC_0(VAR_6, VAR_2, VAR_3,
    "[BT]BBBackOffLevel On!\n");
  FUNC_2(VAR_6, 0xc04, 0x3a07611);
  VAR_6->btcoexist.sw_coexist_all_off = 0;
 }
}
