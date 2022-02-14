
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_fpga_device {int dummy; } ;
struct mlx5_core_dev {struct mlx5_fpga_device* fpga; } ;


 int FUNC_0 (struct mlx5_fpga_device*) ;
 int FUNC_1 (struct mlx5_core_dev*) ;

void FUNC_2(struct mlx5_core_dev *VAR_0)
{
 struct mlx5_fpga_device *VAR_1 = VAR_0->fpga;

 FUNC_1(VAR_0);
 FUNC_0(VAR_1);
 VAR_0->fpga = ((void*)0);
}
