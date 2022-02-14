
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct mlx5e_priv {int state_lock; } ;
struct ethtool_stats {int dummy; } ;
struct TYPE_2__ {int (* fill_stats ) (struct mlx5e_priv*,int *,int) ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct mlx5e_priv*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mlx5e_priv*,int *,int) ;

void FUNC_4(struct mlx5e_priv *VAR_2,
         struct ethtool_stats *VAR_3, u64 *VAR_4)
{
 int VAR_5, VAR_6 = 0;

 FUNC_1(&VAR_2->state_lock);
 FUNC_0(VAR_2);
 FUNC_2(&VAR_2->state_lock);

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  VAR_6 = VAR_1[VAR_5].fill_stats(VAR_2, VAR_4, VAR_6);
}
