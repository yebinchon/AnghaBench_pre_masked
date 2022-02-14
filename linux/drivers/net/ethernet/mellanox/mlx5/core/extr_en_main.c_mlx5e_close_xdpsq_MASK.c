
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_xdpsq {int sqn; int state; struct mlx5e_channel* channel; } ;
struct mlx5e_channel {int mdev; int napi; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct mlx5e_xdpsq*) ;
 int FUNC_3 (struct mlx5e_xdpsq*) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct mlx5e_xdpsq *VAR_1)
{
 struct mlx5e_channel *VAR_2 = VAR_1->channel;

 FUNC_0(VAR_0, &VAR_1->state);
 FUNC_4(&VAR_2->napi);

 FUNC_1(VAR_2->mdev, VAR_1->sqn);
 FUNC_3(VAR_1);
 FUNC_2(VAR_1);
}
