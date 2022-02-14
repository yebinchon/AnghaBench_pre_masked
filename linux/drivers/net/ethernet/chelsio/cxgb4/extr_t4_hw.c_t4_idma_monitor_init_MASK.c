
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_idma_monitor_state {int idma_1s_thresh; scalar_t__* idma_stalled; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct adapter*) ;

void FUNC_1(struct adapter *VAR_0,
     struct sge_idma_monitor_state *VAR_1)
{
 VAR_1->idma_1s_thresh = FUNC_0(VAR_0) * 1000000;
 VAR_1->idma_stalled[0] = 0;
 VAR_1->idma_stalled[1] = 0;
}
