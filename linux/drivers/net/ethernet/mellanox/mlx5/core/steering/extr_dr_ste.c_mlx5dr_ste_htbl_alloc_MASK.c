
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mlx5dr_ste_htbl {int chunk_size; int * miss_list; scalar_t__ hw_ste_arr; struct mlx5dr_ste* ste_arr; int refcount; int byte_mask; int lu_type; struct mlx5dr_icm_chunk* chunk; } ;
struct mlx5dr_ste {int rule_list; int miss_list_node; int refcount; struct mlx5dr_ste_htbl* htbl; scalar_t__ hw_ste; } ;
struct mlx5dr_icm_pool {int dummy; } ;
struct mlx5dr_icm_chunk {int num_of_entries; int * miss_list; scalar_t__ hw_ste_arr; struct mlx5dr_ste* ste_arr; } ;
typedef enum mlx5dr_icm_chunk_size { ____Placeholder_mlx5dr_icm_chunk_size } mlx5dr_icm_chunk_size ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlx5dr_ste_htbl*) ;
 int FUNC_2 (struct mlx5dr_ste_htbl*) ;
 struct mlx5dr_ste_htbl* FUNC_3 (int,int ) ;
 struct mlx5dr_icm_chunk* FUNC_4 (struct mlx5dr_icm_pool*,int) ;
 int FUNC_5 (int *,int ) ;

struct mlx5dr_ste_htbl *FUNC_6(struct mlx5dr_icm_pool *VAR_2,
           enum mlx5dr_icm_chunk_size VAR_3,
           u8 VAR_4, u16 VAR_5)
{
 struct mlx5dr_icm_chunk *VAR_6;
 struct mlx5dr_ste_htbl *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return ((void*)0);

 VAR_6 = FUNC_4(VAR_2, VAR_3);
 if (!VAR_6)
  goto out_free_htbl;

 VAR_7->chunk = VAR_6;
 VAR_7->lu_type = VAR_4;
 VAR_7->byte_mask = VAR_5;
 VAR_7->ste_arr = VAR_6->ste_arr;
 VAR_7->hw_ste_arr = VAR_6->hw_ste_arr;
 VAR_7->miss_list = VAR_6->miss_list;
 FUNC_5(&VAR_7->refcount, 0);

 for (VAR_8 = 0; VAR_8 < VAR_6->num_of_entries; VAR_8++) {
  struct mlx5dr_ste *VAR_9 = &VAR_7->ste_arr[VAR_8];

  VAR_9->hw_ste = VAR_7->hw_ste_arr + VAR_8 * VAR_0;
  VAR_9->htbl = VAR_7;
  FUNC_5(&VAR_9->refcount, 0);
  FUNC_0(&VAR_9->miss_list_node);
  FUNC_0(&VAR_7->miss_list[VAR_8]);
  FUNC_0(&VAR_9->rule_list);
 }

 VAR_7->chunk_size = VAR_3;
 FUNC_1(VAR_7);
 return VAR_7;

out_free_htbl:
 FUNC_2(VAR_7);
 return ((void*)0);
}
