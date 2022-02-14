
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int qpl; } ;
struct gve_tx_ring {int q_num; int mask; int * info; int * desc; scalar_t__ bus; TYPE_2__ tx_fifo; int netdev_txq; void* q_resources; scalar_t__ q_resources_bus; } ;
struct gve_priv {int tx_desc_cnt; int dev; TYPE_1__* pdev; struct gve_tx_ring* tx; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct device*,int,scalar_t__*,int ) ;
 int FUNC_1 (struct device*,size_t,int *,scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (struct gve_priv*) ;
 int FUNC_3 (struct gve_priv*,int) ;
 scalar_t__ FUNC_4 (struct gve_priv*,TYPE_2__*) ;
 int FUNC_5 (struct gve_priv*,TYPE_2__*) ;
 int FUNC_6 (struct gve_tx_ring*,int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (struct gve_priv*,int ,int ,char*,int,unsigned long) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct gve_priv *VAR_3, int VAR_4)
{
 struct gve_tx_ring *VAR_5 = &VAR_3->tx[VAR_4];
 struct device *VAR_6 = &VAR_3->pdev->dev;
 u32 VAR_7 = VAR_3->tx_desc_cnt;
 size_t VAR_8;


 FUNC_6(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->q_num = VAR_4;

 VAR_5->mask = VAR_7 - 1;


 VAR_5->info = FUNC_10(sizeof(*VAR_5->info) * VAR_7);
 if (!VAR_5->info)
  return -VAR_0;


 VAR_8 = sizeof(*VAR_5->desc) * VAR_7;
 VAR_5->desc = FUNC_0(VAR_6, VAR_8, &VAR_5->bus, VAR_1);
 if (!VAR_5->desc)
  goto abort_with_info;

 VAR_5->tx_fifo.qpl = FUNC_2(VAR_3);


 if (FUNC_4(VAR_3, &VAR_5->tx_fifo))
  goto abort_with_desc;

 VAR_5->q_resources =
  FUNC_0(VAR_6,
       sizeof(*VAR_5->q_resources),
       &VAR_5->q_resources_bus,
       VAR_1);
 if (!VAR_5->q_resources)
  goto abort_with_fifo;

 FUNC_8(VAR_3, VAR_2, VAR_3->dev, "tx[%d]->bus=%lx\n", VAR_4,
    (unsigned long)VAR_5->bus);
 VAR_5->netdev_txq = FUNC_7(VAR_3->dev, VAR_4);
 FUNC_3(VAR_3, VAR_4);

 return 0;

abort_with_fifo:
 FUNC_5(VAR_3, &VAR_5->tx_fifo);
abort_with_desc:
 FUNC_1(VAR_6, VAR_8, VAR_5->desc, VAR_5->bus);
 VAR_5->desc = ((void*)0);
abort_with_info:
 FUNC_9(VAR_5->info);
 VAR_5->info = ((void*)0);
 return -VAR_0;
}
