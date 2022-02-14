
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_srq {int srqn; } ;
struct mlx4_dev {int dummy; } ;


 int FUNC_0 (struct mlx4_dev*,int ,int) ;

int FUNC_1(struct mlx4_dev *VAR_0, struct mlx4_srq *VAR_1, int VAR_2)
{
 return FUNC_0(VAR_0, VAR_1->srqn, VAR_2);
}
