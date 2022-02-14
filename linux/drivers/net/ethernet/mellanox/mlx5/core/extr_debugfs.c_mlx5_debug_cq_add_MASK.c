
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cq_debugfs; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;
struct mlx5_core_cq {int * dbg; int cqn; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct mlx5_core_dev*,int ,int ,int **,int ,int ,int ,struct mlx5_core_cq*) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_2(struct mlx5_core_dev *VAR_3, struct mlx5_core_cq *VAR_4)
{
 int VAR_5;

 if (!VAR_2)
  return 0;

 VAR_5 = FUNC_1(VAR_3, VAR_0, VAR_3->priv.cq_debugfs,
      &VAR_4->dbg, VAR_4->cqn, VAR_1,
      FUNC_0(VAR_1), VAR_4);
 if (VAR_5)
  VAR_4->dbg = ((void*)0);

 return VAR_5;
}
