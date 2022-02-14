
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlx5e_priv {TYPE_1__* mdev; } ;
struct ethtool_drvinfo {int bus_info; } ;
struct TYPE_2__ {int pdev; } ;


 int FUNC_0 (struct net_device*,struct ethtool_drvinfo*) ;
 struct mlx5e_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0,
      struct ethtool_drvinfo *VAR_1)
{
 struct mlx5e_priv *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_0, VAR_1);
 FUNC_3(VAR_1->bus_info, FUNC_2(VAR_2->mdev->pdev),
  sizeof(VAR_1->bus_info));
}
