
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {int owner; } ;
struct res_fs_rule {int mirr_mbox_size; TYPE_1__ com; int * mirr_mbox; scalar_t__ mirr_rule_id; int qpn; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int dma; int buf; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mlx4_cmd_mailbox*) ;
 int VAR_5 ;
 int FUNC_2 (struct mlx4_dev*,int ,scalar_t__,int,int ,int ) ;
 int FUNC_3 (struct mlx4_dev*,int ,scalar_t__,int ,struct res_fs_rule**) ;
 int FUNC_4 (int ,int *,int) ;
 struct mlx4_cmd_mailbox* FUNC_5 (struct mlx4_dev*) ;
 int FUNC_6 (struct mlx4_dev*,scalar_t__,int ,int ,int ,int ,int ) ;
 int FUNC_7 (struct mlx4_dev*,int ,scalar_t__*,int,int ,int ,int ,int ) ;
 int FUNC_8 (struct mlx4_dev*,char*) ;
 int FUNC_9 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;
 int FUNC_10 (struct mlx4_dev*,int ,scalar_t__,int ) ;
 int FUNC_11 (struct mlx4_dev*,int ,scalar_t__,int,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct mlx4_dev *VAR_6, struct res_fs_rule *VAR_7)
{
 struct mlx4_cmd_mailbox *VAR_8;
 int VAR_9;
 struct res_fs_rule *VAR_10;
 u64 VAR_11;

 VAR_8 = FUNC_5(VAR_6);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 if (!VAR_7->mirr_mbox) {
  FUNC_8(VAR_6, "rule mirroring mailbox is null\n");
  return -VAR_0;
 }
 FUNC_4(VAR_8->buf, VAR_7->mirr_mbox, VAR_7->mirr_mbox_size);
 VAR_9 = FUNC_7(VAR_6, VAR_8->dma, &VAR_11, VAR_7->mirr_mbox_size >> 2, 0,
      VAR_3, VAR_2,
      VAR_1);
 FUNC_9(VAR_6, VAR_8);

 if (VAR_9)
  goto err;

 VAR_9 = FUNC_2(VAR_6, VAR_7->com.owner, VAR_11, 1, VAR_5, VAR_7->qpn);
 if (VAR_9)
  goto err_detach;

 VAR_9 = FUNC_3(VAR_6, VAR_7->com.owner, VAR_11, VAR_5, &VAR_10);
 if (VAR_9)
  goto err_rem;

 VAR_7->mirr_rule_id = VAR_11;
 VAR_10->mirr_rule_id = 0;
 VAR_10->mirr_mbox_size = 0;
 VAR_10->mirr_mbox = ((void*)0);
 FUNC_10(VAR_6, VAR_7->com.owner, VAR_11, VAR_5);

 return 0;
err_rem:
 FUNC_11(VAR_6, VAR_7->com.owner, VAR_11, 1, VAR_5, 0);
err_detach:
 FUNC_6(VAR_6, VAR_11, 0, 0, VAR_4,
   VAR_2, VAR_1);
err:
 return VAR_9;
}
