
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_fpga_device {scalar_t__ state; scalar_t__ last_oper_image; int fpga_qp_err_nb; int mdev; int fpga_err_nb; int state_lock; } ;
struct mlx5_core_dev {struct mlx5_fpga_device* fpga; } ;
struct TYPE_2__ {int max_num_qps; } ;


 unsigned int FUNC_0 (struct mlx5_core_dev*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct mlx5_core_dev*,unsigned int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct mlx5_fpga_device*) ;
 int FUNC_4 (struct mlx5_core_dev*,int ) ;
 int FUNC_5 (struct mlx5_fpga_device*,char*,int) ;
 TYPE_1__ VAR_4 ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

void FUNC_8(struct mlx5_core_dev *VAR_5)
{
 struct mlx5_fpga_device *VAR_6 = VAR_5->fpga;
 unsigned int VAR_7;
 unsigned long VAR_8;
 int VAR_9;

 if (!VAR_6)
  return;

 FUNC_6(&VAR_6->state_lock, VAR_8);
 if (VAR_6->state != VAR_3) {
  FUNC_7(&VAR_6->state_lock, VAR_8);
  return;
 }
 VAR_6->state = VAR_2;
 FUNC_7(&VAR_6->state_lock, VAR_8);

 if (VAR_6->last_oper_image == VAR_1) {
  VAR_9 = FUNC_4(VAR_5, VAR_0);
  if (VAR_9)
   FUNC_5(VAR_6, "Failed to re-set SBU bypass on: %d\n",
          VAR_9);
 }

 FUNC_3(VAR_6);
 FUNC_2(VAR_6->mdev, &VAR_6->fpga_err_nb);
 FUNC_2(VAR_6->mdev, &VAR_6->fpga_qp_err_nb);

 VAR_7 = FUNC_0(VAR_5, VAR_4.max_num_qps);
 FUNC_1(VAR_5, VAR_7);
}
