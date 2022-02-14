
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hns3_nic_priv {int vector_num; int netdev; struct hns3_enet_tqp_vector* tqp_vector; } ;
struct TYPE_4__ {struct hns3_enet_ring* ring; } ;
struct hns3_enet_tqp_vector {int affinity_mask; TYPE_2__ tx_group; } ;
struct hns3_enet_ring {struct hns3_enet_ring* next; TYPE_1__* tqp; } ;
struct TYPE_3__ {int tqp_index; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct hns3_nic_priv *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->vector_num; VAR_1++) {
  struct hns3_enet_tqp_vector *VAR_2 = &VAR_0->tqp_vector[VAR_1];
  struct hns3_enet_ring *VAR_3 = VAR_2->tx_group.ring;

  while (VAR_3) {
   int VAR_4;

   VAR_4 = FUNC_1(VAR_0->netdev,
        &VAR_2->affinity_mask,
        VAR_3->tqp->tqp_index);
   if (VAR_4)
    FUNC_0(VAR_0->netdev,
         "set xps queue failed: %d", VAR_4);

   VAR_3 = VAR_3->next;
  }
 }
}
