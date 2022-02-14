
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_cmd {int max_reg_cmds; int sem; int pages_sem; } ;
struct mlx5_core_dev {struct mlx5_cmd cmd; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct mlx5_core_dev *VAR_0)
{
 struct mlx5_cmd *VAR_1 = &VAR_0->cmd;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->max_reg_cmds; VAR_2++)
  while (FUNC_0(&VAR_1->sem))
   FUNC_1(VAR_0);

 while (FUNC_0(&VAR_1->pages_sem))
  FUNC_1(VAR_0);


 FUNC_2(&VAR_1->pages_sem);
 for (VAR_2 = 0; VAR_2 < VAR_1->max_reg_cmds; VAR_2++)
  FUNC_2(&VAR_1->sem);
}
