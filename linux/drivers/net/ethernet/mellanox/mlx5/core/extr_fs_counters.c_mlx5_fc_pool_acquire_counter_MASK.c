
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_fc_pool {int pool_lock; int used_fcs; int available_fcs; int partially_used; int unused; int fully_used; } ;
struct mlx5_fc_bulk {int pool_list; } ;
struct mlx5_fc {int pool_list; } ;


 struct mlx5_fc_bulk* FUNC_0 (struct mlx5_fc_bulk*) ;
 scalar_t__ FUNC_1 (struct mlx5_fc_bulk*) ;
 int FUNC_2 (int *,int *) ;
 struct mlx5_fc_bulk* FUNC_3 (struct mlx5_fc_bulk*) ;
 struct mlx5_fc_bulk* FUNC_4 (int *,int *,int) ;
 struct mlx5_fc_bulk* FUNC_5 (struct mlx5_fc_pool*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static struct mlx5_fc *
FUNC_8(struct mlx5_fc_pool *VAR_0)
{
 struct mlx5_fc_bulk *VAR_1;
 struct mlx5_fc *VAR_2;

 FUNC_6(&VAR_0->pool_lock);

 VAR_2 = FUNC_4(&VAR_0->partially_used,
         &VAR_0->fully_used, 0);
 if (FUNC_1(VAR_2))
  VAR_2 = FUNC_4(&VAR_0->unused,
          &VAR_0->partially_used,
          1);
 if (FUNC_1(VAR_2)) {
  VAR_1 = FUNC_5(VAR_0);
  if (FUNC_1(VAR_1)) {
   VAR_2 = FUNC_0(VAR_1);
   goto out;
  }
  VAR_2 = FUNC_3(VAR_1);
  FUNC_2(&VAR_1->pool_list, &VAR_0->partially_used);
 }
 VAR_0->available_fcs--;
 VAR_0->used_fcs++;

out:
 FUNC_7(&VAR_0->pool_lock);
 return VAR_2;
}
