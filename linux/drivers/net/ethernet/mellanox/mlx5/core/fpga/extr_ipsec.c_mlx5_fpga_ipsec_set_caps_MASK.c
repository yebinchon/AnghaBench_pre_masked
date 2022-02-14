
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlx5_ifc_fpga_ipsec_cmd_cap {int flags; void* cmd; int member_0; } ;
struct TYPE_2__ {int flags; } ;
struct mlx5_fpga_ipsec_cmd_context {TYPE_1__ resp; int dev; } ;
struct mlx5_core_dev {int dummy; } ;
typedef int cmd ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mlx5_fpga_ipsec_cmd_context*) ;
 int VAR_1 ;
 int FUNC_1 (struct mlx5_fpga_ipsec_cmd_context*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct mlx5_fpga_ipsec_cmd_context*) ;
 int FUNC_4 (int ,char*,int,int) ;
 struct mlx5_fpga_ipsec_cmd_context* FUNC_5 (struct mlx5_core_dev*,struct mlx5_ifc_fpga_ipsec_cmd_cap*,int) ;
 int FUNC_6 (struct mlx5_fpga_ipsec_cmd_context*) ;

__attribute__((used)) static int FUNC_7(struct mlx5_core_dev *VAR_2, u32 VAR_3)
{
 struct mlx5_fpga_ipsec_cmd_context *VAR_4;
 struct mlx5_ifc_fpga_ipsec_cmd_cap VAR_5 = {0};
 int VAR_6;

 VAR_5.cmd = FUNC_2(VAR_1);
 VAR_5.flags = FUNC_2(VAR_3);
 VAR_4 = FUNC_5(VAR_2, &VAR_5, sizeof(VAR_5));
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_6 = FUNC_6(VAR_4);
 if (VAR_6)
  goto out;

 if ((VAR_4->resp.flags & VAR_5.flags) != VAR_5.flags) {
  FUNC_4(VAR_4->dev, "Failed to set capabilities. cmd 0x%08x vs resp 0x%08x\n",
         VAR_5.flags,
         VAR_4->resp.flags);
  VAR_6 = -VAR_0;
 }

out:
 FUNC_3(VAR_4);
 return VAR_6;
}
