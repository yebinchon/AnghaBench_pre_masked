
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_queues; } ;
struct gve_priv {int dev; TYPE_1__ rx_cfg; } ;


 int VAR_0 ;
 int FUNC_0 (struct gve_priv*,int) ;
 int FUNC_1 (struct gve_priv*,int) ;
 int FUNC_2 (struct gve_priv*,int ,int ,char*,int,int) ;

int FUNC_3(struct gve_priv *VAR_1)
{
 int VAR_2 = 0;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->rx_cfg.num_queues; VAR_3++) {
  VAR_2 = FUNC_0(VAR_1, VAR_3);
  if (VAR_2) {
   FUNC_2(VAR_1, VAR_0, VAR_1->dev,
      "Failed to alloc rx ring=%d: err=%d\n",
      VAR_3, VAR_2);
   break;
  }
 }

 if (VAR_2) {
  int VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
   FUNC_1(VAR_1, VAR_4);
 }
 return VAR_2;
}
