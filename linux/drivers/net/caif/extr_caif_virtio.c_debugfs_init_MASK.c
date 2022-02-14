
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_flow_on; int tx_kicks; int tx_no_mem; int tx_full_ring; int rx_kicks; int rx_nomem; int rx_napi_resched; int rx_napi_complete; } ;
struct cfv_info {TYPE_1__ stats; int debugfs; int ndev; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*,int,int ,int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(struct cfv_info *VAR_0)
{
 VAR_0->debugfs = FUNC_0(FUNC_2(VAR_0->ndev), ((void*)0));

 FUNC_1("rx-napi-complete", 0400, VAR_0->debugfs,
      &VAR_0->stats.rx_napi_complete);
 FUNC_1("rx-napi-resched", 0400, VAR_0->debugfs,
      &VAR_0->stats.rx_napi_resched);
 FUNC_1("rx-nomem", 0400, VAR_0->debugfs,
      &VAR_0->stats.rx_nomem);
 FUNC_1("rx-kicks", 0400, VAR_0->debugfs,
      &VAR_0->stats.rx_kicks);
 FUNC_1("tx-full-ring", 0400, VAR_0->debugfs,
      &VAR_0->stats.tx_full_ring);
 FUNC_1("tx-no-mem", 0400, VAR_0->debugfs,
      &VAR_0->stats.tx_no_mem);
 FUNC_1("tx-kicks", 0400, VAR_0->debugfs,
      &VAR_0->stats.tx_kicks);
 FUNC_1("tx-flow-on", 0400, VAR_0->debugfs,
      &VAR_0->stats.tx_flow_on);
}
