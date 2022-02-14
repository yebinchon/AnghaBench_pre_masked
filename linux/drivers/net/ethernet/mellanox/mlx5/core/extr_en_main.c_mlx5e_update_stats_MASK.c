
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5e_priv {int dummy; } ;
struct TYPE_2__ {int (* update_stats ) (struct mlx5e_priv*) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct mlx5e_priv*) ;

void FUNC_1(struct mlx5e_priv *VAR_2)
{
 int VAR_3;

 for (VAR_3 = VAR_0 - 1; VAR_3 >= 0; VAR_3--)
  if (VAR_1[VAR_3].update_stats)
   VAR_1[VAR_3].update_stats(VAR_2);
}
