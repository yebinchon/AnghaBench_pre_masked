
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_fpga_device {TYPE_1__* ipsec; } ;
struct mlx5_core_dev {struct mlx5_fpga_device* fpga; } ;
struct TYPE_2__ {int caps; } ;


 unsigned int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

unsigned int FUNC_1(struct mlx5_core_dev *VAR_2)
{
 struct mlx5_fpga_device *VAR_3 = VAR_2->fpga;

 if (!VAR_3 || !VAR_3->ipsec)
  return 0;

 return FUNC_0(VAR_0, VAR_3->ipsec->caps,
   VAR_1);
}
