
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx4_vhcr {int in_param; int in_modifier; scalar_t__ op_modifier; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int dummy; } ;
struct mlx4_cmd_info {int dummy; } ;
typedef enum mlx4_steer_type { ____Placeholder_mlx4_steer_type } mlx4_steer_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx4_dev*,int,int,int) ;
 scalar_t__ FUNC_1 (struct mlx4_dev*) ;
 int FUNC_2 (struct mlx4_dev*,int,int) ;
 int FUNC_3 (struct mlx4_dev*,int,int,int) ;

int FUNC_4(struct mlx4_dev *VAR_2, int VAR_3,
    struct mlx4_vhcr *VAR_4,
    struct mlx4_cmd_mailbox *VAR_5,
    struct mlx4_cmd_mailbox *VAR_6,
    struct mlx4_cmd_info *VAR_7)
{
 u32 VAR_8 = (u32) VAR_4->in_param & 0xffffffff;
 int VAR_9 = FUNC_2(VAR_2, VAR_3, VAR_4->in_param >> 62);
 enum mlx4_steer_type VAR_10 = VAR_4->in_modifier;

 if (VAR_9 < 0)
  return -VAR_0;


 if (FUNC_1(VAR_2) && VAR_10 == VAR_1)
  return 0;

 if (VAR_4->op_modifier)
  return FUNC_0(VAR_2, VAR_9, VAR_10, VAR_8);
 else
  return FUNC_3(VAR_2, VAR_9, VAR_10, VAR_8);
}
