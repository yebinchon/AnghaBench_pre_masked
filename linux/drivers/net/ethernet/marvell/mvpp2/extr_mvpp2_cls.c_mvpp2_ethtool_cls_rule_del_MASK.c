
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mvpp2_port {struct mvpp2_ethtool_fs** rfs_rules; int n_rfs_rules; } ;
struct mvpp2_ethtool_fs {int rule; } ;
struct TYPE_2__ {size_t location; } ;
struct ethtool_rxnfc {TYPE_1__ fs; } ;


 int VAR_0 ;
 int FUNC_0 (struct mvpp2_ethtool_fs*) ;
 int FUNC_1 (struct mvpp2_port*,int *) ;

int FUNC_2(struct mvpp2_port *VAR_1,
          struct ethtool_rxnfc *VAR_2)
{
 struct mvpp2_ethtool_fs *VAR_3;
 int VAR_4;

 VAR_3 = VAR_1->rfs_rules[VAR_2->fs.location];
 if (!VAR_3)
  return -VAR_0;


 VAR_4 = FUNC_1(VAR_1, &VAR_3->rule);
 if (VAR_4)
  return VAR_4;

 VAR_1->n_rfs_rules--;
 VAR_1->rfs_rules[VAR_2->fs.location] = ((void*)0);
 FUNC_0(VAR_3);

 return 0;
}
