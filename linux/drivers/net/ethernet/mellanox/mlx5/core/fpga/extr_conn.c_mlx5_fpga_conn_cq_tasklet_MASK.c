
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int active; } ;
struct mlx5_fpga_conn {TYPE_1__ qp; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_fpga_conn*,int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_1)
{
 struct mlx5_fpga_conn *VAR_2 = (void *)VAR_1;

 if (FUNC_1(!VAR_2->qp.active))
  return;
 FUNC_0(VAR_2, VAR_0);
}
