
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_fc_pool {scalar_t__ available_fcs; scalar_t__ threshold; int pool_lock; int unused; int partially_used; int used_fcs; struct mlx5_core_dev* dev; } ;
struct mlx5_fc_bulk {int bulk_len; int pool_list; } ;
struct mlx5_fc {struct mlx5_fc_bulk* bulk; } ;
struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct mlx5_core_dev*,char*) ;
 int FUNC_4 (struct mlx5_fc_bulk*) ;
 scalar_t__ FUNC_5 (struct mlx5_fc_bulk*,struct mlx5_fc*) ;
 int FUNC_6 (struct mlx5_fc_pool*,struct mlx5_fc_bulk*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(struct mlx5_fc_pool *VAR_0, struct mlx5_fc *VAR_1)
{
 struct mlx5_core_dev *VAR_2 = VAR_0->dev;
 struct mlx5_fc_bulk *VAR_3 = VAR_1->bulk;
 int VAR_4;

 FUNC_7(&VAR_0->pool_lock);

 if (FUNC_5(VAR_3, VAR_1)) {
  FUNC_3(VAR_2, "Attempted to release a counter which is not acquired\n");
  goto unlock;
 }

 VAR_0->available_fcs++;
 VAR_0->used_fcs--;

 VAR_4 = FUNC_4(VAR_3);
 if (VAR_4 == 1)
  FUNC_2(&VAR_3->pool_list, &VAR_0->partially_used);
 if (VAR_4 == VAR_3->bulk_len) {
  FUNC_1(&VAR_3->pool_list);
  if (VAR_0->available_fcs > VAR_0->threshold)
   FUNC_6(VAR_0, VAR_3);
  else
   FUNC_0(&VAR_3->pool_list, &VAR_0->unused);
 }

unlock:
 FUNC_8(&VAR_0->pool_lock);
}
