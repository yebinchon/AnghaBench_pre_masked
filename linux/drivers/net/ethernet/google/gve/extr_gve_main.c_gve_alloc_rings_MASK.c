
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int num_queues; } ;
struct TYPE_4__ {int num_queues; } ;
struct gve_priv {TYPE_3__* tx; TYPE_3__* rx; TYPE_2__ rx_cfg; TYPE_1__ tx_cfg; } ;
struct TYPE_6__ {int statss; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gve_priv*,int) ;
 int FUNC_1 (struct gve_priv*) ;
 int FUNC_2 (struct gve_priv*,int) ;
 int FUNC_3 (struct gve_priv*) ;
 int FUNC_4 (struct gve_priv*) ;
 int FUNC_5 (struct gve_priv*,int) ;
 int FUNC_6 (TYPE_3__*) ;
 void* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct gve_priv *VAR_2)
{
 int VAR_3;
 int VAR_4;
 int VAR_5;


 VAR_2->tx = FUNC_7(VAR_2->tx_cfg.num_queues * sizeof(*VAR_2->tx),
       VAR_1);
 if (!VAR_2->tx)
  return -VAR_0;
 VAR_4 = FUNC_3(VAR_2);
 if (VAR_4)
  goto free_tx;

 VAR_2->rx = FUNC_7(VAR_2->rx_cfg.num_queues * sizeof(*VAR_2->rx),
       VAR_1);
 if (!VAR_2->rx) {
  VAR_4 = -VAR_0;
  goto free_tx_queue;
 }
 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4)
  goto free_rx;

 for (VAR_5 = 0; VAR_5 < VAR_2->tx_cfg.num_queues; VAR_5++) {
  FUNC_8(&VAR_2->tx[VAR_5].statss);
  VAR_3 = FUNC_5(VAR_2, VAR_5);
  FUNC_0(VAR_2, VAR_3);
 }

 for (VAR_5 = 0; VAR_5 < VAR_2->rx_cfg.num_queues; VAR_5++) {
  FUNC_8(&VAR_2->rx[VAR_5].statss);
  VAR_3 = FUNC_2(VAR_2, VAR_5);
  FUNC_0(VAR_2, VAR_3);
 }

 return 0;

free_rx:
 FUNC_6(VAR_2->rx);
 VAR_2->rx = ((void*)0);
free_tx_queue:
 FUNC_4(VAR_2);
free_tx:
 FUNC_6(VAR_2->tx);
 VAR_2->tx = ((void*)0);
 return VAR_4;
}
