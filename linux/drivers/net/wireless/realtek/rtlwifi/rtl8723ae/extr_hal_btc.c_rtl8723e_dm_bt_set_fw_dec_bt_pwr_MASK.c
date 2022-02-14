
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int fw_coexist_all_off; } ;
struct rtl_priv {TYPE_1__ btcoexist; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,char*,int ) ;
 int FUNC_2 (struct ieee80211_hw*,int,int,int *) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_4(
  struct ieee80211_hw *VAR_2, bool VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_3(VAR_2);
 u8 VAR_5[1] = {0};

 VAR_5[0] = 0;

 if (VAR_3) {
  VAR_5[0] |= FUNC_0(1);
  VAR_4->btcoexist.fw_coexist_all_off = 0;
 }

 FUNC_1(VAR_4, VAR_0, VAR_1,
   "[BTCoex], decrease Bt Power : %s, write 0x21=0x%x\n",
   (VAR_3 ? "Yes!!" : "No!!"), VAR_5[0]);

 FUNC_2(VAR_2, 0x21, 1, VAR_5);
}
