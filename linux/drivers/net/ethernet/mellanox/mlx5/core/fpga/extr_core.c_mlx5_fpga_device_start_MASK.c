
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct mlx5_fpga_device {scalar_t__ last_oper_image; int state_lock; int state; int fpga_qp_err_nb; struct mlx5_core_dev* mdev; int fpga_err_nb; } ;
struct mlx5_core_dev {struct mlx5_fpga_device* fpga; } ;
struct TYPE_2__ {int max_num_qps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (struct mlx5_core_dev*,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct mlx5_core_dev*,unsigned int) ;
 int FUNC_3 (struct mlx5_core_dev*,unsigned int) ;
 int FUNC_4 (struct mlx5_core_dev*,int *) ;
 int FUNC_5 (struct mlx5_core_dev*,int *) ;
 int FUNC_6 (struct mlx5_core_dev*) ;
 int FUNC_7 (struct mlx5_fpga_device*) ;
 int FUNC_8 (struct mlx5_fpga_device*) ;
 int FUNC_9 (struct mlx5_fpga_device*) ;
 int FUNC_10 (struct mlx5_fpga_device*) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (struct mlx5_fpga_device*,char*) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (struct mlx5_fpga_device*,char*,int ,void*,int ,void*,void*,void*,void*) ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_1__ VAR_13 ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int *,unsigned long) ;

int FUNC_17(struct mlx5_core_dev *VAR_14)
{
 struct mlx5_fpga_device *VAR_15 = VAR_14->fpga;
 unsigned int VAR_16;
 unsigned long VAR_17;
 u32 VAR_18;
 int VAR_19;

 if (!VAR_15)
  return 0;

 VAR_19 = FUNC_10(VAR_15);
 if (VAR_19)
  goto out;

 VAR_19 = FUNC_6(VAR_15->mdev);
 if (VAR_19)
  goto out;

 VAR_18 = FUNC_0(VAR_15->mdev, VAR_6);
 FUNC_14(VAR_15, "%s:%u; %s image, version %u; SBU %06x:%04x version %d\n",
         FUNC_11(VAR_18),
         VAR_18,
         FUNC_13(VAR_15->last_oper_image),
         FUNC_0(VAR_15->mdev, VAR_10),
         FUNC_0(VAR_15->mdev, VAR_9),
         FUNC_0(VAR_15->mdev, VAR_11),
         FUNC_0(VAR_15->mdev, VAR_12));

 VAR_16 = FUNC_0(VAR_14, VAR_13.max_num_qps);
 if (!VAR_16) {
  FUNC_12(VAR_15, "FPGA reports 0 QPs in SHELL_CAPS\n");
  VAR_19 = -VAR_0;
  goto out;
 }

 VAR_19 = FUNC_2(VAR_14, VAR_16);
 if (VAR_19)
  goto out;

 FUNC_1(&VAR_15->fpga_err_nb, VAR_7, VAR_1);
 FUNC_1(&VAR_15->fpga_qp_err_nb, VAR_8, VAR_2);
 FUNC_4(VAR_15->mdev, &VAR_15->fpga_err_nb);
 FUNC_4(VAR_15->mdev, &VAR_15->fpga_qp_err_nb);

 VAR_19 = FUNC_8(VAR_15);
 if (VAR_19)
  goto err_rsvd_gid;

 if (VAR_15->last_oper_image == VAR_3) {
  VAR_19 = FUNC_9(VAR_15);
  if (VAR_19)
   goto err_conn_init;
 }

 goto out;

err_conn_init:
 FUNC_7(VAR_15);

err_rsvd_gid:
 FUNC_5(VAR_15->mdev, &VAR_15->fpga_err_nb);
 FUNC_5(VAR_15->mdev, &VAR_15->fpga_qp_err_nb);
 FUNC_3(VAR_14, VAR_16);
out:
 FUNC_15(&VAR_15->state_lock, VAR_17);
 VAR_15->state = VAR_19 ? VAR_4 : VAR_5;
 FUNC_16(&VAR_15->state_lock, VAR_17);
 return VAR_19;
}
