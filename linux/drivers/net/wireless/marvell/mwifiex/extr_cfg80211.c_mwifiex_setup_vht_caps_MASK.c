
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mwifiex_private {struct mwifiex_adapter* adapter; } ;
struct mwifiex_adapter {int hw_dot_11ac_mcs_support; int hw_dot_11ac_dev_cap; } ;
struct TYPE_2__ {scalar_t__ tx_highest; void* tx_mcs_map; scalar_t__ rx_highest; void* rx_mcs_map; } ;
struct ieee80211_sta_vht_cap {int vht_supported; TYPE_1__ vht_mcs; int cap; } ;


 void* FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_sta_vht_cap *VAR_0,
       struct mwifiex_private *VAR_1)
{
 struct mwifiex_adapter *VAR_2 = VAR_1->adapter;

 VAR_0->vht_supported = 1;

 VAR_0->cap = VAR_2->hw_dot_11ac_dev_cap;

 VAR_0->vht_mcs.rx_mcs_map = FUNC_0(
    VAR_2->hw_dot_11ac_mcs_support & 0xFFFF);
 VAR_0->vht_mcs.rx_highest = 0;
 VAR_0->vht_mcs.tx_mcs_map = FUNC_0(
    VAR_2->hw_dot_11ac_mcs_support >> 16);
 VAR_0->vht_mcs.tx_highest = 0;
}
