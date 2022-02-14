
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5dr_icm_chunk {int chunk_list; struct mlx5dr_icm_bucket* bucket; } ;
struct mlx5dr_icm_bucket {TYPE_1__* pool; int total_chunks; } ;
struct TYPE_2__ {scalar_t__ icm_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mlx5dr_icm_chunk*) ;
 int FUNC_1 (struct mlx5dr_icm_chunk*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct mlx5dr_icm_chunk *VAR_1)
{
 struct mlx5dr_icm_bucket *VAR_2 = VAR_1->bucket;

 FUNC_2(&VAR_1->chunk_list);
 VAR_2->total_chunks--;

 if (VAR_2->pool->icm_type == VAR_0)
  FUNC_0(VAR_1);

 FUNC_1(VAR_1);
}
