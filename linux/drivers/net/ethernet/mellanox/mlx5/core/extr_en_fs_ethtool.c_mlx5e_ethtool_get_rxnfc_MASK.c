
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int tot_num_rules; } ;
struct TYPE_5__ {TYPE_1__ ethtool; } ;
struct mlx5e_priv {TYPE_2__ fs; } ;
struct TYPE_6__ {int location; } ;
struct ethtool_rxnfc {int cmd; TYPE_3__ fs; int rule_cnt; } ;


 int VAR_0 ;




 int FUNC_0 (struct mlx5e_priv*,struct ethtool_rxnfc*,int *) ;
 int FUNC_1 (struct mlx5e_priv*,struct ethtool_rxnfc*,int ) ;
 int FUNC_2 (struct mlx5e_priv*,struct ethtool_rxnfc*) ;
 struct mlx5e_priv* FUNC_3 (struct net_device*) ;

int FUNC_4(struct net_device *VAR_1,
       struct ethtool_rxnfc *VAR_2, u32 *VAR_3)
{
 struct mlx5e_priv *VAR_4 = FUNC_3(VAR_1);
 int VAR_5 = 0;

 switch (VAR_2->cmd) {
 case 130:
  VAR_2->rule_cnt = VAR_4->fs.ethtool.tot_num_rules;
  break;
 case 129:
  VAR_5 = FUNC_1(VAR_4, VAR_2, VAR_2->fs.location);
  break;
 case 131:
  VAR_5 = FUNC_0(VAR_4, VAR_2, VAR_3);
  break;
 case 128:
  VAR_5 = FUNC_2(VAR_4, VAR_2);
  break;
 default:
  VAR_5 = -VAR_0;
  break;
 }

 return VAR_5;
}
