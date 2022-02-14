
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cq_context {void* cq_period; void* cq_max_count; } ;
struct mlx4_cq {int cqn; } ;
struct mlx4_cmd_mailbox {struct mlx4_cq_context* buf; } ;


 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int FUNC_1 (struct mlx4_cmd_mailbox*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct mlx4_dev*,struct mlx4_cmd_mailbox*,int ,int) ;
 struct mlx4_cmd_mailbox* FUNC_4 (struct mlx4_dev*) ;
 int FUNC_5 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;

int FUNC_6(struct mlx4_dev *VAR_0, struct mlx4_cq *VAR_1,
     u16 VAR_2, u16 VAR_3)
{
 struct mlx4_cmd_mailbox *VAR_4;
 struct mlx4_cq_context *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_4(VAR_0);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_5 = VAR_4->buf;
 VAR_5->cq_max_count = FUNC_2(VAR_2);
 VAR_5->cq_period = FUNC_2(VAR_3);

 VAR_6 = FUNC_3(VAR_0, VAR_4, VAR_1->cqn, 1);

 FUNC_5(VAR_0, VAR_4);
 return VAR_6;
}
