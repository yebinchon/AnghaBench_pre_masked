
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_rl_table {int max_size; struct mlx5_rl_entry* rl_entry; } ;
struct TYPE_2__ {int rate; } ;
struct mlx5_rl_entry {TYPE_1__ rl; } ;
struct mlx5_rate_limit {int dummy; } ;


 scalar_t__ FUNC_0 (TYPE_1__*,struct mlx5_rate_limit*) ;

__attribute__((used)) static struct mlx5_rl_entry *FUNC_1(struct mlx5_rl_table *VAR_0,
        struct mlx5_rate_limit *VAR_1)
{
 struct mlx5_rl_entry *VAR_2 = ((void*)0);
 bool VAR_3 = 0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0->max_size; VAR_4++) {
  if (FUNC_0(&VAR_0->rl_entry[VAR_4].rl, VAR_1))
   return &VAR_0->rl_entry[VAR_4];
  if (!VAR_3 && !VAR_0->rl_entry[VAR_4].rl.rate) {
   VAR_3 = 1;
   VAR_2 = &VAR_0->rl_entry[VAR_4];
  }
 }

 return VAR_2;
}
