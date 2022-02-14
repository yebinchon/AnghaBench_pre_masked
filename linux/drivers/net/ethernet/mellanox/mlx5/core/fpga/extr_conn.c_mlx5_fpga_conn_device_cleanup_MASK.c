
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int uar; int pdn; int mkey; } ;
struct mlx5_fpga_device {int mdev; TYPE_1__ conn_res; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

void FUNC_4(struct mlx5_fpga_device *VAR_0)
{
 FUNC_1(VAR_0->mdev, &VAR_0->conn_res.mkey);
 FUNC_0(VAR_0->mdev, VAR_0->conn_res.pdn);
 FUNC_3(VAR_0->mdev, VAR_0->conn_res.uar);
 FUNC_2(VAR_0->mdev);
}
