
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx4_mr {scalar_t__ enabled; int key; } ;
struct mlx4_mpt_entry {int dummy; } ;
struct TYPE_4__ {int num_mpts; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct mlx4_cmd_mailbox {int buf; int dma; } ;
struct TYPE_5__ {int dmpt_table; } ;
struct TYPE_6__ {TYPE_2__ mr_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct mlx4_cmd_mailbox*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mlx4_dev*,int *,int) ;
 struct mlx4_cmd_mailbox* FUNC_4 (struct mlx4_dev*) ;
 int FUNC_5 (struct mlx4_dev*,int ,int ,int,int ,int ,int ,int ) ;
 int FUNC_6 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;
 int FUNC_7 (struct mlx4_dev*) ;
 TYPE_3__* FUNC_8 (struct mlx4_dev*) ;
 struct mlx4_mpt_entry* FUNC_9 (int *,int,int *) ;
 int FUNC_10 (struct mlx4_dev*,char*,...) ;

int FUNC_11(struct mlx4_dev *VAR_7, struct mlx4_mr *VAR_8,
         struct mlx4_mpt_entry ***VAR_9)
{
 int VAR_10;
 int VAR_11 = FUNC_2(VAR_8->key) & (VAR_7->caps.num_mpts - 1);
 struct mlx4_cmd_mailbox *VAR_12 = ((void*)0);

 if (VAR_8->enabled != VAR_5)
  return -VAR_0;

 VAR_10 = FUNC_3(VAR_7, ((void*)0), VAR_11);
 if (VAR_10) {
  FUNC_10(VAR_7, "HW2SW_MPT failed (%d).", VAR_10);
  FUNC_10(VAR_7, "Most likely the MR has MWs bound to it.\n");
  return VAR_10;
 }

 VAR_8->enabled = VAR_6;

 if (!FUNC_7(VAR_7)) {
  **VAR_9 = FUNC_9(
    &FUNC_8(VAR_7)->mr_table.dmpt_table,
    VAR_11, ((void*)0));
 } else {
  VAR_12 = FUNC_4(VAR_7);
  if (FUNC_0(VAR_12))
   return FUNC_1(VAR_12);

  VAR_10 = FUNC_5(VAR_7, 0, VAR_12->dma, VAR_11,
       0, VAR_2,
       VAR_3,
       VAR_4);
  if (VAR_10)
   goto free_mailbox;

  *VAR_9 = (struct mlx4_mpt_entry **)&VAR_12->buf;
 }

 if (!(*VAR_9) || !(**VAR_9)) {
  VAR_10 = -VAR_1;
  goto free_mailbox;
 }

 return 0;

free_mailbox:
 FUNC_6(VAR_7, VAR_12);
 return VAR_10;
}
