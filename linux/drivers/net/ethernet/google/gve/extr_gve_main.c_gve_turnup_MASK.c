
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num_queues; } ;
struct TYPE_3__ {int num_queues; } ;
struct gve_priv {struct gve_notify_block* ntfy_blocks; TYPE_2__ rx_cfg; TYPE_1__ tx_cfg; int dev; } ;
struct gve_notify_block {int napi; } ;


 int FUNC_0 (struct gve_priv*,struct gve_notify_block*) ;
 int FUNC_1 (struct gve_priv*,int) ;
 int FUNC_2 (struct gve_priv*) ;
 int FUNC_3 (struct gve_priv*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct gve_priv *VAR_0)
{
 int VAR_1;


 FUNC_6(VAR_0->dev);


 for (VAR_1 = 0; VAR_1 < VAR_0->tx_cfg.num_queues; VAR_1++) {
  int VAR_2 = FUNC_3(VAR_0, VAR_1);
  struct gve_notify_block *VAR_3 = &VAR_0->ntfy_blocks[VAR_2];

  FUNC_5(&VAR_3->napi);
  FUNC_4(0, FUNC_0(VAR_0, VAR_3));
 }
 for (VAR_1 = 0; VAR_1 < VAR_0->rx_cfg.num_queues; VAR_1++) {
  int VAR_4 = FUNC_1(VAR_0, VAR_1);
  struct gve_notify_block *VAR_5 = &VAR_0->ntfy_blocks[VAR_4];

  FUNC_5(&VAR_5->napi);
  FUNC_4(0, FUNC_0(VAR_0, VAR_5));
 }

 FUNC_2(VAR_0);
}
