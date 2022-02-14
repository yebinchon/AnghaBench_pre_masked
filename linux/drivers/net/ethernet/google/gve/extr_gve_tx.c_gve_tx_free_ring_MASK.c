
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {TYPE_2__* qpl; } ;
struct gve_tx_ring {int mask; int * info; int * desc; int bus; TYPE_3__ tx_fifo; int * q_resources; int q_resources_bus; int netdev_txq; int req; } ;
struct gve_priv {int dev; TYPE_1__* pdev; struct gve_tx_ring* tx; } ;
struct device {int dummy; } ;
struct TYPE_5__ {int id; } ;
struct TYPE_4__ {struct device dev; } ;


 int FUNC_0 (struct device*,size_t,int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct gve_priv*,struct gve_tx_ring*,int ,int) ;
 int FUNC_2 (struct gve_priv*,TYPE_3__*) ;
 int FUNC_3 (struct gve_priv*,int) ;
 int FUNC_4 (struct gve_priv*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct gve_priv*,int ,int ,char*,int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct gve_priv *VAR_1, int VAR_2)
{
 struct gve_tx_ring *VAR_3 = &VAR_1->tx[VAR_2];
 struct device *VAR_4 = &VAR_1->pdev->dev;
 size_t VAR_5;
 u32 VAR_6;

 FUNC_3(VAR_1, VAR_2);
 VAR_6 = VAR_3->mask + 1;
 FUNC_1(VAR_1, VAR_3, VAR_3->req, 0);
 FUNC_5(VAR_3->netdev_txq);

 FUNC_0(VAR_4, sizeof(*VAR_3->q_resources),
     VAR_3->q_resources, VAR_3->q_resources_bus);
 VAR_3->q_resources = ((void*)0);

 FUNC_2(VAR_1, &VAR_3->tx_fifo);
 FUNC_4(VAR_1, VAR_3->tx_fifo.qpl->id);
 VAR_3->tx_fifo.qpl = ((void*)0);

 VAR_5 = sizeof(*VAR_3->desc) * VAR_6;
 FUNC_0(VAR_4, VAR_5, VAR_3->desc, VAR_3->bus);
 VAR_3->desc = ((void*)0);

 FUNC_7(VAR_3->info);
 VAR_3->info = ((void*)0);

 FUNC_6(VAR_1, VAR_0, VAR_1->dev, "freed tx queue %d\n", VAR_2);
}
