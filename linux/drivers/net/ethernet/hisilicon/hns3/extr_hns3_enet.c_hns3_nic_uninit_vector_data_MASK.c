
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hns3_nic_priv {int vector_num; struct hns3_enet_tqp_vector* tqp_vector; struct hnae3_handle* ae_handle; } ;
struct TYPE_6__ {int ring; } ;
struct hns3_enet_tqp_vector {scalar_t__ irq_init_flag; int napi; TYPE_3__ tx_group; TYPE_3__ rx_group; int vector_irq; } ;
struct hnae3_ring_chain_node {int dummy; } ;
struct hnae3_handle {TYPE_2__* ae_algo; } ;
struct TYPE_5__ {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* unmap_ring_from_vector ) (struct hnae3_handle*,int ,struct hnae3_ring_chain_node*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct hns3_enet_tqp_vector*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct hns3_enet_tqp_vector*,struct hnae3_ring_chain_node*) ;
 int FUNC_3 (struct hns3_enet_tqp_vector*,struct hnae3_ring_chain_node*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct hnae3_handle*,int ,struct hnae3_ring_chain_node*) ;

__attribute__((used)) static void FUNC_7(struct hns3_nic_priv *VAR_2)
{
 struct hnae3_ring_chain_node VAR_3;
 struct hnae3_handle *VAR_4 = VAR_2->ae_handle;
 struct hns3_enet_tqp_vector *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2->vector_num; VAR_6++) {
  VAR_5 = &VAR_2->tqp_vector[VAR_6];

  if (!VAR_5->rx_group.ring && !VAR_5->tx_group.ring)
   continue;

  FUNC_3(VAR_5, &VAR_3);

  VAR_4->ae_algo->ops->unmap_ring_from_vector(VAR_4,
   VAR_5->vector_irq, &VAR_3);

  FUNC_2(VAR_5, &VAR_3);

  if (VAR_5->irq_init_flag == VAR_0) {
   FUNC_4(VAR_5->vector_irq, ((void*)0));
   FUNC_0(VAR_5->vector_irq, VAR_5);
   VAR_5->irq_init_flag = VAR_1;
  }

  FUNC_1(&VAR_5->rx_group);
  FUNC_1(&VAR_5->tx_group);
  FUNC_5(&VAR_2->tqp_vector[VAR_6].napi);
 }
}
