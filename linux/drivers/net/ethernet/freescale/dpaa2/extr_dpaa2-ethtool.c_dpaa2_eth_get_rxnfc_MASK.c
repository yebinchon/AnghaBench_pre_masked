
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int location; } ;
struct ethtool_rxnfc {int cmd; int data; int rule_cnt; TYPE_1__ fs; } ;
struct dpaa2_eth_priv {int rx_hash_fields; TYPE_2__* cls_rules; } ;
struct TYPE_4__ {int in_use; TYPE_1__ fs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int FUNC_0 (int,int) ;
 int FUNC_1 (struct dpaa2_eth_priv*) ;
 int FUNC_2 (struct dpaa2_eth_priv*) ;
 struct dpaa2_eth_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct dpaa2_eth_priv*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_3,
          struct ethtool_rxnfc *VAR_4, u32 *VAR_5)
{
 struct dpaa2_eth_priv *VAR_6 = FUNC_3(VAR_3);
 int VAR_7 = FUNC_1(VAR_6);
 int VAR_8, VAR_9 = 0;

 switch (VAR_4->cmd) {
 case 129:




  VAR_4->data = VAR_6->rx_hash_fields;
  break;
 case 128:
  VAR_4->data = FUNC_2(VAR_6);
  break;
 case 131:
  VAR_4->rule_cnt = 0;
  VAR_4->rule_cnt = FUNC_4(VAR_6);
  VAR_4->data = VAR_7;
  break;
 case 130:
  if (VAR_4->fs.location >= VAR_7)
   return -VAR_0;
  VAR_4->fs.location = FUNC_0(VAR_4->fs.location,
       VAR_7);
  if (!VAR_6->cls_rules[VAR_4->fs.location].in_use)
   return -VAR_0;
  VAR_4->fs = VAR_6->cls_rules[VAR_4->fs.location].fs;
  break;
 case 132:
  for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
   if (!VAR_6->cls_rules[VAR_8].in_use)
    continue;
   if (VAR_9 == VAR_4->rule_cnt)
    return -VAR_1;
   VAR_5[VAR_9++] = VAR_8;
  }
  VAR_4->rule_cnt = VAR_9;
  VAR_4->data = VAR_7;
  break;
 default:
  return -VAR_2;
 }

 return 0;
}
