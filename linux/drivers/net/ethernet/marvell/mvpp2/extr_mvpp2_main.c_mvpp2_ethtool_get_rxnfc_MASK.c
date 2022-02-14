
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct mvpp2_port {int * rfs_rules; int n_rfs_rules; int nrxqs; } ;
struct ethtool_rxnfc {int cmd; int rule_cnt; int data; } ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (struct mvpp2_port*,struct ethtool_rxnfc*) ;
 int FUNC_2 (struct mvpp2_port*,struct ethtool_rxnfc*) ;
 struct mvpp2_port* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3,
       struct ethtool_rxnfc *VAR_4, u32 *VAR_5)
{
 struct mvpp2_port *VAR_6 = FUNC_3(VAR_3);
 int VAR_7 = 0, VAR_8, VAR_9 = 0;

 if (!FUNC_0())
  return -VAR_1;

 switch (VAR_4->cmd) {
 case 129:
  VAR_7 = FUNC_2(VAR_6, VAR_4);
  break;
 case 128:
  VAR_4->data = VAR_6->nrxqs;
  break;
 case 131:
  VAR_4->rule_cnt = VAR_6->n_rfs_rules;
  break;
 case 130:
  VAR_7 = FUNC_1(VAR_6, VAR_4);
  break;
 case 132:
  for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
   if (VAR_6->rfs_rules[VAR_8])
    VAR_5[VAR_9++] = VAR_8;
  }
  break;
 default:
  return -VAR_0;
 }

 return VAR_7;
}
