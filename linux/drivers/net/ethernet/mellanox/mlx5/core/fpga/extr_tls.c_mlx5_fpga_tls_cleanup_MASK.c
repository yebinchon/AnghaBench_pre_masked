
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_fpga_device {TYPE_1__* tls; } ;
struct mlx5_core_dev {struct mlx5_fpga_device* fpga; } ;
struct TYPE_2__ {int conn; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct mlx5_core_dev *VAR_0)
{
 struct mlx5_fpga_device *VAR_1 = VAR_0->fpga;

 if (!VAR_1 || !VAR_1->tls)
  return;

 FUNC_1(VAR_1->tls->conn);
 FUNC_0(VAR_1->tls);
 VAR_1->tls = ((void*)0);
}
