
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_rqt {int enabled; int rqtn; } ;
struct mlx5e_priv {int mdev; } ;


 int FUNC_0 (int ,int ) ;

void FUNC_1(struct mlx5e_priv *VAR_0, struct mlx5e_rqt *VAR_1)
{
 VAR_1->enabled = 0;
 FUNC_0(VAR_0->mdev, VAR_1->rqtn);
}
