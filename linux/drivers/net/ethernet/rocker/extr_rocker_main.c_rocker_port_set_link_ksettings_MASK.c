
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_port {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_link_ksettings {int dummy; } ;


 struct rocker_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct rocker_port*,struct ethtool_link_ksettings const*) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_0,
          const struct ethtool_link_ksettings *VAR_1)
{
 struct rocker_port *VAR_2 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2, VAR_1);
}
