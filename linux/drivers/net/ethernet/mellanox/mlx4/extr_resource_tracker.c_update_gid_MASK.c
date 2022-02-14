
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_4__ {int sched_queue; int mgid_index; } ;
struct TYPE_3__ {int sched_queue; int mgid_index; } ;
struct mlx4_qp_context {TYPE_2__ alt_path; TYPE_1__ pri_path; int flags; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {struct mlx4_qp_context* buf; } ;
typedef enum mlx4_qp_optpar { ____Placeholder_mlx4_qp_optpar } mlx4_qp_optpar ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlx4_dev*,int,int) ;
 scalar_t__ FUNC_2 (struct mlx4_dev*,int) ;

__attribute__((used)) static void FUNC_3(struct mlx4_dev *VAR_6, struct mlx4_cmd_mailbox *VAR_7,
         u8 VAR_8)
{
 struct mlx4_qp_context *VAR_9 = VAR_7->buf + 8;
 enum mlx4_qp_optpar VAR_10 = FUNC_0(*(__be32 *) VAR_7->buf);
 u32 VAR_11 = (FUNC_0(VAR_9->flags) >> 16) & 0xff;
 int VAR_12;

 if (VAR_4 == VAR_11) {
  VAR_12 = (VAR_9->pri_path.sched_queue >> 6 & 1) + 1;
  if (FUNC_2(VAR_6, VAR_12))
   VAR_9->pri_path.mgid_index =
    FUNC_1(VAR_6, VAR_8, VAR_12) | 0x80;
  else
   VAR_9->pri_path.mgid_index = VAR_8 | 0x80;

 } else if (VAR_2 == VAR_11 || VAR_5 == VAR_11 || VAR_3 == VAR_11) {
  if (VAR_10 & VAR_1) {
   VAR_12 = (VAR_9->pri_path.sched_queue >> 6 & 1) + 1;
   if (FUNC_2(VAR_6, VAR_12)) {
    VAR_9->pri_path.mgid_index +=
     FUNC_1(VAR_6, VAR_8, VAR_12);
    VAR_9->pri_path.mgid_index &= 0x7f;
   } else {
    VAR_9->pri_path.mgid_index = VAR_8 & 0x7F;
   }
  }
  if (VAR_10 & VAR_0) {
   VAR_12 = (VAR_9->alt_path.sched_queue >> 6 & 1) + 1;
   if (FUNC_2(VAR_6, VAR_12)) {
    VAR_9->alt_path.mgid_index +=
     FUNC_1(VAR_6, VAR_8, VAR_12);
    VAR_9->alt_path.mgid_index &= 0x7f;
   } else {
    VAR_9->alt_path.mgid_index = VAR_8 & 0x7F;
   }
  }
 }
}
