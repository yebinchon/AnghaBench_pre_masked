
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tot_num_rules; } ;
struct TYPE_4__ {TYPE_1__ ethtool; } ;
struct mlx5e_priv {TYPE_2__ fs; } ;
struct mlx5e_ethtool_rule {int eth_ft; int list; scalar_t__ rule; } ;


 int FUNC_0 (struct mlx5e_ethtool_rule*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct mlx5e_priv *VAR_0,
        struct mlx5e_ethtool_rule *VAR_1)
{
 if (VAR_1->rule)
  FUNC_2(VAR_1->rule);
 FUNC_1(&VAR_1->list);
 VAR_0->fs.ethtool.tot_num_rules--;
 FUNC_3(VAR_1->eth_ft);
 FUNC_0(VAR_1);
}
