
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlx4_qp_table {int lock; } ;
struct mlx4_qp {int dummy; } ;
struct mlx4_dev {int dummy; } ;
struct TYPE_2__ {struct mlx4_qp_table qp_table; } ;


 struct mlx4_qp* FUNC_0 (struct mlx4_dev*,int ) ;
 TYPE_1__* FUNC_1 (struct mlx4_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct mlx4_qp *FUNC_4(struct mlx4_dev *VAR_0, u32 VAR_1)
{
 struct mlx4_qp_table *VAR_2 = &FUNC_1(VAR_0)->qp_table;
 struct mlx4_qp *VAR_3;

 FUNC_2(&VAR_2->lock);

 VAR_3 = FUNC_0(VAR_0, VAR_1);

 FUNC_3(&VAR_2->lock);
 return VAR_3;
}
