
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5dr_icm_pool {scalar_t__ icm_type; } ;
struct mlx5dr_icm_bucket {int sync_list; int hot_list; int used_list; int free_list; int mutex; struct mlx5dr_icm_pool* pool; int num_of_entries; int entry_size; } ;
typedef enum mlx5dr_icm_chunk_size { ____Placeholder_mlx5dr_icm_chunk_size } mlx5dr_icm_chunk_size ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct mlx5dr_icm_pool *VAR_3,
          struct mlx5dr_icm_bucket *VAR_4,
          enum mlx5dr_icm_chunk_size VAR_5)
{
 if (VAR_3->icm_type == VAR_0)
  VAR_4->entry_size = VAR_2;
 else
  VAR_4->entry_size = VAR_1;

 VAR_4->num_of_entries = FUNC_1(VAR_5);
 VAR_4->pool = VAR_3;
 FUNC_2(&VAR_4->mutex);
 FUNC_0(&VAR_4->free_list);
 FUNC_0(&VAR_4->used_list);
 FUNC_0(&VAR_4->hot_list);
 FUNC_0(&VAR_4->sync_list);
}
