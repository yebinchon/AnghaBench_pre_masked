
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_core_dev {int dummy; } ;
struct mlx5_cmd_msg {struct mlx5_cmd_mailbox* next; } ;
struct mlx5_cmd_mailbox {struct mlx5_cmd_mailbox* next; } ;


 int FUNC_0 (struct mlx5_core_dev*,struct mlx5_cmd_mailbox*) ;
 int FUNC_1 (struct mlx5_cmd_msg*) ;

__attribute__((used)) static void FUNC_2(struct mlx5_core_dev *VAR_0,
         struct mlx5_cmd_msg *VAR_1)
{
 struct mlx5_cmd_mailbox *VAR_2 = VAR_1->next;
 struct mlx5_cmd_mailbox *VAR_3;

 while (VAR_2) {
  VAR_3 = VAR_2->next;
  FUNC_0(VAR_0, VAR_2);
  VAR_2 = VAR_3;
 }
 FUNC_1(VAR_1);
}
