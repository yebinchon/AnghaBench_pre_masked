
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_ring {int dummy; } ;
struct ena_adapter {scalar_t__ missing_tx_completion_to; int last_monitored_tx_qid; int num_queues; struct ena_ring* rx_ring; struct ena_ring* tx_ring; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ena_adapter*,struct ena_ring*) ;
 int FUNC_1 (struct ena_adapter*,struct ena_ring*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct ena_adapter *VAR_4)
{
 struct ena_ring *VAR_5;
 struct ena_ring *VAR_6;
 int VAR_7, VAR_8, VAR_9;


 FUNC_2();

 if (!FUNC_3(VAR_0, &VAR_4->flags))
  return;

 if (FUNC_3(VAR_1, &VAR_4->flags))
  return;

 if (VAR_4->missing_tx_completion_to == VAR_2)
  return;

 VAR_8 = VAR_3;

 for (VAR_7 = VAR_4->last_monitored_tx_qid; VAR_7 < VAR_4->num_queues; VAR_7++) {
  VAR_5 = &VAR_4->tx_ring[VAR_7];
  VAR_6 = &VAR_4->rx_ring[VAR_7];

  VAR_9 = FUNC_1(VAR_4, VAR_5);
  if (FUNC_4(VAR_9))
   return;

  VAR_9 = FUNC_0(VAR_4, VAR_6);
  if (FUNC_4(VAR_9))
   return;

  VAR_8--;
  if (!VAR_8)
   break;
 }

 VAR_4->last_monitored_tx_qid = VAR_7 % VAR_4->num_queues;
}
