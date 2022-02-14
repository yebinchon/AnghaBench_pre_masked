
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nicvf {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_rxnfc {int cmd; } ;


 int VAR_0 ;

 struct nicvf* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct nicvf*,struct ethtool_rxnfc*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, struct ethtool_rxnfc *VAR_2)
{
 struct nicvf *VAR_3 = FUNC_0(VAR_1);

 switch (VAR_2->cmd) {
 case 128:
  return FUNC_1(VAR_3, VAR_2);
 default:
  break;
 }
 return -VAR_0;
}
