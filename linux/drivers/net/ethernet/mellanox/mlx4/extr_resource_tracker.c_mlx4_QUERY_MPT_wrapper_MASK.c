
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ from_state; } ;
struct res_mpt {TYPE_2__ com; int key; } ;
struct mlx4_vhcr {int in_modifier; } ;
struct mlx4_mpt_entry {int dummy; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int * buf; } ;
struct mlx4_cmd_info {int dummy; } ;
struct TYPE_4__ {int dmpt_table; } ;
struct TYPE_6__ {TYPE_1__ mr_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct mlx4_dev*,int,int,int ,struct res_mpt**) ;
 int FUNC_1 (int *,struct mlx4_mpt_entry*,int) ;
 int FUNC_2 (struct mlx4_dev*,int,struct mlx4_vhcr*,struct mlx4_cmd_mailbox*,struct mlx4_cmd_mailbox*,struct mlx4_cmd_info*) ;
 TYPE_3__* FUNC_3 (struct mlx4_dev*) ;
 struct mlx4_mpt_entry* FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (struct mlx4_dev*) ;
 int FUNC_6 (struct mlx4_dev*,int,int,int ) ;

int FUNC_7(struct mlx4_dev *VAR_5, int VAR_6,
      struct mlx4_vhcr *VAR_7,
      struct mlx4_cmd_mailbox *VAR_8,
      struct mlx4_cmd_mailbox *VAR_9,
      struct mlx4_cmd_info *VAR_10)
{
 int VAR_11;
 int VAR_12 = VAR_7->in_modifier;
 struct res_mpt *VAR_13;
 int VAR_14;

 VAR_14 = VAR_12 & FUNC_5(VAR_5);
 VAR_11 = FUNC_0(VAR_5, VAR_6, VAR_14, VAR_2, &VAR_13);
 if (VAR_11)
  return VAR_11;

 if (VAR_13->com.from_state == VAR_4) {
  struct mlx4_mpt_entry *VAR_15 = FUNC_4(
     &FUNC_3(VAR_5)->mr_table.dmpt_table,
     VAR_13->key, ((void*)0));

  if (((void*)0) == VAR_15 || ((void*)0) == VAR_9->buf) {
   VAR_11 = -VAR_1;
   goto out;
  }

  FUNC_1(VAR_9->buf, VAR_15, sizeof(*VAR_15));

  VAR_11 = 0;
 } else if (VAR_13->com.from_state == VAR_3) {
  VAR_11 = FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
 } else {
  VAR_11 = -VAR_0;
  goto out;
 }


out:
 FUNC_6(VAR_5, VAR_6, VAR_14, VAR_2);
 return VAR_11;
}
