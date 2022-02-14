
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps_t {scalar_t__ rssi_val_min; void* cur_rfstate; void* pre_rfstate; void* cur_ccasate; void* pre_ccastate; } ;
struct rtl_priv {struct ps_t dm_pstable; } ;
struct ieee80211_hw {int dummy; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_hw *VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_0(VAR_2);
 struct ps_t *VAR_4 = &VAR_3->dm_pstable;

 VAR_4->pre_ccastate = VAR_0;
 VAR_4->cur_ccasate = VAR_0;
 VAR_4->pre_rfstate = VAR_1;
 VAR_4->cur_rfstate = VAR_1;
 VAR_4->rssi_val_min = 0;
}
