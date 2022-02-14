
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_pauseparam {int dummy; } ;
struct axienet_local {int phylink; } ;


 struct axienet_local* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,struct ethtool_pauseparam*) ;

__attribute__((used)) static void
FUNC_2(struct net_device *VAR_0,
    struct ethtool_pauseparam *VAR_1)
{
 struct axienet_local *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(VAR_2->phylink, VAR_1);
}
