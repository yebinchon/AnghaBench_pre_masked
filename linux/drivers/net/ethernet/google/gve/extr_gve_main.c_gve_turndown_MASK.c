
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num_queues; } ;
struct TYPE_3__ {int num_queues; } ;
struct gve_priv {int dev; struct gve_notify_block* ntfy_blocks; TYPE_2__ rx_cfg; TYPE_1__ tx_cfg; } ;
struct gve_notify_block {int napi; } ;


 int FUNC_0 (struct gve_priv*) ;
 int FUNC_1 (struct gve_priv*) ;
 int FUNC_2 (struct gve_priv*,int) ;
 int FUNC_3 (struct gve_priv*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct gve_priv *VAR_0)
{
 int VAR_1;

 if (FUNC_6(VAR_0->dev))
  FUNC_5(VAR_0->dev);

 if (!FUNC_1(VAR_0))
  return;


 for (VAR_1 = 0; VAR_1 < VAR_0->tx_cfg.num_queues; VAR_1++) {
  int VAR_2 = FUNC_3(VAR_0, VAR_1);
  struct gve_notify_block *VAR_3 = &VAR_0->ntfy_blocks[VAR_2];

  FUNC_4(&VAR_3->napi);
 }
 for (VAR_1 = 0; VAR_1 < VAR_0->rx_cfg.num_queues; VAR_1++) {
  int VAR_4 = FUNC_2(VAR_0, VAR_1);
  struct gve_notify_block *VAR_5 = &VAR_0->ntfy_blocks[VAR_4];

  FUNC_4(&VAR_5->napi);
 }


 FUNC_7(VAR_0->dev);

 FUNC_0(VAR_0);
}
