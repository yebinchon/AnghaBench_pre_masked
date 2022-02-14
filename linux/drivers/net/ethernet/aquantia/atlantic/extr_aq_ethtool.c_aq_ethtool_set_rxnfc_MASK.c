
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_rxnfc {int cmd; } ;
struct aq_nic_s {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct aq_nic_s*,struct ethtool_rxnfc*) ;
 int FUNC_1 (struct aq_nic_s*,struct ethtool_rxnfc*) ;
 struct aq_nic_s* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1,
    struct ethtool_rxnfc *VAR_2)
{
 int VAR_3 = 0;
 struct aq_nic_s *VAR_4 = FUNC_2(VAR_1);

 switch (VAR_2->cmd) {
 case 128:
  VAR_3 = FUNC_0(VAR_4, VAR_2);
  break;
 case 129:
  VAR_3 = FUNC_1(VAR_4, VAR_2);
  break;
 default:
  VAR_3 = -VAR_0;
  break;
 }

 return VAR_3;
}
