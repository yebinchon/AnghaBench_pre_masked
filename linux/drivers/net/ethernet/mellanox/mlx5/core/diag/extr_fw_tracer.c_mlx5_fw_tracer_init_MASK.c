
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pdn; } ;
struct TYPE_4__ {int loaded; } ;
struct mlx5_fw_tracer {TYPE_1__ buff; int nb; int read_fw_strings_work; int work_queue; TYPE_2__ str_db; struct mlx5_core_dev* dev; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mlx5_fw_tracer*) ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct mlx5_core_dev*,int *) ;
 int FUNC_3 (struct mlx5_core_dev*,int ) ;
 int FUNC_4 (struct mlx5_core_dev*,char*,int) ;
 int FUNC_5 (struct mlx5_core_dev*,int *) ;
 int FUNC_6 (struct mlx5_fw_tracer*) ;
 int FUNC_7 (struct mlx5_fw_tracer*) ;
 int FUNC_8 (int ,int *) ;

int FUNC_9(struct mlx5_fw_tracer *VAR_2)
{
 struct mlx5_core_dev *VAR_3;
 int VAR_4;

 if (FUNC_0(VAR_2))
  return 0;

 VAR_3 = VAR_2->dev;

 if (!VAR_2->str_db.loaded)
  FUNC_8(VAR_2->work_queue, &VAR_2->read_fw_strings_work);

 VAR_4 = FUNC_2(VAR_3, &VAR_2->buff.pdn);
 if (VAR_4) {
  FUNC_4(VAR_3, "FWTracer: Failed to allocate PD %d\n", VAR_4);
  return VAR_4;
 }

 VAR_4 = FUNC_6(VAR_2);
 if (VAR_4) {
  FUNC_4(VAR_3, "FWTracer: Failed to create mkey %d\n", VAR_4);
  goto err_dealloc_pd;
 }

 FUNC_1(&VAR_2->nb, VAR_1, VAR_0);
 FUNC_5(VAR_3, &VAR_2->nb);

 FUNC_7(VAR_2);

 return 0;

err_dealloc_pd:
 FUNC_3(VAR_3, VAR_2->buff.pdn);
 return VAR_4;
}
