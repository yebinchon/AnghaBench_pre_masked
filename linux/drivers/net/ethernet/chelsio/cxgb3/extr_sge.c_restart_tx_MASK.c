
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sge_qset {TYPE_1__* txq; int txq_stopped; int tx_q; int netdev; } ;
struct TYPE_2__ {int qresume_tsk; int restarts; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (size_t,int *) ;
 scalar_t__ FUNC_5 (size_t,int *) ;

__attribute__((used)) static void FUNC_6(struct sge_qset *VAR_3)
{
 if (FUNC_5(VAR_1, &VAR_3->txq_stopped) &&
     FUNC_2(&VAR_3->txq[VAR_1]) &&
     FUNC_4(VAR_1, &VAR_3->txq_stopped)) {
  VAR_3->txq[VAR_1].restarts++;
  if (FUNC_0(VAR_3->netdev))
   FUNC_1(VAR_3->tx_q);
 }

 if (FUNC_5(VAR_2, &VAR_3->txq_stopped) &&
     FUNC_2(&VAR_3->txq[VAR_2]) &&
     FUNC_4(VAR_2, &VAR_3->txq_stopped)) {
  VAR_3->txq[VAR_2].restarts++;
  FUNC_3(&VAR_3->txq[VAR_2].qresume_tsk);
 }
 if (FUNC_5(VAR_0, &VAR_3->txq_stopped) &&
     FUNC_2(&VAR_3->txq[VAR_0]) &&
     FUNC_4(VAR_0, &VAR_3->txq_stopped)) {
  VAR_3->txq[VAR_0].restarts++;
  FUNC_3(&VAR_3->txq[VAR_0].qresume_tsk);
 }
}
