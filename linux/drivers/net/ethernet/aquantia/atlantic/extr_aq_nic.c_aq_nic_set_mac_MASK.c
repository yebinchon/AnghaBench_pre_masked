
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dev_addr; } ;
struct aq_nic_s {int aq_hw; TYPE_1__* aq_hw_ops; } ;
struct TYPE_2__ {int (* hw_set_mac_address ) (int ,int ) ;} ;


 int FUNC_0 (int ,int ) ;

int FUNC_1(struct aq_nic_s *VAR_0, struct net_device *VAR_1)
{
 return VAR_0->aq_hw_ops->hw_set_mac_address(VAR_0->aq_hw, VAR_1->dev_addr);
}
