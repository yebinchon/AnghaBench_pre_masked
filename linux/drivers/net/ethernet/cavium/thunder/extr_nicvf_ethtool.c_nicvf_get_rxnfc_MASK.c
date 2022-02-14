
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nicvf {int rx_queues; } ;
struct net_device {int dummy; } ;
struct ethtool_rxnfc {int cmd; int data; } ;


 int VAR_0 ;


 struct nicvf* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct nicvf*,struct ethtool_rxnfc*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
      struct ethtool_rxnfc *VAR_2, u32 *VAR_3)
{
 struct nicvf *VAR_4 = FUNC_0(VAR_1);
 int VAR_5 = -VAR_0;

 switch (VAR_2->cmd) {
 case 128:
  VAR_2->data = VAR_4->rx_queues;
  VAR_5 = 0;
  break;
 case 129:
  return FUNC_1(VAR_4, VAR_2);
 default:
  break;
 }
 return VAR_5;
}
