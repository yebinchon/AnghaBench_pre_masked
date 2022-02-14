
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int airtime; int pkts; } ;
struct TYPE_5__ {int airtime; int pkts; } ;
struct iwl_mvm_tcm_mac {TYPE_2__ tx; TYPE_1__ rx; } ;
struct TYPE_7__ {scalar_t__ global_load; scalar_t__* low_latency; } ;
struct TYPE_8__ {int paused; int lock; int work; TYPE_3__ result; struct iwl_mvm_tcm_mac* data; void* ll_ts; void* ts; } ;
struct iwl_mvm {TYPE_4__ tcm; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct iwl_mvm *VAR_5)
{
 int VAR_6;
 bool VAR_7 = 0;

 FUNC_3(&VAR_5->tcm.lock);
 VAR_5->tcm.ts = VAR_4;
 VAR_5->tcm.ll_ts = VAR_4;
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  struct iwl_mvm_tcm_mac *VAR_8 = &VAR_5->tcm.data[VAR_6];

  FUNC_0(&VAR_8->rx.pkts, 0, sizeof(VAR_8->rx.pkts));
  FUNC_0(&VAR_8->tx.pkts, 0, sizeof(VAR_8->tx.pkts));
  FUNC_0(&VAR_8->rx.airtime, 0, sizeof(VAR_8->rx.airtime));
  FUNC_0(&VAR_8->tx.airtime, 0, sizeof(VAR_8->tx.airtime));

  if (VAR_5->tcm.result.low_latency[VAR_6])
   VAR_7 = 1;
 }

 FUNC_2();
 VAR_5->tcm.paused = 0;





 if (VAR_5->tcm.result.global_load > VAR_0)
  FUNC_1(&VAR_5->tcm.work, VAR_2);
 else if (VAR_7)
  FUNC_1(&VAR_5->tcm.work, VAR_1);

 FUNC_4(&VAR_5->tcm.lock);
}
