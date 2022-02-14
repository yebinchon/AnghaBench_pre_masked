
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_fpga_query {scalar_t__ status; int oper_image; int admin_image; } ;
struct mlx5_fpga_device {int last_oper_image; int last_admin_image; int mdev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mlx5_fpga_device*,char*,scalar_t__,int ,int ) ;
 int FUNC_1 (struct mlx5_fpga_device*,char*,int,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct mlx5_fpga_query*) ;

__attribute__((used)) static int FUNC_4(struct mlx5_fpga_device *VAR_2)
{
 struct mlx5_fpga_query VAR_3;
 int VAR_4;

 VAR_4 = FUNC_3(VAR_2->mdev, &VAR_3);
 if (VAR_4) {
  FUNC_1(VAR_2, "Failed to query status: %d\n", VAR_4);
  return VAR_4;
 }

 VAR_2->last_admin_image = VAR_3.admin_image;
 VAR_2->last_oper_image = VAR_3.oper_image;

 FUNC_0(VAR_2, "Status %u; Admin image %u; Oper image %u\n",
        VAR_3.status, VAR_3.admin_image, VAR_3.oper_image);

 if (VAR_3.status != VAR_1) {
  FUNC_1(VAR_2, "%s image failed to load; status %u\n",
         FUNC_2(VAR_2->last_oper_image),
         VAR_3.status);
  return -VAR_0;
 }

 return 0;
}
