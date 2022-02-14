
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fm10k_ring {scalar_t__ next_to_use; scalar_t__ next_to_clean; } ;
struct fm10k_intfc {int num_tx_queues; int flags; struct fm10k_ring** tx_ring; int netdev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct fm10k_intfc *VAR_1)
{
 int VAR_2 = 0;
 int VAR_3;


 if (FUNC_0(VAR_1->netdev))
  return;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_tx_queues; VAR_3++) {
  struct fm10k_ring *VAR_4 = VAR_1->tx_ring[VAR_3];

  if (VAR_4->next_to_use != VAR_4->next_to_clean) {
   VAR_2 = 1;
   break;
  }
 }





 if (VAR_2)
  FUNC_1(VAR_0, VAR_1->flags);
}
