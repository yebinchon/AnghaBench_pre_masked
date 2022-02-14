
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dummy; } ;
struct TYPE_5__ {scalar_t__ (* set_vfta ) (struct e1000_hw*,int ,int) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct e1000_hw {int mbx_lock; TYPE_3__ mac; } ;
struct igbvf_adapter {int active_vlans; TYPE_1__* pdev; struct e1000_hw hw; } ;
typedef int __be16 ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 struct igbvf_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1,
      __be16 VAR_2, u16 VAR_3)
{
 struct igbvf_adapter *VAR_4 = FUNC_2(VAR_1);
 struct e1000_hw *VAR_5 = &VAR_4->hw;

 FUNC_3(&VAR_5->mbx_lock);

 if (VAR_5->mac.ops.set_vfta(VAR_5, VAR_3, 0)) {
  FUNC_1(&VAR_4->pdev->dev,
   "Failed to remove vlan id %d\n", VAR_3);
  FUNC_4(&VAR_5->mbx_lock);
  return -VAR_0;
 }

 FUNC_4(&VAR_5->mbx_lock);

 FUNC_0(VAR_3, VAR_4->active_vlans);
 return 0;
}
