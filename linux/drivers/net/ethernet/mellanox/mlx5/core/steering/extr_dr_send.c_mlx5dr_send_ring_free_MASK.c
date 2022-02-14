
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5dr_send_ring {struct mlx5dr_send_ring* buf; int mr; int sync_mr; int cq; int qp; } ;
struct mlx5dr_domain {int mdev; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct mlx5dr_send_ring*) ;

void FUNC_4(struct mlx5dr_domain *VAR_0,
      struct mlx5dr_send_ring *VAR_1)
{
 FUNC_2(VAR_0->mdev, VAR_1->qp);
 FUNC_1(VAR_0->mdev, VAR_1->cq);
 FUNC_0(VAR_0->mdev, VAR_1->sync_mr);
 FUNC_0(VAR_0->mdev, VAR_1->mr);
 FUNC_3(VAR_1->buf);
 FUNC_3(VAR_1);
}
