
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int init_set; scalar_t__ lps_counter; scalar_t__ previous_state_h; scalar_t__ cstate_h; scalar_t__ previous_state; scalar_t__ cstate; void* bt_rfreg_origin_1f; void* bt_rfreg_origin_1e; } ;
struct rtl_priv {TYPE_1__ btcoexist; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum radio_path { ____Placeholder_radio_path } radio_path ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct ieee80211_hw*,int,int ,int) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl_priv*,int,int) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_1(VAR_2);

 VAR_3->btcoexist.bt_rfreg_origin_1e
  = FUNC_0(VAR_2, (enum radio_path)0, VAR_0, 0xfffff);
 VAR_3->btcoexist.bt_rfreg_origin_1f
  = FUNC_0(VAR_2, (enum radio_path)0, VAR_1, 0xf0);

 VAR_3->btcoexist.cstate = 0;
 VAR_3->btcoexist.previous_state = 0;
 VAR_3->btcoexist.cstate_h = 0;
 VAR_3->btcoexist.previous_state_h = 0;
 VAR_3->btcoexist.lps_counter = 0;


 FUNC_2(VAR_3, 0x76e, 0x4);
 FUNC_2(VAR_3, 0x778, 0x3);
 FUNC_2(VAR_3, 0x40, 0x20);

 VAR_3->btcoexist.init_set = 1;
}
