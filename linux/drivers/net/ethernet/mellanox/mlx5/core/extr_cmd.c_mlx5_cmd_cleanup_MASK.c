
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_cmd {int pool; int wq; } ;
struct mlx5_core_dev {struct mlx5_cmd cmd; } ;


 int FUNC_0 (struct mlx5_core_dev*) ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mlx5_core_dev*,struct mlx5_cmd*) ;

void FUNC_5(struct mlx5_core_dev *VAR_0)
{
 struct mlx5_cmd *VAR_1 = &VAR_0->cmd;

 FUNC_0(VAR_0);
 FUNC_2(VAR_1->wq);
 FUNC_1(VAR_0);
 FUNC_4(VAR_0, VAR_1);
 FUNC_3(VAR_1->pool);
}
