
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mvpp2_port {struct mvpp2_ethtool_fs** rfs_rules; } ;
struct mvpp2_ethtool_fs {int rxnfc; } ;
struct TYPE_2__ {size_t location; } ;
struct ethtool_rxnfc {TYPE_1__ fs; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct ethtool_rxnfc*,int *,int) ;

int FUNC_1(struct mvpp2_port *VAR_3,
          struct ethtool_rxnfc *VAR_4)
{
 struct mvpp2_ethtool_fs *VAR_5;

 if (VAR_4->fs.location >= VAR_2)
  return -VAR_0;

 VAR_5 = VAR_3->rfs_rules[VAR_4->fs.location];
 if (!VAR_5)
  return -VAR_1;

 FUNC_0(VAR_4, &VAR_5->rxnfc, sizeof(VAR_5->rxnfc));

 return 0;
}
