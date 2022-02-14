
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_link_ksettings {int dummy; } ;
struct aq_nic_s {int dummy; } ;


 int FUNC_0 (struct aq_nic_s*,struct ethtool_link_ksettings const*) ;
 struct aq_nic_s* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_0,
         const struct ethtool_link_ksettings *VAR_1)
{
 struct aq_nic_s *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2, VAR_1);
}
