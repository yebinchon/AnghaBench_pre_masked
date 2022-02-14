
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pdn; int mkey; } ;
struct mlx5_fw_tracer {TYPE_1__ buff; int dev; scalar_t__ owner; int handle_traces_work; int ownership_change_work; int nb; } ;


 scalar_t__ FUNC_0 (struct mlx5_fw_tracer*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct mlx5_fw_tracer*) ;

void FUNC_7(struct mlx5_fw_tracer *VAR_0)
{
 if (FUNC_0(VAR_0))
  return;

 FUNC_2(VAR_0->dev, "FWTracer: Cleanup, is owner ? (%d)\n",
        VAR_0->owner);
 FUNC_5(VAR_0->dev, &VAR_0->nb);
 FUNC_1(&VAR_0->ownership_change_work);
 FUNC_1(&VAR_0->handle_traces_work);

 if (VAR_0->owner)
  FUNC_6(VAR_0);

 FUNC_4(VAR_0->dev, &VAR_0->buff.mkey);
 FUNC_3(VAR_0->dev, VAR_0->buff.pdn);
}
