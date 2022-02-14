
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
 int FUNC_0 (struct aq_nic_s*) ;
 struct aq_nic_s* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, __be16 VAR_2,
      u16 VAR_3)
{
 struct aq_nic_s *VAR_4 = FUNC_1(VAR_1);

 if (!VAR_4->aq_hw_ops->hw_filter_vlan_set)
  return -VAR_0;

 FUNC_2(VAR_3, VAR_4->active_vlans);

 return FUNC_0(VAR_4);
}
