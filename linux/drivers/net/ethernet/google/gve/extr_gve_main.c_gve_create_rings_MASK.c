
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num_queues; } ;
struct TYPE_3__ {int num_queues; } ;
struct gve_priv {int dev; int * rx; TYPE_2__ rx_cfg; TYPE_1__ tx_cfg; } ;


 int VAR_0 ;
 int FUNC_0 (struct gve_priv*,int) ;
 int FUNC_1 (struct gve_priv*,int) ;
 int FUNC_2 (struct gve_priv*,int *) ;
 int FUNC_3 (struct gve_priv*,int ,int ,char*,int) ;
 int FUNC_4 (struct gve_priv*,int ,int ,char*,int) ;

__attribute__((used)) static int FUNC_5(struct gve_priv *VAR_1)
{
 int VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->tx_cfg.num_queues; VAR_3++) {
  VAR_2 = FUNC_1(VAR_1, VAR_3);
  if (VAR_2) {
   FUNC_4(VAR_1, VAR_0, VAR_1->dev, "failed to create tx queue %d\n",
      VAR_3);



   return VAR_2;
  }
  FUNC_3(VAR_1, VAR_0, VAR_1->dev, "created tx queue %d\n", VAR_3);
 }
 for (VAR_3 = 0; VAR_3 < VAR_1->rx_cfg.num_queues; VAR_3++) {
  VAR_2 = FUNC_0(VAR_1, VAR_3);
  if (VAR_2) {
   FUNC_4(VAR_1, VAR_0, VAR_1->dev, "failed to create rx queue %d\n",
      VAR_3);



   return VAR_2;
  }





  FUNC_2(VAR_1, &VAR_1->rx[VAR_3]);
  FUNC_3(VAR_1, VAR_0, VAR_1->dev, "created rx queue %d\n", VAR_3);
 }

 return 0;
}
