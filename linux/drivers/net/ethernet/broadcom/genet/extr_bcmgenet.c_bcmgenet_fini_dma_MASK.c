
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct netdev_queue {int dummy; } ;
struct bcmgenet_priv {int num_tx_bds; scalar_t__ tx_cbs; scalar_t__ rx_cbs; TYPE_3__* tx_rings; int dev; TYPE_2__* hw_params; TYPE_1__* pdev; } ;
struct TYPE_6__ {int queue; } ;
struct TYPE_5__ {int tx_queues; } ;
struct TYPE_4__ {int dev; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct bcmgenet_priv*) ;
 int FUNC_1 (struct bcmgenet_priv*) ;
 int FUNC_2 (struct bcmgenet_priv*) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 struct netdev_queue* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct netdev_queue*) ;

__attribute__((used)) static void FUNC_8(struct bcmgenet_priv *VAR_1)
{
 struct netdev_queue *VAR_2;
 int VAR_3;

 FUNC_0(VAR_1);
 FUNC_1(VAR_1);

 for (VAR_3 = 0; VAR_3 < VAR_1->num_tx_bds; VAR_3++)
  FUNC_4(FUNC_3(&VAR_1->pdev->dev,
        VAR_1->tx_cbs + VAR_3));

 for (VAR_3 = 0; VAR_3 < VAR_1->hw_params->tx_queues; VAR_3++) {
  VAR_2 = FUNC_6(VAR_1->dev, VAR_1->tx_rings[VAR_3].queue);
  FUNC_7(VAR_2);
 }

 VAR_2 = FUNC_6(VAR_1->dev, VAR_1->tx_rings[VAR_0].queue);
 FUNC_7(VAR_2);

 FUNC_2(VAR_1);
 FUNC_5(VAR_1->rx_cbs);
 FUNC_5(VAR_1->tx_cbs);
}
