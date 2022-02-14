
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u16 ;
struct hns3_nic_priv {int vector_num; struct hns3_enet_tqp_vector* tqp_vector; int netdev; TYPE_2__* ring_data; struct hnae3_handle* ae_handle; } ;
struct TYPE_11__ {scalar_t__ total_packets; scalar_t__ total_bytes; } ;
struct hns3_enet_tqp_vector {int napi; int vector_irq; struct hnae3_handle* handle; TYPE_5__ tx_group; TYPE_5__ rx_group; scalar_t__ num_tqps; } ;
struct hnae3_ring_chain_node {int dummy; } ;
struct TYPE_7__ {int num_tqps; } ;
struct hnae3_handle {TYPE_4__* ae_algo; TYPE_1__ kinfo; } ;
struct TYPE_12__ {struct hns3_enet_tqp_vector* tqp_vector; } ;
struct TYPE_10__ {TYPE_3__* ops; } ;
struct TYPE_9__ {int (* map_ring_to_vector ) (struct hnae3_handle*,int ,struct hnae3_ring_chain_node*) ;} ;
struct TYPE_8__ {TYPE_6__* ring; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_1 (struct hns3_enet_tqp_vector*,struct hnae3_ring_chain_node*) ;
 int FUNC_2 (struct hns3_enet_tqp_vector*,struct hnae3_ring_chain_node*) ;
 int VAR_1 ;
 int FUNC_3 (struct hns3_nic_priv*) ;
 int FUNC_4 (struct hns3_enet_tqp_vector*,struct hns3_nic_priv*) ;
 int FUNC_5 (int ,int *,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct hnae3_handle*,int ,struct hnae3_ring_chain_node*) ;

__attribute__((used)) static int FUNC_8(struct hns3_nic_priv *VAR_2)
{
 struct hnae3_ring_chain_node VAR_3;
 struct hnae3_handle *VAR_4 = VAR_2->ae_handle;
 struct hns3_enet_tqp_vector *VAR_5;
 int VAR_6 = 0;
 int VAR_7;

 FUNC_3(VAR_2);

 for (VAR_7 = 0; VAR_7 < VAR_2->vector_num; VAR_7++) {
  VAR_5 = &VAR_2->tqp_vector[VAR_7];
  FUNC_4(VAR_5, VAR_2);
  VAR_5->num_tqps = 0;
 }

 for (VAR_7 = 0; VAR_7 < VAR_4->kinfo.num_tqps; VAR_7++) {
  u16 VAR_8 = VAR_7 % VAR_2->vector_num;
  u16 VAR_9 = VAR_4->kinfo.num_tqps;

  VAR_5 = &VAR_2->tqp_vector[VAR_8];

  FUNC_0(&VAR_5->tx_group,
           VAR_2->ring_data[VAR_7].ring);

  FUNC_0(&VAR_5->rx_group,
           VAR_2->ring_data[VAR_7 + VAR_9].ring);

  VAR_2->ring_data[VAR_7].ring->tqp_vector = VAR_5;
  VAR_2->ring_data[VAR_7 + VAR_9].ring->tqp_vector = VAR_5;
  VAR_5->num_tqps++;
 }

 for (VAR_7 = 0; VAR_7 < VAR_2->vector_num; VAR_7++) {
  VAR_5 = &VAR_2->tqp_vector[VAR_7];

  VAR_5->rx_group.total_bytes = 0;
  VAR_5->rx_group.total_packets = 0;
  VAR_5->tx_group.total_bytes = 0;
  VAR_5->tx_group.total_packets = 0;
  VAR_5->handle = VAR_4;

  VAR_6 = FUNC_2(VAR_5,
       &VAR_3);
  if (VAR_6)
   goto map_ring_fail;

  VAR_6 = VAR_4->ae_algo->ops->map_ring_to_vector(VAR_4,
   VAR_5->vector_irq, &VAR_3);

  FUNC_1(VAR_5, &VAR_3);

  if (VAR_6)
   goto map_ring_fail;

  FUNC_5(VAR_2->netdev, &VAR_5->napi,
          VAR_1, VAR_0);
 }

 return 0;

map_ring_fail:
 while (VAR_7--)
  FUNC_6(&VAR_2->tqp_vector[VAR_7].napi);

 return VAR_6;
}
