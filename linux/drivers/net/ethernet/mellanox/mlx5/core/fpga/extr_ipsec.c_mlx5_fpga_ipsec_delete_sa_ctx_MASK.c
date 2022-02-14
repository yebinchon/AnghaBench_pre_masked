
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_fpga_ipsec_sa_ctx {struct mlx5_fpga_esp_xfrm* fpga_xfrm; } ;
struct mlx5_fpga_esp_xfrm {int lock; int * sa_ctx; int num_rules; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(void *VAR_0)
{
 struct mlx5_fpga_esp_xfrm *VAR_1 =
   ((struct mlx5_fpga_ipsec_sa_ctx *)VAR_0)->fpga_xfrm;

 FUNC_1(&VAR_1->lock);
 if (!--VAR_1->num_rules) {
  FUNC_0(VAR_1->sa_ctx);
  VAR_1->sa_ctx = ((void*)0);
 }
 FUNC_2(&VAR_1->lock);
}
