
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dynamic_primary_cca {scalar_t__ mf_state; scalar_t__ ch_offset; scalar_t__ monitor_flag; scalar_t__ intf_type; scalar_t__ intf_flag; scalar_t__ dup_rts_flag; } ;
struct rtl_priv {struct dynamic_primary_cca primarycca; } ;
struct rtl_hal {scalar_t__ rts_en; } ;
struct ieee80211_hw {int dummy; } ;


 struct rtl_hal* FUNC_0 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_0)
{
 struct rtl_priv *VAR_1 = FUNC_1(VAR_0);
 struct rtl_hal *VAR_2 = FUNC_0(VAR_1);
 struct dynamic_primary_cca *VAR_3 = &VAR_1->primarycca;

 VAR_2->rts_en = 0;
 VAR_3->dup_rts_flag = 0;
 VAR_3->intf_flag = 0;
 VAR_3->intf_type = 0;
 VAR_3->monitor_flag = 0;
 VAR_3->ch_offset = 0;
 VAR_3->mf_state = 0;
}
