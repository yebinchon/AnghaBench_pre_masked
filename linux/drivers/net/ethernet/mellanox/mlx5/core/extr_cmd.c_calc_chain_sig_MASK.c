
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_cmd_msg {struct mlx5_cmd_mailbox* next; } ;
struct mlx5_cmd_mailbox {struct mlx5_cmd_mailbox* next; int buf; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlx5_cmd_msg*) ;

__attribute__((used)) static void FUNC_2(struct mlx5_cmd_msg *VAR_0)
{
 struct mlx5_cmd_mailbox *VAR_1 = VAR_0->next;
 int VAR_2 = FUNC_1(VAR_0);
 int VAR_3 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_2 && VAR_1; VAR_3++) {
  FUNC_0(VAR_1->buf);
  VAR_1 = VAR_1->next;
 }
}
