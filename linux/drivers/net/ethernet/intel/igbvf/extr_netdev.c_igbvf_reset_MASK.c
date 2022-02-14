
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int addr_len; int perm_addr; int dev_addr; } ;
struct TYPE_4__ {int (* init_hw ) (struct e1000_hw*) ;scalar_t__ (* reset_hw ) (struct e1000_hw*) ;} ;
struct e1000_mac_info {int addr; TYPE_2__ ops; } ;
struct e1000_hw {struct e1000_mac_info mac; int mbx_lock; } ;
struct igbvf_adapter {int last_reset; struct e1000_hw hw; TYPE_1__* pdev; struct net_device* netdev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct e1000_hw*) ;
 int FUNC_6 (struct e1000_hw*) ;

__attribute__((used)) static void FUNC_7(struct igbvf_adapter *VAR_1)
{
 struct e1000_mac_info *VAR_2 = &VAR_1->hw.mac;
 struct net_device *VAR_3 = VAR_1->netdev;
 struct e1000_hw *VAR_4 = &VAR_1->hw;

 FUNC_3(&VAR_4->mbx_lock);


 if (VAR_2->ops.reset_hw(VAR_4))
  FUNC_0(&VAR_1->pdev->dev, "PF still resetting\n");

 VAR_2->ops.init_hw(VAR_4);

 FUNC_4(&VAR_4->mbx_lock);

 if (FUNC_1(VAR_1->hw.mac.addr)) {
  FUNC_2(VAR_3->dev_addr, VAR_1->hw.mac.addr,
         VAR_3->addr_len);
  FUNC_2(VAR_3->perm_addr, VAR_1->hw.mac.addr,
         VAR_3->addr_len);
 }

 VAR_1->last_reset = VAR_0;
}
