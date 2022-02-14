
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct mlx5dr_icm_pool {int num_of_buckets; int icm_type; TYPE_1__* buckets; } ;
struct TYPE_2__ {int hot_list_count; } ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static u64 FUNC_1(struct mlx5dr_icm_pool *VAR_0)
{
 u64 VAR_1 = 0;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_of_buckets; VAR_2++)
  VAR_1 += VAR_0->buckets[VAR_2].hot_list_count *
       FUNC_0(VAR_2, VAR_0->icm_type);

 return VAR_1;
}
