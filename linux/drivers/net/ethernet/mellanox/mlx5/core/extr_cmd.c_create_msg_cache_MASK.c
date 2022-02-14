
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_cmd {struct cmd_msg_cache* cache; } ;
struct mlx5_core_dev {struct mlx5_cmd cmd; } ;
struct mlx5_cmd_msg {int list; struct cmd_msg_cache* parent; } ;
struct cmd_msg_cache {int num_ent; int head; int max_inbox_size; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct mlx5_cmd_msg*) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int* VAR_4 ;
 int FUNC_2 (int *,int *) ;
 struct mlx5_cmd_msg* FUNC_3 (struct mlx5_core_dev*,int,int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct mlx5_core_dev *VAR_5)
{
 struct mlx5_cmd *VAR_6 = &VAR_5->cmd;
 struct cmd_msg_cache *VAR_7;
 struct mlx5_cmd_msg *VAR_8;
 int VAR_9;
 int VAR_10;


 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  VAR_7 = &VAR_6->cache[VAR_10];
  FUNC_4(&VAR_7->lock);
  FUNC_0(&VAR_7->head);
  VAR_7->num_ent = VAR_4[VAR_10];
  VAR_7->max_inbox_size = VAR_3[VAR_10];
  for (VAR_9 = 0; VAR_9 < VAR_7->num_ent; VAR_9++) {
   VAR_8 = FUNC_3(VAR_5, VAR_0 | VAR_2,
       VAR_7->max_inbox_size, 0);
   if (FUNC_1(VAR_8))
    break;
   VAR_8->parent = VAR_7;
   FUNC_2(&VAR_8->list, &VAR_7->head);
  }
 }
}
