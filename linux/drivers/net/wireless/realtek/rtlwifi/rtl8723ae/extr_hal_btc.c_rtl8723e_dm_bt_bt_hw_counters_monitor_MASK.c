
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int lps_counter; } ;
struct rtl_priv {TYPE_1__ btcoexist; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_4__ {int high_priority_tx; int high_priority_rx; int low_priority_tx; int low_priority_rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int,int,int,int,int) ;
 TYPE_2__ VAR_6 ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl_priv*,int) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_7)
{
 struct rtl_priv *VAR_8 = FUNC_1(VAR_7);
 u32 VAR_9, VAR_10, VAR_11;
 u32 VAR_12 = 0, VAR_13 = 0, VAR_14 = 0, VAR_15 = 0;

 VAR_9 = VAR_4;
 VAR_10 = VAR_5;

 VAR_11 = FUNC_2(VAR_8, VAR_9);
 VAR_12 = VAR_11 & VAR_3;
 VAR_13 = (VAR_11 & VAR_2)>>16;

 VAR_11 = FUNC_2(VAR_8, VAR_10);
 VAR_14 = VAR_11 & VAR_3;
 VAR_15 = (VAR_11 & VAR_2)>>16;

 if (VAR_8->btcoexist.lps_counter > 1) {
  VAR_12 %= VAR_8->btcoexist.lps_counter;
  VAR_13 %= VAR_8->btcoexist.lps_counter;
  VAR_14 %= VAR_8->btcoexist.lps_counter;
  VAR_15 %= VAR_8->btcoexist.lps_counter;
 }

 VAR_6 = VAR_12;
 VAR_6 = VAR_13;
 VAR_6 = VAR_14;
 VAR_6 = VAR_15;

 FUNC_0(VAR_8, VAR_0, VAR_1,
  "High Priority Tx/Rx (reg 0x%x)=%x(%d)/%x(%d)\n",
  VAR_9, VAR_12, VAR_12, VAR_13, VAR_13);
 FUNC_0(VAR_8, VAR_0, VAR_1,
  "Low Priority Tx/Rx (reg 0x%x)=%x(%d)/%x(%d)\n",
  VAR_10, VAR_14, VAR_14, VAR_15, VAR_15);
 VAR_8->btcoexist.lps_counter = 0;

}
