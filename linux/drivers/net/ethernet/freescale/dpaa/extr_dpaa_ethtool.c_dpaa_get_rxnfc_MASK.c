
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_rxnfc {int cmd; } ;


 int VAR_0 ;

 int FUNC_0 (struct net_device*,struct ethtool_rxnfc*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1, struct ethtool_rxnfc *VAR_2,
     u32 *VAR_3)
{
 int VAR_4 = -VAR_0;

 switch (VAR_2->cmd) {
 case 128:
  VAR_4 = FUNC_0(VAR_1, VAR_2);
  break;
 default:
  break;
 }

 return VAR_4;
}
