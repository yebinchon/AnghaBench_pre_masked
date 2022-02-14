
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct mlx4_srq_table {int lock; int tree; } ;
struct mlx4_srq_context {int mtt_base_addr_h; int db_rec_addr; void* pd; void* mtt_base_addr_l; scalar_t__ log_page_size; void* pg_offset_cqn; int xrcd; scalar_t__ logstride; void* state_logsize_srqn; } ;
struct mlx4_srq {int srqn; int free; int refcount; scalar_t__ wqe_shift; int max; } ;
struct mlx4_mtt {scalar_t__ page_shift; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {struct mlx4_srq_context* buf; } ;
struct TYPE_2__ {struct mlx4_srq_table srq_table; } ;


 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct mlx4_cmd_mailbox*) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct mlx4_dev*,struct mlx4_cmd_mailbox*,int) ;
 struct mlx4_cmd_mailbox* FUNC_8 (struct mlx4_dev*) ;
 int FUNC_9 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;
 int FUNC_10 (struct mlx4_dev*,struct mlx4_mtt*) ;
 TYPE_1__* FUNC_11 (struct mlx4_dev*) ;
 int FUNC_12 (struct mlx4_dev*,int*) ;
 int FUNC_13 (struct mlx4_dev*,int) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int *,int,struct mlx4_srq*) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;

int FUNC_19(struct mlx4_dev *VAR_1, u32 VAR_2, u32 VAR_3, u16 VAR_4,
     struct mlx4_mtt *VAR_5, u64 VAR_6, struct mlx4_srq *VAR_7)
{
 struct mlx4_srq_table *VAR_8 = &FUNC_11(VAR_1)->srq_table;
 struct mlx4_cmd_mailbox *VAR_9;
 struct mlx4_srq_context *VAR_10;
 u64 VAR_11;
 int VAR_12;

 VAR_12 = FUNC_12(VAR_1, &VAR_7->srqn);
 if (VAR_12)
  return VAR_12;

 FUNC_17(&VAR_8->lock);
 VAR_12 = FUNC_15(&VAR_8->tree, VAR_7->srqn, VAR_7);
 FUNC_18(&VAR_8->lock);
 if (VAR_12)
  goto err_icm;

 VAR_9 = FUNC_8(VAR_1);
 if (FUNC_0(VAR_9)) {
  VAR_12 = FUNC_1(VAR_9);
  goto err_radix;
 }

 VAR_10 = VAR_9->buf;
 VAR_10->state_logsize_srqn = FUNC_3((FUNC_5(VAR_7->max) << 24) |
            VAR_7->srqn);
 VAR_10->logstride = VAR_7->wqe_shift - 4;
 VAR_10->xrcd = FUNC_2(VAR_4);
 VAR_10->pg_offset_cqn = FUNC_3(VAR_3 & 0xffffff);
 VAR_10->log_page_size = VAR_5->page_shift - VAR_0;

 VAR_11 = FUNC_10(VAR_1, VAR_5);
 VAR_10->mtt_base_addr_h = VAR_11 >> 32;
 VAR_10->mtt_base_addr_l = FUNC_3(VAR_11 & 0xffffffff);
 VAR_10->pd = FUNC_3(VAR_2);
 VAR_10->db_rec_addr = FUNC_4(VAR_6);

 VAR_12 = FUNC_7(VAR_1, VAR_9, VAR_7->srqn);
 FUNC_9(VAR_1, VAR_9);
 if (VAR_12)
  goto err_radix;

 FUNC_16(&VAR_7->refcount, 1);
 FUNC_6(&VAR_7->free);

 return 0;

err_radix:
 FUNC_17(&VAR_8->lock);
 FUNC_14(&VAR_8->tree, VAR_7->srqn);
 FUNC_18(&VAR_8->lock);

err_icm:
 FUNC_13(VAR_1, VAR_7->srqn);
 return VAR_12;
}
