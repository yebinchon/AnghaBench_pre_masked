
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int sched_queue; } ;
struct TYPE_3__ {int sched_queue; } ;
struct mlx4_qp_context {TYPE_2__ alt_path; TYPE_1__ pri_path; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {scalar_t__ buf; } ;
typedef enum mlx4_qp_optpar { ____Placeholder_mlx4_qp_optpar } mlx4_qp_optpar ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct mlx4_dev*,int) ;
 int FUNC_2 (struct mlx4_dev*,int,int) ;

__attribute__((used)) static int FUNC_3(struct mlx4_dev *VAR_4, int VAR_5,
      struct mlx4_qp_context *VAR_6,
      struct mlx4_cmd_mailbox *VAR_7)
{
 enum mlx4_qp_optpar VAR_8 = FUNC_0(*(__be32 *)VAR_7->buf);
 u8 VAR_9;
 int VAR_10 = FUNC_2(
     VAR_4, VAR_5, (VAR_6->pri_path.sched_queue >> 6 & 1) + 1) - 1;

 if (VAR_10 < 0)
  return -VAR_0;

 VAR_9 = (VAR_6->pri_path.sched_queue & ~(1 << 6)) |
     ((VAR_10 & 1) << 6);

 if (VAR_8 & (VAR_2 | VAR_3) ||
     VAR_6->pri_path.sched_queue || FUNC_1(VAR_4, VAR_10 + 1)) {
  VAR_6->pri_path.sched_queue = VAR_9;
 }

 if (VAR_8 & VAR_1) {
  VAR_10 = FUNC_2(
    VAR_4, VAR_5, (VAR_6->alt_path.sched_queue >> 6 & 1)
    + 1) - 1;
  if (VAR_10 < 0)
   return -VAR_0;
  VAR_6->alt_path.sched_queue =
   (VAR_6->alt_path.sched_queue & ~(1 << 6)) |
   (VAR_10 & 1) << 6;
 }
 return 0;
}
