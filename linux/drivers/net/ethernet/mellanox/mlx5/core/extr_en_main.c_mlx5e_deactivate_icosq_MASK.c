
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_icosq {int state; struct mlx5e_channel* channel; } ;
struct mlx5e_channel {int napi; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct mlx5e_icosq *VAR_1)
{
 struct mlx5e_channel *VAR_2 = VAR_1->channel;

 FUNC_0(VAR_0, &VAR_1->state);
 FUNC_1(&VAR_2->napi);
}
