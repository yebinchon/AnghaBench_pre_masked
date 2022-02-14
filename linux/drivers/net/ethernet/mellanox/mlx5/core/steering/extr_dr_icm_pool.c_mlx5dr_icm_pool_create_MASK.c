
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5dr_icm_pool {int icm_type; int max_log_chunk_sz; int num_of_buckets; int mr_mutex; int * buckets; int icm_mr_list; struct mlx5dr_domain* dmn; } ;
struct TYPE_2__ {int max_log_sw_icm_sz; int max_log_action_icm_sz; } ;
struct mlx5dr_domain {TYPE_1__ info; } ;
typedef enum mlx5dr_icm_type { ____Placeholder_mlx5dr_icm_type } mlx5dr_icm_type ;
typedef enum mlx5dr_icm_chunk_size { ____Placeholder_mlx5dr_icm_chunk_size } mlx5dr_icm_chunk_size ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlx5dr_icm_pool*,int *,int) ;
 int * FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct mlx5dr_icm_pool*) ;
 struct mlx5dr_icm_pool* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;

struct mlx5dr_icm_pool *FUNC_6(struct mlx5dr_domain *VAR_2,
            enum mlx5dr_icm_type VAR_3)
{
 enum mlx5dr_icm_chunk_size VAR_4;
 struct mlx5dr_icm_pool *VAR_5;
 int VAR_6;

 if (VAR_3 == VAR_0)
  VAR_4 = VAR_2->info.max_log_sw_icm_sz;
 else
  VAR_4 = VAR_2->info.max_log_action_icm_sz;

 VAR_5 = FUNC_4(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->buckets = FUNC_2(VAR_4 + 1,
    sizeof(VAR_5->buckets[0]),
    VAR_1);
 if (!VAR_5->buckets)
  goto free_pool;

 VAR_5->dmn = VAR_2;
 VAR_5->icm_type = VAR_3;
 VAR_5->max_log_chunk_sz = VAR_4;
 VAR_5->num_of_buckets = VAR_4 + 1;
 FUNC_0(&VAR_5->icm_mr_list);

 for (VAR_6 = 0; VAR_6 < VAR_5->num_of_buckets; VAR_6++)
  FUNC_1(VAR_5, &VAR_5->buckets[VAR_6], VAR_6);

 FUNC_5(&VAR_5->mr_mutex);

 return VAR_5;

free_pool:
 FUNC_3(VAR_5);
 return ((void*)0);
}
