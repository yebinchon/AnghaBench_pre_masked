
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_qp_table {int lock; int tree; } ;
struct mlx5_core_rsc_common {int dummy; } ;
struct TYPE_3__ {int res; int free; } ;
struct mlx5_core_qp {int qpn; TYPE_1__ common; } ;
struct TYPE_4__ {struct mlx5_qp_table qp_table; } ;
struct mlx5_core_dev {TYPE_2__ priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_core_rsc_common*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct mlx5_core_dev *VAR_1,
        struct mlx5_core_qp *VAR_2)
{
 struct mlx5_qp_table *VAR_3 = &VAR_1->priv.qp_table;
 unsigned long VAR_4;

 FUNC_2(&VAR_3->lock, VAR_4);
 FUNC_1(&VAR_3->tree,
     VAR_2->qpn | (VAR_2->common.res << VAR_0));
 FUNC_3(&VAR_3->lock, VAR_4);
 FUNC_0((struct mlx5_core_rsc_common *)VAR_2);
 FUNC_4(&VAR_2->common.free);
}
