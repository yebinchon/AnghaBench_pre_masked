
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int chains; scalar_t__* chain_signal; scalar_t__ last_rssi; } ;
struct iwl_lq_sta {TYPE_2__ pers; } ;
struct TYPE_3__ {struct iwl_lq_sta rs_drv; } ;
struct iwl_mvm_sta {TYPE_1__ lq_sta; } ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_rx_status {int chains; scalar_t__* chain_signal; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;

void FUNC_2(struct iwl_mvm *VAR_1,
    struct iwl_mvm_sta *VAR_2,
    struct ieee80211_rx_status *VAR_3)
{
 struct iwl_lq_sta *VAR_4 = &VAR_2->lq_sta.rs_drv;
 int VAR_5;

 VAR_4->pers.chains = VAR_3->chains;
 VAR_4->pers.chain_signal[0] = VAR_3->chain_signal[0];
 VAR_4->pers.chain_signal[1] = VAR_3->chain_signal[1];
 VAR_4->pers.chain_signal[2] = VAR_3->chain_signal[2];
 VAR_4->pers.last_rssi = VAR_0;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4->pers.chain_signal); VAR_5++) {
  if (!(VAR_4->pers.chains & FUNC_1(VAR_5)))
   continue;

  if (VAR_4->pers.chain_signal[VAR_5] > VAR_4->pers.last_rssi)
   VAR_4->pers.last_rssi = VAR_4->pers.chain_signal[VAR_5];
 }
}
