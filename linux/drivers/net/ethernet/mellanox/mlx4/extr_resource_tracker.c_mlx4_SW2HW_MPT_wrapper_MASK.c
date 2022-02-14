
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int res_id; } ;
struct res_mtt {TYPE_2__ com; int ref_count; } ;
struct res_mpt {struct res_mtt* mtt; } ;
struct mlx4_vhcr {int in_modifier; } ;
struct TYPE_3__ {int mtt_entry_sz; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct mlx4_cmd_mailbox {int buf; } ;
struct mlx4_cmd_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlx4_dev*,int,int,int ,struct res_mtt*) ;
 int FUNC_2 (struct mlx4_dev*,int,int,int ,struct res_mtt**) ;
 int FUNC_3 (struct mlx4_dev*,int,struct mlx4_vhcr*,struct mlx4_cmd_mailbox*,struct mlx4_cmd_mailbox*,struct mlx4_cmd_info*) ;
 int FUNC_4 (struct mlx4_dev*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct mlx4_dev*,int,int,int ,struct res_mpt**) ;
 int FUNC_13 (struct mlx4_dev*,int,int ,int ) ;
 int FUNC_14 (struct mlx4_dev*,int,int ,int) ;
 int FUNC_15 (struct mlx4_dev*,int,int ,int) ;

int FUNC_16(struct mlx4_dev *VAR_4, int VAR_5,
      struct mlx4_vhcr *VAR_6,
      struct mlx4_cmd_mailbox *VAR_7,
      struct mlx4_cmd_mailbox *VAR_8,
      struct mlx4_cmd_info *VAR_9)
{
 int VAR_10;
 int VAR_11 = VAR_6->in_modifier;
 struct res_mtt *VAR_12;
 struct res_mpt *VAR_13 = ((void*)0);
 int VAR_14 = FUNC_5(VAR_7->buf) / VAR_4->caps.mtt_entry_sz;
 int VAR_15;
 int VAR_16;
 u32 VAR_17;
 int VAR_18;

 VAR_16 = VAR_11 & FUNC_4(VAR_4);
 VAR_10 = FUNC_12(VAR_4, VAR_5, VAR_16, VAR_2, &VAR_13);
 if (VAR_10)
  return VAR_10;


 if (!FUNC_10(VAR_7->buf)) {
  VAR_10 = -VAR_0;
  goto ex_abort;
 }


 VAR_17 = FUNC_7(VAR_7->buf);
 VAR_18 = (VAR_17 >> 17) & 0x7f;
 if (VAR_18 != 0 && --VAR_18 != VAR_5) {
  VAR_10 = -VAR_0;
  goto ex_abort;
 }

 if (FUNC_9(VAR_7->buf)) {

  if (FUNC_8(VAR_7->buf)) {
   VAR_10 = -VAR_0;
   goto ex_abort;
  }

  if (!FUNC_10(VAR_7->buf)) {
   VAR_10 = -VAR_0;
   goto ex_abort;
  }
 }

 VAR_15 = FUNC_11(VAR_7->buf);
 if (!VAR_15) {
  VAR_10 = FUNC_2(VAR_4, VAR_5, VAR_14, VAR_3, &VAR_12);
  if (VAR_10)
   goto ex_abort;

  VAR_10 = FUNC_1(VAR_4, VAR_5, VAR_14,
          FUNC_6(VAR_7->buf), VAR_12);
  if (VAR_10)
   goto ex_put;

  VAR_13->mtt = VAR_12;
 }

 VAR_10 = FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
 if (VAR_10)
  goto ex_put;

 if (!VAR_15) {
  FUNC_0(&VAR_12->ref_count);
  FUNC_13(VAR_4, VAR_5, VAR_12->com.res_id, VAR_3);
 }

 FUNC_15(VAR_4, VAR_5, VAR_1, VAR_16);
 return 0;

ex_put:
 if (!VAR_15)
  FUNC_13(VAR_4, VAR_5, VAR_12->com.res_id, VAR_3);
ex_abort:
 FUNC_14(VAR_4, VAR_5, VAR_1, VAR_16);

 return VAR_10;
}
