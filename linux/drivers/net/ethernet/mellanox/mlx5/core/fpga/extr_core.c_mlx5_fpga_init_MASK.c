
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_fpga_device {struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {struct mlx5_fpga_device* fpga; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_core_dev*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct mlx5_core_dev*,char*) ;
 struct mlx5_fpga_device* FUNC_2 () ;

int FUNC_3(struct mlx5_core_dev *VAR_2)
{
 struct mlx5_fpga_device *VAR_3 = ((void*)0);

 if (!FUNC_0(VAR_2, VAR_1)) {
  FUNC_1(VAR_2, "FPGA capability not present\n");
  return 0;
 }

 FUNC_1(VAR_2, "Initializing FPGA\n");

 VAR_3 = FUNC_2();
 if (!VAR_3)
  return -VAR_0;

 VAR_3->mdev = VAR_2;
 VAR_2->fpga = VAR_3;

 return 0;
}
