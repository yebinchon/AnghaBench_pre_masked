
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct res_qp {TYPE_4__* srq; TYPE_3__* scq; TYPE_2__* rcq; TYPE_1__* mtt; } ;
struct mlx4_vhcr {int in_modifier; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int dummy; } ;
struct mlx4_cmd_info {int dummy; } ;
struct TYPE_8__ {int ref_count; } ;
struct TYPE_7__ {int ref_count; } ;
struct TYPE_6__ {int ref_count; } ;
struct TYPE_5__ {int ref_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlx4_dev*,int,struct mlx4_vhcr*,struct mlx4_cmd_mailbox*,struct mlx4_cmd_mailbox*,struct mlx4_cmd_info*) ;
 int FUNC_2 (struct mlx4_dev*,int,int,int ,struct res_qp**,int ) ;
 int FUNC_3 (struct mlx4_dev*,int,int ,int) ;
 int FUNC_4 (struct mlx4_dev*,int,int ,int) ;

int FUNC_5(struct mlx4_dev *VAR_2, int VAR_3,
    struct mlx4_vhcr *VAR_4,
    struct mlx4_cmd_mailbox *VAR_5,
    struct mlx4_cmd_mailbox *VAR_6,
    struct mlx4_cmd_info *VAR_7)
{
 int VAR_8;
 int VAR_9 = VAR_4->in_modifier & 0x7fffff;
 struct res_qp *VAR_10;

 VAR_8 = FUNC_2(VAR_2, VAR_3, VAR_9, VAR_1, &VAR_10, 0);
 if (VAR_8)
  return VAR_8;
 VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_8)
  goto ex_abort;

 FUNC_0(&VAR_10->mtt->ref_count);
 FUNC_0(&VAR_10->rcq->ref_count);
 FUNC_0(&VAR_10->scq->ref_count);
 if (VAR_10->srq)
  FUNC_0(&VAR_10->srq->ref_count);
 FUNC_4(VAR_2, VAR_3, VAR_0, VAR_9);
 return 0;

ex_abort:
 FUNC_3(VAR_2, VAR_3, VAR_0, VAR_9);

 return VAR_8;
}
