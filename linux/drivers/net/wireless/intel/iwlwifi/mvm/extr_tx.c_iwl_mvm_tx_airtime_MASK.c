
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int airtime; } ;
struct iwl_mvm_tcm_mac {TYPE_1__ tx; } ;
struct iwl_mvm_sta {int mac_id_n_color; } ;
struct TYPE_4__ {int work; scalar_t__ ts; scalar_t__ paused; struct iwl_mvm_tcm_mac* data; } ;
struct iwl_mvm {TYPE_2__ tcm; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct iwl_mvm *VAR_4,
          struct iwl_mvm_sta *VAR_5,
          int VAR_6)
{
 int VAR_7 = VAR_5->mac_id_n_color & VAR_0;
 struct iwl_mvm_tcm_mac *VAR_8;

 if (VAR_7 >= VAR_2)
  return;

 VAR_8 = &VAR_4->tcm.data[VAR_7];

 if (VAR_4->tcm.paused)
  return;

 if (FUNC_1(VAR_3, VAR_4->tcm.ts + VAR_1))
  FUNC_0(&VAR_4->tcm.work, 0);

 VAR_8->tx.airtime += VAR_6;
}
