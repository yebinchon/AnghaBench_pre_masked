
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_qp_context {int dummy; } ;
struct mlx4_qp {int qpn; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {scalar_t__ buf; int dma; } ;


 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mlx4_cmd_mailbox*) ;
 int FUNC_2 (struct mlx4_qp_context*,scalar_t__,int) ;
 struct mlx4_cmd_mailbox* FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (struct mlx4_dev*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;

int FUNC_6(struct mlx4_dev *VAR_3, struct mlx4_qp *VAR_4,
    struct mlx4_qp_context *VAR_5)
{
 struct mlx4_cmd_mailbox *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(VAR_3);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_7 = FUNC_4(VAR_3, 0, VAR_6->dma, VAR_4->qpn, 0,
      VAR_0, VAR_1,
      VAR_2);
 if (!VAR_7)
  FUNC_2(VAR_5, VAR_6->buf + 8, sizeof(*VAR_5));

 FUNC_5(VAR_3, VAR_6);
 return VAR_7;
}
