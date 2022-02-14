
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int fw_coexist_all_off; int balance_on; } ;
struct rtl_priv {TYPE_1__ btcoexist; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,char*,int,int,int) ;
 int FUNC_1 (struct ieee80211_hw*,int,int,int*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

void FUNC_3(struct ieee80211_hw *VAR_2,
       bool VAR_3, u8 VAR_4, u8 VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_2(VAR_2);
 u8 VAR_7[3] = {0};

 if (VAR_3) {
  VAR_7[2] = 1;
  VAR_7[1] = VAR_5;
  VAR_7[0] = VAR_4;
  VAR_6->btcoexist.fw_coexist_all_off = 0;
 } else {
  VAR_7[2] = 0;
  VAR_7[1] = 0;
  VAR_7[0] = 0;
 }
 VAR_6->btcoexist.balance_on = VAR_3;

 FUNC_0(VAR_6, VAR_0, VAR_1,
   "[DM][BT], Balance=[%s:%dms:%dms], write 0xc=0x%x\n",
   VAR_3 ? "ON" : "OFF", VAR_4, VAR_5, VAR_7[0]<<16 |
   VAR_7[1]<<8 | VAR_7[2]);

 FUNC_1(VAR_2, 0xc, 3, VAR_7);
}
