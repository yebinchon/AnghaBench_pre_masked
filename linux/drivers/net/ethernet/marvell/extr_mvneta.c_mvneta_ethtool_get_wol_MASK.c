
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mvneta_port {int phylink; } ;
struct ethtool_wolinfo {int dummy; } ;


 struct mvneta_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,struct ethtool_wolinfo*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0,
       struct ethtool_wolinfo *VAR_1)
{
 struct mvneta_port *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(VAR_2->phylink, VAR_1);
}
