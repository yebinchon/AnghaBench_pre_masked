
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct qede_tx_queue {int tx_pbl; int * hw_cons_ptr; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;

int FUNC_3(struct qede_tx_queue *VAR_0)
{
 u16 VAR_1;


 FUNC_0();
 VAR_1 = FUNC_1(*VAR_0->hw_cons_ptr);
 if (FUNC_2(&VAR_0->tx_pbl) == VAR_1 + 1)
  return 0;

 return VAR_1 != FUNC_2(&VAR_0->tx_pbl);
}
