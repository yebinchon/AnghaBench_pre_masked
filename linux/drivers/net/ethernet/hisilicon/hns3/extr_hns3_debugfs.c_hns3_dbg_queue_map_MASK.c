
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


typedef int u16 ;
struct hns3_nic_ring_data {TYPE_6__* ring; } ;
struct hns3_nic_priv {struct hns3_nic_ring_data* ring_data; } ;
struct TYPE_7__ {int num_tqps; } ;
struct hnae3_handle {TYPE_4__* pdev; TYPE_3__* ae_algo; TYPE_1__ kinfo; struct hns3_nic_priv* priv; } ;
struct TYPE_12__ {TYPE_5__* tqp_vector; } ;
struct TYPE_11__ {int vector_irq; } ;
struct TYPE_10__ {int dev; } ;
struct TYPE_9__ {TYPE_2__* ops; } ;
struct TYPE_8__ {int (* get_global_queue_id ) (struct hnae3_handle*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct hnae3_handle*,int) ;

__attribute__((used)) static int FUNC_2(struct hnae3_handle *VAR_1)
{
 struct hns3_nic_priv *VAR_2 = VAR_1->priv;
 struct hns3_nic_ring_data *VAR_3;
 int VAR_4;

 if (!VAR_1->ae_algo->ops->get_global_queue_id)
  return -VAR_0;

 FUNC_0(&VAR_1->pdev->dev, "map info for queue id and vector id\n");
 FUNC_0(&VAR_1->pdev->dev,
   "local queue id | global queue id | vector id\n");
 for (VAR_4 = 0; VAR_4 < VAR_1->kinfo.num_tqps; VAR_4++) {
  u16 VAR_5;

  VAR_5 = VAR_1->ae_algo->ops->get_global_queue_id(VAR_1, VAR_4);
  VAR_3 = &VAR_2->ring_data[VAR_4];
  if (!VAR_3 || !VAR_3->ring ||
      !VAR_3->ring->tqp_vector)
   continue;

  FUNC_0(&VAR_1->pdev->dev,
    "      %4d            %4d            %4d\n",
    VAR_4, VAR_5,
    VAR_3->ring->tqp_vector->vector_irq);
 }

 return 0;
}
