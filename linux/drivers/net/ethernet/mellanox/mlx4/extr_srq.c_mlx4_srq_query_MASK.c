
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_srq_context {int limit_watermark; } ;
struct mlx4_srq {int srqn; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {struct mlx4_srq_context* buf; } ;


 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int FUNC_1 (struct mlx4_cmd_mailbox*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mlx4_dev*,struct mlx4_cmd_mailbox*,int ) ;
 struct mlx4_cmd_mailbox* FUNC_4 (struct mlx4_dev*) ;
 int FUNC_5 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;

int FUNC_6(struct mlx4_dev *VAR_0, struct mlx4_srq *VAR_1, int *VAR_2)
{
 struct mlx4_cmd_mailbox *VAR_3;
 struct mlx4_srq_context *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_4(VAR_0);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_4 = VAR_3->buf;

 VAR_5 = FUNC_3(VAR_0, VAR_3, VAR_1->srqn);
 if (VAR_5)
  goto err_out;
 *VAR_2 = FUNC_2(VAR_4->limit_watermark);

err_out:
 FUNC_5(VAR_0, VAR_3);
 return VAR_5;
}
