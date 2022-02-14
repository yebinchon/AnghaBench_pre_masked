
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dummy; } ;
struct aq_nic_s {int active_vlans; TYPE_1__* aq_hw_ops; } ;
typedef int __be16 ;
struct TYPE_2__ {int hw_filter_vlan_set; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct aq_nic_s*,int ) ;
 int FUNC_1 (struct aq_nic_s*) ;
 int FUNC_2 (int ,int ) ;
 struct aq_nic_s* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2, __be16 VAR_3,
       u16 VAR_4)
{
 struct aq_nic_s *VAR_5 = FUNC_3(VAR_2);

 if (!VAR_5->aq_hw_ops->hw_filter_vlan_set)
  return -VAR_1;

 FUNC_2(VAR_4, VAR_5->active_vlans);

 if (-VAR_0 == FUNC_0(VAR_5, VAR_4))
  return FUNC_1(VAR_5);

 return 0;
}
