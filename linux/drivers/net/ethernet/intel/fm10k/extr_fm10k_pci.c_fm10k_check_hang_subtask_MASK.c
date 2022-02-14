
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int count; } ;
struct TYPE_3__ {int count; } ;
struct fm10k_q_vector {int itr; TYPE_2__ rx; TYPE_1__ tx; } ;
struct fm10k_intfc {int num_tx_queues; int num_q_vectors; struct fm10k_q_vector** q_vector; int * tx_ring; int netdev; scalar_t__ next_tx_hang_check; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static void FUNC_5(struct fm10k_intfc *VAR_6)
{

 if (FUNC_2(VAR_3, VAR_6->state) ||
     FUNC_2(VAR_4, VAR_6->state))
  return;


 if (FUNC_3(VAR_6->next_tx_hang_check))
  return;
 VAR_6->next_tx_hang_check = VAR_5 + (2 * VAR_2);

 if (FUNC_0(VAR_6->netdev)) {
  int VAR_7;


  for (VAR_7 = 0; VAR_7 < VAR_6->num_tx_queues; VAR_7++)
   FUNC_1(VAR_6->tx_ring[VAR_7]);


  for (VAR_7 = 0; VAR_7 < VAR_6->num_q_vectors; VAR_7++) {
   struct fm10k_q_vector *VAR_8 = VAR_6->q_vector[VAR_7];

   if (!VAR_8->tx.count && !VAR_8->rx.count)
    continue;
   FUNC_4(VAR_0 | VAR_1, VAR_8->itr);
  }
 }
}
