
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_icosq {int sqn; struct mlx5e_channel* channel; } ;
struct mlx5e_channel {int mdev; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct mlx5e_icosq*) ;

void FUNC_2(struct mlx5e_icosq *VAR_0)
{
 struct mlx5e_channel *VAR_1 = VAR_0->channel;

 FUNC_0(VAR_1->mdev, VAR_0->sqn);
 FUNC_1(VAR_0);
}
