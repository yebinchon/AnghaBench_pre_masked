
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; int supported; } ;
struct aq_nic_s {int dummy; } ;
struct aq_nic_cfg_s {scalar_t__ wol; } ;


 int VAR_0 ;
 struct aq_nic_cfg_s* FUNC_0 (struct aq_nic_s*) ;
 struct aq_nic_s* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1,
          struct ethtool_wolinfo *VAR_2)
{
 struct aq_nic_s *VAR_3 = FUNC_1(VAR_1);
 struct aq_nic_cfg_s *VAR_4 = FUNC_0(VAR_3);

 VAR_2->supported = VAR_0;
 VAR_2->wolopts = 0;

 if (VAR_4->wol)
  VAR_2->wolopts |= VAR_0;
}
