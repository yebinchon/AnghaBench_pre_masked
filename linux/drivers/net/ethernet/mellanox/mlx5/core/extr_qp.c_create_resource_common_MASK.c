
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx5_qp_table {int lock; int tree; } ;
struct TYPE_4__ {int res; int free; int refcount; } ;
struct mlx5_core_qp {int qpn; int pid; TYPE_1__ common; } ;
struct TYPE_5__ {struct mlx5_qp_table qp_table; } ;
struct mlx5_core_dev {TYPE_2__ priv; } ;
struct TYPE_6__ {int pid; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,struct mlx5_core_qp*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct mlx5_core_dev *VAR_2,
      struct mlx5_core_qp *VAR_3,
      int VAR_4)
{
 struct mlx5_qp_table *VAR_5 = &VAR_2->priv.qp_table;
 int VAR_6;

 VAR_3->common.res = VAR_4;
 FUNC_3(&VAR_5->lock);
 VAR_6 = FUNC_1(&VAR_5->tree,
    VAR_3->qpn | (VAR_4 << VAR_0),
    VAR_3);
 FUNC_4(&VAR_5->lock);
 if (VAR_6)
  return VAR_6;

 FUNC_2(&VAR_3->common.refcount, 1);
 FUNC_0(&VAR_3->common.free);
 VAR_3->pid = VAR_1->pid;

 return 0;
}
