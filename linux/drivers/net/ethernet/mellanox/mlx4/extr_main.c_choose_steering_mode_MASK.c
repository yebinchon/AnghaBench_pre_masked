
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_dev_cap {int flags2; scalar_t__ fs_max_num_qp_per_entry; int fs_log_max_ucast_qp_range_size; } ;
struct TYPE_4__ {scalar_t__ dmfs_high_steer_mode; scalar_t__ num_qp_per_mgm; int flags; int steering_mode; int fs_log_max_ucast_qp_range_size; } ;
struct mlx4_dev {int oper_log_mgm_entry_size; TYPE_2__ caps; TYPE_1__* persist; } ;
struct TYPE_3__ {scalar_t__ num_vfs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct mlx4_dev*,char*,int ,int,int) ;
 int FUNC_2 (struct mlx4_dev*,char*) ;
 scalar_t__ FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (struct mlx4_dev*) ;
 int VAR_12 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct mlx4_dev*,char*) ;

__attribute__((used)) static void FUNC_7(struct mlx4_dev *VAR_13,
     struct mlx4_dev_cap *VAR_14)
{
 if (VAR_12 <= 0) {
  if ((-VAR_12) & VAR_4) {
   if (VAR_13->caps.dmfs_high_steer_mode ==
       VAR_7)
    FUNC_2(VAR_13, "DMFS high rate mode not supported\n");
   else
    VAR_13->caps.dmfs_high_steer_mode =
     VAR_8;
  }
 }

 if (VAR_12 <= 0 &&
     VAR_14->flags2 & VAR_1 &&
     (!FUNC_4(VAR_13) ||
      (VAR_14->fs_max_num_qp_per_entry >=
      (VAR_13->persist->num_vfs + 1))) &&
     FUNC_0(VAR_14->fs_max_num_qp_per_entry) >=
  VAR_5) {
  VAR_13->oper_log_mgm_entry_size =
   FUNC_0(VAR_14->fs_max_num_qp_per_entry);
  VAR_13->caps.steering_mode = VAR_11;
  VAR_13->caps.num_qp_per_mgm = VAR_14->fs_max_num_qp_per_entry;
  VAR_13->caps.fs_log_max_ucast_qp_range_size =
   VAR_14->fs_log_max_ucast_qp_range_size;
 } else {
  if (VAR_13->caps.dmfs_high_steer_mode !=
      VAR_7)
   VAR_13->caps.dmfs_high_steer_mode = VAR_6;
  if (VAR_13->caps.flags & VAR_3 &&
      VAR_13->caps.flags & VAR_2)
   VAR_13->caps.steering_mode = VAR_10;
  else {
   VAR_13->caps.steering_mode = VAR_9;

   if (VAR_13->caps.flags & VAR_3 ||
       VAR_13->caps.flags & VAR_2)
    FUNC_6(VAR_13, "Must have both UC_STEER and MC_STEER flags set to use B0 steering - falling back to A0 steering mode\n");
  }
  VAR_13->oper_log_mgm_entry_size =
   VAR_12 > 0 ?
   VAR_12 :
   VAR_0;
  VAR_13->caps.num_qp_per_mgm = FUNC_3(VAR_13);
 }
 FUNC_1(VAR_13, "Steering mode is: %s, oper_log_mgm_entry_size = %d, modparam log_num_mgm_entry_size = %d\n",
   FUNC_5(VAR_13->caps.steering_mode),
   VAR_13->oper_log_mgm_entry_size,
   VAR_12);
}
