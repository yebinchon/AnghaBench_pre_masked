
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int order; } ;
struct mlx4_mr {TYPE_1__ mtt; } ;
struct mlx4_dev {int dummy; } ;


 int FUNC_0 (struct mlx4_dev*,TYPE_1__*) ;

void FUNC_1(struct mlx4_dev *VAR_0, struct mlx4_mr *VAR_1)
{
 FUNC_0(VAR_0, &VAR_1->mtt);
 VAR_1->mtt.order = -1;
}
