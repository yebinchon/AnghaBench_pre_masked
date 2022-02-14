
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_4__ {int * pkts; } ;
struct iwl_mvm_tcm_mac {TYPE_2__ tx; } ;
struct iwl_mvm_sta {int mac_id_n_color; } ;
struct TYPE_3__ {struct iwl_mvm_tcm_mac* data; } ;
struct iwl_mvm {TYPE_1__ tcm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t* VAR_3 ;

__attribute__((used)) static int FUNC_0(struct iwl_mvm *VAR_4,
     struct iwl_mvm_sta *VAR_5, int VAR_6)
{
 u32 VAR_7 = VAR_3[VAR_6];
 int VAR_8 = VAR_5->mac_id_n_color & VAR_1;
 struct iwl_mvm_tcm_mac *VAR_9;

 if (VAR_8 >= VAR_2)
  return -VAR_0;

 VAR_9 = &VAR_4->tcm.data[VAR_8];

 VAR_9->tx.pkts[VAR_7]++;

 return 0;
}
