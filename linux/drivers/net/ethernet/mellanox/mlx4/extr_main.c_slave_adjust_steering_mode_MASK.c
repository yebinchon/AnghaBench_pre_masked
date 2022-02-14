
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_init_hca_param {scalar_t__ steering_mode; int log_mc_entry_sz; } ;
struct mlx4_dev_cap {int fs_max_num_qp_per_entry; int fs_log_max_ucast_qp_range_size; } ;
struct TYPE_2__ {scalar_t__ steering_mode; int num_qp_per_mgm; int fs_log_max_ucast_qp_range_size; } ;
struct mlx4_dev {TYPE_1__ caps; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mlx4_dev*,char*,int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mlx4_dev *VAR_1,
           struct mlx4_dev_cap *VAR_2,
           struct mlx4_init_hca_param *VAR_3)
{
 VAR_1->caps.steering_mode = VAR_3->steering_mode;
 if (VAR_1->caps.steering_mode == VAR_0) {
  VAR_1->caps.num_qp_per_mgm = VAR_2->fs_max_num_qp_per_entry;
  VAR_1->caps.fs_log_max_ucast_qp_range_size =
   VAR_2->fs_log_max_ucast_qp_range_size;
 } else
  VAR_1->caps.num_qp_per_mgm =
   4 * ((1 << VAR_3->log_mc_entry_sz)/16 - 2);

 FUNC_0(VAR_1, "Steering mode is: %s\n",
   FUNC_1(VAR_1->caps.steering_mode));
}
