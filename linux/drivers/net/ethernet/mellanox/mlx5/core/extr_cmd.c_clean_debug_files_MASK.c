
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_cmd_debug {int dbg_root; } ;
struct TYPE_2__ {struct mlx5_cmd_debug dbg; } ;
struct mlx5_core_dev {TYPE_1__ cmd; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct mlx5_core_dev *VAR_1)
{
 struct mlx5_cmd_debug *VAR_2 = &VAR_1->cmd.dbg;

 if (!VAR_0)
  return;

 FUNC_1(VAR_1);
 FUNC_0(VAR_2->dbg_root);
}
