
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rtlwifi_tx_info {int dummy; } ;
struct rtl_tcb_desc {scalar_t__ use_spe_rpt; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct ieee80211_hw*,struct rtlwifi_tx_info*) ;

void FUNC_3(struct rtl_tcb_desc *VAR_0, u8 *VAR_1,
         struct ieee80211_hw *VAR_2, struct rtlwifi_tx_info *VAR_3)
{
 if (VAR_0->use_spe_rpt) {
  u16 VAR_4 = FUNC_2(VAR_2, VAR_3);

  FUNC_0(VAR_1, 1);
  FUNC_1(VAR_1, VAR_4);
 }
}
