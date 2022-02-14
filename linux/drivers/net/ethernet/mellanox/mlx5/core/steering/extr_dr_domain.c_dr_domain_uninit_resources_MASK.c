
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5dr_domain {int pdn; int mdev; int uar; int ste_icm_pool; int action_icm_pool; int send_ring; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mlx5dr_domain*,int ) ;

__attribute__((used)) static void FUNC_4(struct mlx5dr_domain *VAR_0)
{
 FUNC_3(VAR_0, VAR_0->send_ring);
 FUNC_2(VAR_0->action_icm_pool);
 FUNC_2(VAR_0->ste_icm_pool);
 FUNC_1(VAR_0->mdev, VAR_0->uar);
 FUNC_0(VAR_0->mdev, VAR_0->pdn);
}
