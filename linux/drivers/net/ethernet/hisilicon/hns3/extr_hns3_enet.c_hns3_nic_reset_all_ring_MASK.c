
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct hns3_nic_priv {TYPE_3__* ring_data; } ;
struct hns3_enet_ring {int desc_num; scalar_t__ next_to_use; scalar_t__ next_to_clean; } ;
struct TYPE_8__ {int num_tqps; struct net_device* netdev; } ;
struct hnae3_handle {TYPE_4__ kinfo; TYPE_2__* ae_algo; } ;
struct TYPE_7__ {struct hns3_enet_ring* ring; } ;
struct TYPE_6__ {TYPE_1__* ops; } ;
struct TYPE_5__ {int (* reset_queue ) (struct hnae3_handle*,int) ;} ;


 int FUNC_0 (struct hns3_enet_ring*) ;
 int FUNC_1 (struct hns3_enet_ring*) ;
 int FUNC_2 (struct hns3_enet_ring*) ;
 int FUNC_3 (struct hns3_nic_priv*) ;
 int FUNC_4 (struct hns3_enet_ring*,int) ;
 struct hns3_nic_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct hnae3_handle*,int) ;

int FUNC_7(struct hnae3_handle *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->kinfo.netdev;
 struct hns3_nic_priv *VAR_2 = FUNC_5(VAR_1);
 struct hns3_enet_ring *VAR_3;
 int VAR_4, VAR_5;
 int VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_0->kinfo.num_tqps; VAR_4++) {
  VAR_6 = VAR_0->ae_algo->ops->reset_queue(VAR_0, VAR_4);
  if (VAR_6)
   return VAR_6;

  FUNC_2(VAR_2->ring_data[VAR_4].ring);




  FUNC_1(VAR_2->ring_data[VAR_4].ring);
  VAR_2->ring_data[VAR_4].ring->next_to_clean = 0;
  VAR_2->ring_data[VAR_4].ring->next_to_use = 0;

  VAR_3 = VAR_2->ring_data[VAR_4 + VAR_0->kinfo.num_tqps].ring;
  FUNC_2(VAR_3);
  VAR_6 = FUNC_0(VAR_3);
  if (VAR_6)
   return VAR_6;




  for (VAR_5 = 0; VAR_5 < VAR_3->desc_num; VAR_5++)
   FUNC_4(VAR_3, VAR_5);

  VAR_3->next_to_clean = 0;
  VAR_3->next_to_use = 0;
 }

 FUNC_3(VAR_2);

 return 0;
}
