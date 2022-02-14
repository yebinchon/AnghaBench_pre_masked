
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int notifier_call; } ;
struct mlx5_qp_table {TYPE_2__ nb; int tree; int lock; } ;
struct TYPE_3__ {struct mlx5_qp_table qp_table; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct mlx5_qp_table*,int ,int) ;
 int FUNC_2 (struct mlx5_core_dev*,TYPE_2__*) ;
 int FUNC_3 (struct mlx5_core_dev*) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;

void FUNC_5(struct mlx5_core_dev *VAR_2)
{
 struct mlx5_qp_table *VAR_3 = &VAR_2->priv.qp_table;

 FUNC_1(VAR_3, 0, sizeof(*VAR_3));
 FUNC_4(&VAR_3->lock);
 FUNC_0(&VAR_3->tree, VAR_0);
 FUNC_3(VAR_2);

 VAR_3->nb.notifier_call = VAR_1;
 FUNC_2(VAR_2, &VAR_3->nb);
}
