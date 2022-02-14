
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mlx4_mtt {scalar_t__ page_shift; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cq_context {int mtt_base_addr_h; void* mtt_base_addr_l; scalar_t__ log_page_size; void* logsize_usrpage; } ;
struct mlx4_cq {int cqn; } ;
struct mlx4_cmd_mailbox {struct mlx4_cq_context* buf; } ;


 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int FUNC_1 (struct mlx4_cmd_mailbox*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct mlx4_dev*,struct mlx4_cmd_mailbox*,int ,int ) ;
 struct mlx4_cmd_mailbox* FUNC_5 (struct mlx4_dev*) ;
 int FUNC_6 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;
 int FUNC_7 (struct mlx4_dev*,struct mlx4_mtt*) ;

int FUNC_8(struct mlx4_dev *VAR_0, struct mlx4_cq *VAR_1,
     int VAR_2, struct mlx4_mtt *VAR_3)
{
 struct mlx4_cmd_mailbox *VAR_4;
 struct mlx4_cq_context *VAR_5;
 u64 VAR_6;
 int VAR_7;

 VAR_4 = FUNC_5(VAR_0);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_5 = VAR_4->buf;
 VAR_5->logsize_usrpage = FUNC_2(FUNC_3(VAR_2) << 24);
 VAR_5->log_page_size = VAR_3->page_shift - 12;
 VAR_6 = FUNC_7(VAR_0, VAR_3);
 VAR_5->mtt_base_addr_h = VAR_6 >> 32;
 VAR_5->mtt_base_addr_l = FUNC_2(VAR_6 & 0xffffffff);

 VAR_7 = FUNC_4(VAR_0, VAR_4, VAR_1->cqn, 0);

 FUNC_6(VAR_0, VAR_4);
 return VAR_7;
}
