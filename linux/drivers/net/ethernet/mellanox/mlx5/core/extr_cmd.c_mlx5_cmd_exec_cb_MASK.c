
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_async_work {int user_callback; struct mlx5_async_ctx* ctx; } ;
struct mlx5_async_ctx {int wait; int num_inflight; int dev; } ;
typedef int mlx5_async_cbk_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,void*,int,void*,int,int ,struct mlx5_async_work*,int) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;

int FUNC_5(struct mlx5_async_ctx *VAR_2, void *VAR_3, int VAR_4,
       void *VAR_5, int VAR_6, mlx5_async_cbk_t VAR_7,
       struct mlx5_async_work *VAR_8)
{
 int VAR_9;

 VAR_8->ctx = VAR_2;
 VAR_8->user_callback = VAR_7;
 if (FUNC_0(!FUNC_2(&VAR_2->num_inflight)))
  return -VAR_0;
 VAR_9 = FUNC_3(VAR_2->dev, VAR_3, VAR_4, VAR_5, VAR_6,
         VAR_1, VAR_8, 0);
 if (VAR_9 && FUNC_1(&VAR_2->num_inflight))
  FUNC_4(&VAR_2->wait);

 return VAR_9;
}
