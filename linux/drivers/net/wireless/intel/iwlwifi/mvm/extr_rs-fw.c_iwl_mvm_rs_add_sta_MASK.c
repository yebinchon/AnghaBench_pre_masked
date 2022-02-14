
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dbg_fixed_rate; int last_rssi; int chain_signal; scalar_t__ chains; int sta_id; struct iwl_mvm* drv; } ;
struct iwl_lq_sta_rs_fw {TYPE_1__ pers; scalar_t__ last_rate_n_flags; } ;
struct TYPE_4__ {struct iwl_lq_sta_rs_fw rs_fw; } ;
struct iwl_mvm_sta {int sta_id; TYPE_2__ lq_sta; } ;
struct iwl_mvm {int dummy; } ;


 int FUNC_0 (struct iwl_mvm*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int) ;

void FUNC_2(struct iwl_mvm *VAR_1, struct iwl_mvm_sta *VAR_2)
{
 struct iwl_lq_sta_rs_fw *VAR_3 = &VAR_2->lq_sta.rs_fw;

 FUNC_0(VAR_1, "create station rate scale window\n");

 VAR_3->pers.drv = VAR_1;
 VAR_3->pers.sta_id = VAR_2->sta_id;
 VAR_3->pers.chains = 0;
 FUNC_1(VAR_3->pers.chain_signal, 0, sizeof(VAR_3->pers.chain_signal));
 VAR_3->pers.last_rssi = VAR_0;
 VAR_3->last_rate_n_flags = 0;




}
