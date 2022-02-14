
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dbg_root; } ;
struct mlx5_cmd_debug {int dbg_root; int status; } ;
struct TYPE_4__ {struct mlx5_cmd_debug dbg; } ;
struct mlx5_core_dev {TYPE_1__ priv; TYPE_2__ cmd; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int,int ,struct mlx5_core_dev*,int *) ;
 int FUNC_2 (char*,int,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct mlx5_core_dev*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(struct mlx5_core_dev *VAR_3)
{
 struct mlx5_cmd_debug *VAR_4 = &VAR_3->cmd.dbg;

 VAR_4->dbg_root = FUNC_0("cmd", VAR_3->priv.dbg_root);

 FUNC_1("in", 0400, VAR_4->dbg_root, VAR_3, &VAR_0);
 FUNC_1("out", 0200, VAR_4->dbg_root, VAR_3, &VAR_0);
 FUNC_1("out_len", 0600, VAR_4->dbg_root, VAR_3, &VAR_2);
 FUNC_2("status", 0600, VAR_4->dbg_root, &VAR_4->status);
 FUNC_1("run", 0200, VAR_4->dbg_root, VAR_3, &VAR_1);

 FUNC_3(VAR_3);
}
