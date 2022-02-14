
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlx5e_priv {int dummy; } ;
struct TYPE_2__ {int location; } ;
struct ethtool_rxnfc {int cmd; TYPE_1__ fs; } ;


 int VAR_0 ;



 int FUNC_0 (struct mlx5e_priv*,int ) ;
 int FUNC_1 (struct mlx5e_priv*,TYPE_1__*) ;
 int FUNC_2 (struct mlx5e_priv*,struct ethtool_rxnfc*) ;
 struct mlx5e_priv* FUNC_3 (struct net_device*) ;

int FUNC_4(struct net_device *VAR_1, struct ethtool_rxnfc *VAR_2)
{
 struct mlx5e_priv *VAR_3 = FUNC_3(VAR_1);
 int VAR_4 = 0;

 switch (VAR_2->cmd) {
 case 129:
  VAR_4 = FUNC_1(VAR_3, &VAR_2->fs);
  break;
 case 130:
  VAR_4 = FUNC_0(VAR_3, VAR_2->fs.location);
  break;
 case 128:
  VAR_4 = FUNC_2(VAR_3, VAR_2);
  break;
 default:
  VAR_4 = -VAR_0;
  break;
 }

 return VAR_4;
}
