
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_queues; } ;
struct TYPE_4__ {int num_queues; } ;
struct gve_priv {int * rx; TYPE_1__ rx_cfg; int * tx; TYPE_2__ tx_cfg; } ;


 int FUNC_0 (struct gve_priv*,int) ;
 int FUNC_1 (struct gve_priv*) ;
 int FUNC_2 (struct gve_priv*,int) ;
 int FUNC_3 (struct gve_priv*) ;
 int FUNC_4 (struct gve_priv*,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct gve_priv *VAR_0)
{
 int VAR_1;
 int VAR_2;

 if (VAR_0->tx) {
  for (VAR_2 = 0; VAR_2 < VAR_0->tx_cfg.num_queues; VAR_2++) {
   VAR_1 = FUNC_4(VAR_0, VAR_2);
   FUNC_0(VAR_0, VAR_1);
  }
  FUNC_3(VAR_0);
  FUNC_5(VAR_0->tx);
  VAR_0->tx = ((void*)0);
 }
 if (VAR_0->rx) {
  for (VAR_2 = 0; VAR_2 < VAR_0->rx_cfg.num_queues; VAR_2++) {
   VAR_1 = FUNC_2(VAR_0, VAR_2);
   FUNC_0(VAR_0, VAR_1);
  }
  FUNC_1(VAR_0);
  FUNC_5(VAR_0->rx);
  VAR_0->rx = ((void*)0);
 }
}
