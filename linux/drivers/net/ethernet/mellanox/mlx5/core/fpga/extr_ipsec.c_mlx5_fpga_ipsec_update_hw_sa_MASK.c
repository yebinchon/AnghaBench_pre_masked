
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sw_sa_handle; int cmd; } ;
struct mlx5_ifc_fpga_ipsec_sa {TYPE_1__ ipsec_sa_v1; } ;
struct TYPE_4__ {scalar_t__ sw_sa_handle; } ;
struct mlx5_fpga_ipsec_cmd_context {TYPE_2__ resp; int command; } ;
struct mlx5_fpga_device {int ipsec; struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mlx5_fpga_ipsec_cmd_context*) ;
 int FUNC_1 (struct mlx5_fpga_ipsec_cmd_context*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct mlx5_fpga_ipsec_cmd_context*) ;
 int FUNC_5 (struct mlx5_fpga_device*,char*,int ,int ) ;
 scalar_t__ FUNC_6 (struct mlx5_core_dev*,struct mlx5_ifc_fpga_ipsec_sa*,size_t) ;
 int FUNC_7 (struct mlx5_fpga_ipsec_cmd_context*) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct mlx5_fpga_device *VAR_1,
     struct mlx5_ifc_fpga_ipsec_sa *VAR_2,
     int VAR_3)
{
 struct mlx5_core_dev *VAR_4 = VAR_1->mdev;
 struct mlx5_ifc_fpga_ipsec_sa *VAR_5;
 struct mlx5_fpga_ipsec_cmd_context *VAR_6;
 size_t VAR_7;
 int VAR_8;

 VAR_2->ipsec_sa_v1.cmd = FUNC_2(VAR_3);
 if (FUNC_3(VAR_1->ipsec))
  VAR_7 = sizeof(*VAR_2);
 else
  VAR_7 = sizeof(VAR_2->ipsec_sa_v1);

 VAR_6 = (struct mlx5_fpga_ipsec_cmd_context *)
   FUNC_6(VAR_4, VAR_2, VAR_7);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_8 = FUNC_7(VAR_6);
 if (VAR_8)
  goto out;

 VAR_5 = (struct mlx5_ifc_fpga_ipsec_sa *)&VAR_6->command;
 if (VAR_5->ipsec_sa_v1.sw_sa_handle != VAR_6->resp.sw_sa_handle) {
  FUNC_5(VAR_1, "mismatch SA handle. cmd 0x%08x vs resp 0x%08x\n",
         FUNC_8(VAR_5->ipsec_sa_v1.sw_sa_handle),
         FUNC_8(VAR_6->resp.sw_sa_handle));
  VAR_8 = -VAR_0;
 }

out:
 FUNC_4(VAR_6);
 return VAR_8;
}
