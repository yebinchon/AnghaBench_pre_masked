
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_6__ {int phy_statistical_counters; int phy_counters; } ;
struct TYPE_7__ {TYPE_2__ pport; } ;
struct mlx5e_priv {TYPE_3__ stats; struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_5__ {int link_down_events; } ;
struct TYPE_8__ {TYPE_1__ phys_layer_cntrs; } ;


 int FUNC_0 (int *,int ,int) ;
 scalar_t__ FUNC_1 (struct mlx5_core_dev*,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_3(struct mlx5e_priv *VAR_8, u64 *VAR_9, int VAR_10)
{
 struct mlx5_core_dev *VAR_11 = VAR_8->mdev;
 int VAR_12;


 VAR_9[VAR_10++] = FUNC_2(VAR_4, VAR_8->stats.pport.phy_counters,
          VAR_2.phys_layer_cntrs.link_down_events);

 if (!FUNC_1(VAR_11, VAR_5))
  return VAR_10;

 for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++)
  VAR_9[VAR_10++] =
   FUNC_0(&VAR_8->stats.pport.phy_statistical_counters,
         VAR_7, VAR_12);

 if (FUNC_1(VAR_11, VAR_3))
  for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++)
   VAR_9[VAR_10++] =
    FUNC_0(&VAR_8->stats.pport.phy_statistical_counters,
          VAR_6,
          VAR_12);
 return VAR_10;
}
