
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ixgbe_adapter {int fdir_filter_count; int num_rx_queues; } ;
struct ethtool_rxnfc {int cmd; int rule_cnt; int data; } ;


 int VAR_0 ;





 int FUNC_0 (struct ixgbe_adapter*,struct ethtool_rxnfc*,int *) ;
 int FUNC_1 (struct ixgbe_adapter*,struct ethtool_rxnfc*) ;
 int FUNC_2 (struct ixgbe_adapter*,struct ethtool_rxnfc*) ;
 struct ixgbe_adapter* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1, struct ethtool_rxnfc *VAR_2,
      u32 *VAR_3)
{
 struct ixgbe_adapter *VAR_4 = FUNC_3(VAR_1);
 int VAR_5 = -VAR_0;

 switch (VAR_2->cmd) {
 case 128:
  VAR_2->data = VAR_4->num_rx_queues;
  VAR_5 = 0;
  break;
 case 131:
  VAR_2->rule_cnt = VAR_4->fdir_filter_count;
  VAR_5 = 0;
  break;
 case 130:
  VAR_5 = FUNC_1(VAR_4, VAR_2);
  break;
 case 132:
  VAR_5 = FUNC_0(VAR_4, VAR_2, VAR_3);
  break;
 case 129:
  VAR_5 = FUNC_2(VAR_4, VAR_2);
  break;
 default:
  break;
 }

 return VAR_5;
}
