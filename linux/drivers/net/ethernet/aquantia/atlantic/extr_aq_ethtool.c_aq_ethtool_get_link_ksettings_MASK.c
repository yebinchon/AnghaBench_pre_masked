
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {unsigned int speed; } ;
struct ethtool_link_ksettings {TYPE_1__ base; } ;
struct aq_nic_s {int dummy; } ;


 int FUNC_0 (struct aq_nic_s*,struct ethtool_link_ksettings*) ;
 unsigned int FUNC_1 (struct aq_nic_s*) ;
 struct aq_nic_s* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0,
      struct ethtool_link_ksettings *VAR_1)
{
 struct aq_nic_s *VAR_2 = FUNC_2(VAR_0);

 FUNC_0(VAR_2, VAR_1);
 VAR_1->base.speed = FUNC_3(VAR_0) ?
    FUNC_1(VAR_2) : 0U;

 return 0;
}
