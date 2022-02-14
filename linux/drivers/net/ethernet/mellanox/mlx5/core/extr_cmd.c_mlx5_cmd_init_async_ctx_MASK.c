
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_core_dev {int dummy; } ;
struct mlx5_async_ctx {int wait; int num_inflight; struct mlx5_core_dev* dev; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct mlx5_core_dev *VAR_0,
        struct mlx5_async_ctx *VAR_1)
{
 VAR_1->dev = VAR_0;

 FUNC_0(&VAR_1->num_inflight, 1);
 FUNC_1(&VAR_1->wait);
}
