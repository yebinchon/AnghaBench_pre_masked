
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_async_work {int (* user_callback ) (int,struct mlx5_async_work*) ;struct mlx5_async_ctx* ctx; } ;
struct mlx5_async_ctx {int wait; int num_inflight; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int,struct mlx5_async_work*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(int VAR_0, void *VAR_1)
{
 struct mlx5_async_work *VAR_2 = VAR_1;
 struct mlx5_async_ctx *VAR_3 = VAR_2->ctx;

 VAR_2->user_callback(VAR_0, VAR_2);
 if (FUNC_0(&VAR_3->num_inflight))
  FUNC_2(&VAR_3->wait);
}
