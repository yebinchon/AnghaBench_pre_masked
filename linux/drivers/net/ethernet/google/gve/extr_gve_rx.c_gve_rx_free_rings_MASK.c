
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_queues; } ;
struct gve_priv {TYPE_1__ rx_cfg; } ;


 int FUNC_0 (struct gve_priv*,int) ;

void FUNC_1(struct gve_priv *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->rx_cfg.num_queues; VAR_1++)
  FUNC_0(VAR_0, VAR_1);
}
