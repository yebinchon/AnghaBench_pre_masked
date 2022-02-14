
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hns3_nic_priv {unsigned int vector_num; TYPE_3__* netdev; struct hns3_enet_tqp_vector* tqp_vector; } ;
struct TYPE_5__ {scalar_t__ ring; } ;
struct TYPE_4__ {scalar_t__ ring; } ;
struct hns3_enet_tqp_vector {scalar_t__ irq_init_flag; char* name; int affinity_mask; int vector_irq; TYPE_2__ tx_group; TYPE_1__ rx_group; } ;
struct TYPE_6__ {char* name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hns3_nic_priv*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_3__*,char*,int ) ;
 int FUNC_3 (int ,int ,int ,char*,struct hns3_enet_tqp_vector*) ;
 int FUNC_4 (char*,int,char*,char*,char*,int ) ;

__attribute__((used)) static int FUNC_5(struct hns3_nic_priv *VAR_3)
{
 struct hns3_enet_tqp_vector *VAR_4;
 int VAR_5 = 0;
 int VAR_6 = 0;
 int VAR_7 = 0;
 unsigned int VAR_8;
 int VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_3->vector_num; VAR_8++) {
  VAR_4 = &VAR_3->tqp_vector[VAR_8];

  if (VAR_4->irq_init_flag == VAR_1)
   continue;

  if (VAR_4->tx_group.ring && VAR_4->rx_group.ring) {
   FUNC_4(VAR_4->name, VAR_0 - 1,
     "%s-%s-%d", VAR_3->netdev->name, "TxRx",
     VAR_5++);
   VAR_5++;
  } else if (VAR_4->rx_group.ring) {
   FUNC_4(VAR_4->name, VAR_0 - 1,
     "%s-%s-%d", VAR_3->netdev->name, "Rx",
     VAR_6++);
  } else if (VAR_4->tx_group.ring) {
   FUNC_4(VAR_4->name, VAR_0 - 1,
     "%s-%s-%d", VAR_3->netdev->name, "Tx",
     VAR_7++);
  } else {

   continue;
  }

  VAR_4->name[VAR_0 - 1] = '\0';

  VAR_9 = FUNC_3(VAR_4->vector_irq, VAR_2, 0,
      VAR_4->name, VAR_4);
  if (VAR_9) {
   FUNC_2(VAR_3->netdev, "request irq(%d) fail\n",
       VAR_4->vector_irq);
   FUNC_0(VAR_3);
   return VAR_9;
  }

  FUNC_1(VAR_4->vector_irq,
          &VAR_4->affinity_mask);

  VAR_4->irq_init_flag = VAR_1;
 }

 return 0;
}
