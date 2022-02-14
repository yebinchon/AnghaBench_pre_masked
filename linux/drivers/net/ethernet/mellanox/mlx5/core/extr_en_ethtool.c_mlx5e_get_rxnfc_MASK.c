
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int num_channels; } ;
struct TYPE_4__ {TYPE_1__ params; } ;
struct mlx5e_priv {TYPE_2__ channels; } ;
struct ethtool_rxnfc {scalar_t__ cmd; int data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct net_device*,struct ethtool_rxnfc*,int *) ;
 struct mlx5e_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, struct ethtool_rxnfc *VAR_2, u32 *VAR_3)
{
 struct mlx5e_priv *VAR_4 = FUNC_1(VAR_1);






 if (VAR_2->cmd == VAR_0) {
  VAR_2->data = VAR_4->channels.params.num_channels;
  return 0;
 }

 return FUNC_0(VAR_1, VAR_2, VAR_3);
}
