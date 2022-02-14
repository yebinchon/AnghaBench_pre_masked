
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_context {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_rxnfc {scalar_t__ cmd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct net_device_context* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device_context*,struct ethtool_rxnfc*) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_2, struct ethtool_rxnfc *VAR_3)
{
 struct net_device_context *VAR_4 = FUNC_0(VAR_2);

 if (VAR_3->cmd == VAR_1)
  return FUNC_1(VAR_4, VAR_3);

 return -VAR_0;
}
