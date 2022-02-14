
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hw_coexist_all_off; } ;
struct rtl_priv {TYPE_1__ btcoexist; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl_priv*,int,int) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_3, bool VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_1(VAR_3);

 if (VAR_0 == VAR_4) {
  FUNC_0(VAR_5, VAR_1, VAR_2, "PTA mode on\n");

  FUNC_2(VAR_5, 0x40, 0x20);
  VAR_5->btcoexist.hw_coexist_all_off = 0;
 } else {
  FUNC_0(VAR_5, VAR_1, VAR_2, "PTA mode off\n");
  FUNC_2(VAR_5, 0x40, 0x0);
 }
}
