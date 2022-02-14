
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_link_ksettings {int dummy; } ;


 int VAR_0 ;
 struct qlcnic_adapter* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_adapter*,struct ethtool_link_ksettings*) ;
 scalar_t__ FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (struct qlcnic_adapter*,struct ethtool_link_ksettings*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1,
         struct ethtool_link_ksettings *VAR_2)
{
 struct qlcnic_adapter *VAR_3 = FUNC_0(VAR_1);

 if (FUNC_1(VAR_3))
  return FUNC_2(VAR_3, VAR_2);
 else if (FUNC_3(VAR_3))
  return FUNC_4(VAR_3, VAR_2);

 return -VAR_0;
}
