
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5e_priv {int dummy; } ;
struct TYPE_2__ {int update_stats_mask; int (* update_stats ) (struct mlx5e_priv*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (struct mlx5e_priv*) ;

void FUNC_1(struct mlx5e_priv *VAR_3)
{
 int VAR_4;

 for (VAR_4 = VAR_1 - 1; VAR_4 >= 0; VAR_4--)
  if (VAR_2[VAR_4].update_stats_mask &
      VAR_0)
   VAR_2[VAR_4].update_stats(VAR_3);
}
