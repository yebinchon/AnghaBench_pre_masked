
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int vf_vport; int sw; } ;
struct mlx5e_priv {TYPE_2__ stats; int state_lock; TYPE_1__* profile; } ;
struct ethtool_stats {int dummy; } ;
struct TYPE_3__ {int (* update_stats ) (struct mlx5e_priv*) ;} ;


 int FUNC_0 (int *,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mlx5e_priv*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct mlx5e_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct mlx5e_priv*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_4,
     struct ethtool_stats *VAR_5, u64 *VAR_6)
{
 struct mlx5e_priv *VAR_7 = FUNC_4(VAR_4);
 int VAR_8, VAR_9;

 if (!VAR_6)
  return;

 FUNC_2(&VAR_7->state_lock);
 FUNC_1(VAR_7);
 VAR_7->profile->update_stats(VAR_7);
 FUNC_3(&VAR_7->state_lock);

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
  VAR_6[VAR_8] = FUNC_0(&VAR_7->stats.sw,
            VAR_2, VAR_8);

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++, VAR_8++)
  VAR_6[VAR_8] = FUNC_0(&VAR_7->stats.vf_vport,
            VAR_3, VAR_9);
}
