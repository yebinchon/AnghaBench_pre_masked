
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5_core_dev {int dummy; } ;
struct mlx5_cmd_prot_block {int token; int block_num; int next; } ;
struct mlx5_cmd_msg {int len; struct mlx5_cmd_mailbox* next; } ;
struct mlx5_cmd_mailbox {struct mlx5_cmd_mailbox* next; int dma; struct mlx5_cmd_prot_block* buf; } ;
typedef int gfp_t ;


 int VAR_0 ;
 struct mlx5_cmd_msg* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct mlx5_cmd_mailbox*) ;
 int FUNC_2 (struct mlx5_cmd_mailbox*) ;
 struct mlx5_cmd_mailbox* FUNC_3 (struct mlx5_core_dev*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct mlx5_core_dev*,struct mlx5_cmd_mailbox*) ;
 int FUNC_7 (struct mlx5_cmd_msg*) ;
 struct mlx5_cmd_msg* FUNC_8 (int,int ) ;
 int FUNC_9 (struct mlx5_cmd_msg*) ;
 int FUNC_10 (struct mlx5_core_dev*,char*) ;

__attribute__((used)) static struct mlx5_cmd_msg *FUNC_11(struct mlx5_core_dev *VAR_1,
            gfp_t VAR_2, int VAR_3,
            u8 VAR_4)
{
 struct mlx5_cmd_mailbox *VAR_5, *VAR_6 = ((void*)0);
 struct mlx5_cmd_prot_block *VAR_7;
 struct mlx5_cmd_msg *VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_8 = FUNC_8(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return FUNC_0(-VAR_0);

 VAR_8->len = VAR_3;
 VAR_10 = FUNC_9(VAR_8);

 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
  VAR_5 = FUNC_3(VAR_1, VAR_2);
  if (FUNC_1(VAR_5)) {
   FUNC_10(VAR_1, "failed allocating block\n");
   VAR_9 = FUNC_2(VAR_5);
   goto err_alloc;
  }

  VAR_7 = VAR_5->buf;
  VAR_5->next = VAR_6;
  VAR_7->next = FUNC_5(VAR_5->next ? VAR_5->next->dma : 0);
  VAR_7->block_num = FUNC_4(VAR_10 - VAR_11 - 1);
  VAR_7->token = VAR_4;
  VAR_6 = VAR_5;
 }
 VAR_8->next = VAR_6;
 return VAR_8;

err_alloc:
 while (VAR_6) {
  VAR_5 = VAR_6->next;
  FUNC_6(VAR_1, VAR_6);
  VAR_6 = VAR_5;
 }
 FUNC_7(VAR_8);

 return FUNC_0(VAR_9);
}
