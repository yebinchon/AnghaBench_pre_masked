
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct mlx5_cmd_stats* stats; } ;
struct TYPE_3__ {struct dentry* dbg_root; struct dentry* cmdif_debugfs; } ;
struct mlx5_core_dev {TYPE_2__ cmd; TYPE_1__ priv; } ;
struct mlx5_cmd_stats {int n; void* root; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (struct mlx5_cmd_stats*) ;
 void* FUNC_1 (char const*,struct dentry*) ;
 int FUNC_2 (char*,int,void*,struct mlx5_cmd_stats*,int *) ;
 int FUNC_3 (char*,int,void*,int *) ;
 char* FUNC_4 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (char const*,char*) ;

void FUNC_6(struct mlx5_core_dev *VAR_1)
{
 struct mlx5_cmd_stats *VAR_2;
 struct dentry **VAR_3;
 const char *VAR_4;
 int VAR_5;

 VAR_3 = &VAR_1->priv.cmdif_debugfs;
 *VAR_3 = FUNC_1("commands", VAR_1->priv.dbg_root);

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1->cmd.stats); VAR_5++) {
  VAR_2 = &VAR_1->cmd.stats[VAR_5];
  VAR_4 = FUNC_4(VAR_5);
  if (FUNC_5(VAR_4, "unknown command opcode")) {
   VAR_2->root = FUNC_1(VAR_4, *VAR_3);

   FUNC_2("average", 0400, VAR_2->root, VAR_2,
         &VAR_0);
   FUNC_3("n", 0400, VAR_2->root, &VAR_2->n);
  }
 }
}
