
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct mlx5_eq_comp {int core; int tasklet_ctx; } ;
struct TYPE_5__ {int uar; } ;
struct mlx5_core_dev {TYPE_2__ priv; } ;
struct TYPE_4__ {int list; int * priv; } ;
struct mlx5_core_cq {void* uid; void* cqn; int uar; int pid; TYPE_1__ tasklet_ctx; scalar_t__ comp; int free; int refcount; struct mlx5_eq_comp* eq; scalar_t__ arm_sn; scalar_t__ cons_index; } ;
typedef int dout ;
typedef int din ;
struct TYPE_6__ {int pid; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct mlx5_eq_comp*) ;
 int * FUNC_2 (int ,int *,int ) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int ,int *,int ,void*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct mlx5_eq_comp*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int) ;
 scalar_t__ VAR_11 ;
 int FUNC_9 (struct mlx5_core_dev*,int *,int,int *,int) ;
 int FUNC_10 (struct mlx5_core_dev*,char*,void*) ;
 int FUNC_11 (struct mlx5_core_dev*,struct mlx5_core_cq*) ;
 int FUNC_12 (int *,struct mlx5_core_cq*) ;
 int FUNC_13 (int *,struct mlx5_core_cq*) ;
 struct mlx5_eq_comp* FUNC_14 (struct mlx5_core_dev*,int) ;
 int * FUNC_15 (struct mlx5_core_dev*) ;
 int VAR_12 ;
 int FUNC_16 (int *,int) ;
 int VAR_13 ;

int FUNC_17(struct mlx5_core_dev *VAR_14, struct mlx5_core_cq *VAR_15,
   u32 *VAR_16, int VAR_17, u32 *VAR_18, int VAR_19)
{
 int VAR_20 = FUNC_3(VAR_4, FUNC_2(VAR_6, VAR_16, VAR_3), VAR_2);
 u32 VAR_21[FUNC_5(VAR_10)];
 u32 VAR_22[FUNC_5(VAR_9)];
 struct mlx5_eq_comp *VAR_23;
 int VAR_24;

 VAR_23 = FUNC_14(VAR_14, VAR_20);
 if (FUNC_1(VAR_23))
  return FUNC_6(VAR_23);

 FUNC_8(VAR_18, 0, VAR_19);
 FUNC_4(VAR_6, VAR_16, VAR_12, VAR_0);
 VAR_24 = FUNC_9(VAR_14, VAR_16, VAR_17, VAR_18, VAR_19);
 if (VAR_24)
  return VAR_24;

 VAR_15->cqn = FUNC_3(VAR_7, VAR_18, VAR_5);
 VAR_15->cons_index = 0;
 VAR_15->arm_sn = 0;
 VAR_15->eq = VAR_23;
 VAR_15->uid = FUNC_3(VAR_6, VAR_16, VAR_13);
 FUNC_16(&VAR_15->refcount, 1);
 FUNC_7(&VAR_15->free);
 if (!VAR_15->comp)
  VAR_15->comp = VAR_11;

 VAR_15->tasklet_ctx.priv = &VAR_23->tasklet_ctx;
 FUNC_0(&VAR_15->tasklet_ctx.list);


 VAR_24 = FUNC_12(&VAR_23->core, VAR_15);
 if (VAR_24)
  goto err_cmd;


 VAR_24 = FUNC_12(FUNC_15(VAR_14), VAR_15);
 if (VAR_24)
  goto err_cq_add;

 VAR_15->pid = VAR_8->pid;
 VAR_24 = FUNC_11(VAR_14, VAR_15);
 if (VAR_24)
  FUNC_10(VAR_14, "failed adding CP 0x%x to debug file system\n",
         VAR_15->cqn);

 VAR_15->uar = VAR_14->priv.uar;

 return 0;

err_cq_add:
 FUNC_13(&VAR_23->core, VAR_15);
err_cmd:
 FUNC_8(VAR_22, 0, sizeof(VAR_22));
 FUNC_8(VAR_21, 0, sizeof(VAR_21));
 FUNC_4(VAR_9, VAR_22, VAR_12, VAR_1);
 FUNC_4(VAR_9, VAR_22, VAR_5, VAR_15->cqn);
 FUNC_4(VAR_9, VAR_22, VAR_13, VAR_15->uid);
 FUNC_9(VAR_14, VAR_22, sizeof(VAR_22), VAR_21, sizeof(VAR_21));
 return VAR_24;
}
