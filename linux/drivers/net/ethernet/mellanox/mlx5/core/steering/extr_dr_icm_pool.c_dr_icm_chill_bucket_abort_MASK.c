
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5dr_icm_bucket {scalar_t__ sync_list_count; int hot_list_count; int hot_list; int sync_list; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct mlx5dr_icm_bucket *VAR_0)
{
 FUNC_0(&VAR_0->sync_list, &VAR_0->hot_list);
 VAR_0->hot_list_count += VAR_0->sync_list_count;
 VAR_0->sync_list_count = 0;
}
