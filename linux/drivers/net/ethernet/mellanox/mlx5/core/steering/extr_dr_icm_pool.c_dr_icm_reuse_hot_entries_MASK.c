
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct mlx5dr_icm_pool {int dummy; } ;
struct mlx5dr_icm_bucket {int hot_list_count; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct mlx5dr_icm_pool*) ;

__attribute__((used)) static bool FUNC_1(struct mlx5dr_icm_pool *VAR_1,
         struct mlx5dr_icm_bucket *VAR_2)
{
 u64 VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 < VAR_0 || !VAR_2->hot_list_count)
  return 0;

 return 1;
}
