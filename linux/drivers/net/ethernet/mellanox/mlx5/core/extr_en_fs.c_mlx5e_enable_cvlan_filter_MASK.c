
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cvlan_filter_disabled; } ;
struct TYPE_5__ {TYPE_1__ vlan; } ;
struct mlx5e_priv {TYPE_3__* netdev; TYPE_2__ fs; } ;
struct TYPE_6__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5e_priv*,int ,int ) ;

void FUNC_1(struct mlx5e_priv *VAR_2)
{
 if (!VAR_2->fs.vlan.cvlan_filter_disabled)
  return;

 VAR_2->fs.vlan.cvlan_filter_disabled = 0;
 if (VAR_2->netdev->flags & VAR_0)
  return;
 FUNC_0(VAR_2, VAR_1, 0);
}
