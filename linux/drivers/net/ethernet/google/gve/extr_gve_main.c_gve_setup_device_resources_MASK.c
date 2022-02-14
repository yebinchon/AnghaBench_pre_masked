
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gve_priv {TYPE_1__* pdev; int num_ntfy_blks; int ntfy_block_bus; int num_event_counters; int counter_array_bus; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct gve_priv*,int ,int ,int ,int ) ;
 int FUNC_2 (struct gve_priv*) ;
 int FUNC_3 (struct gve_priv*) ;
 int FUNC_4 (struct gve_priv*) ;
 int FUNC_5 (struct gve_priv*) ;
 int FUNC_6 (struct gve_priv*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct gve_priv *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2)
  return VAR_2;
 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2)
  goto abort_with_counter;
 VAR_2 = FUNC_1(VAR_1,
          VAR_1->counter_array_bus,
          VAR_1->num_event_counters,
          VAR_1->ntfy_block_bus,
          VAR_1->num_ntfy_blks);
 if (FUNC_7(VAR_2)) {
  FUNC_0(&VAR_1->pdev->dev,
   "could not setup device_resources: err=%d\n", VAR_2);
  VAR_2 = -VAR_0;
  goto abort_with_ntfy_blocks;
 }
 FUNC_6(VAR_1);
 return 0;
abort_with_ntfy_blocks:
 FUNC_5(VAR_1);
abort_with_counter:
 FUNC_4(VAR_1);
 return VAR_2;
}
