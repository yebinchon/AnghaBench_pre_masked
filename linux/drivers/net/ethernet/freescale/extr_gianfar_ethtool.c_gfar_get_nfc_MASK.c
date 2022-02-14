
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int count; } ;
struct gfar_private {TYPE_1__ rx_list; int num_rx_queues; } ;
struct ethtool_rxnfc {int cmd; int rule_cnt; int data; } ;


 int VAR_0 ;




 int FUNC_0 (struct gfar_private*,struct ethtool_rxnfc*) ;
 int FUNC_1 (struct gfar_private*,struct ethtool_rxnfc*,int *) ;
 struct gfar_private* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, struct ethtool_rxnfc *VAR_2,
   u32 *VAR_3)
{
 struct gfar_private *VAR_4 = FUNC_2(VAR_1);
 int VAR_5 = 0;

 switch (VAR_2->cmd) {
 case 128:
  VAR_2->data = VAR_4->num_rx_queues;
  break;
 case 130:
  VAR_2->rule_cnt = VAR_4->rx_list.count;
  break;
 case 129:
  VAR_5 = FUNC_0(VAR_4, VAR_2);
  break;
 case 131:
  VAR_5 = FUNC_1(VAR_4, VAR_2, VAR_3);
  break;
 default:
  VAR_5 = -VAR_0;
  break;
 }

 return VAR_5;
}
