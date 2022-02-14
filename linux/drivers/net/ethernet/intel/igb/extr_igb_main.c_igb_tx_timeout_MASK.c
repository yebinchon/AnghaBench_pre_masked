
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_5__ {int global_device_reset; } ;
struct TYPE_6__ {TYPE_2__ _82575; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_3__ dev_spec; TYPE_1__ mac; } ;
struct igb_adapter {int eims_enable_mask; int eims_other; int reset_task; int tx_timeout_count; struct e1000_hw hw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct igb_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2)
{
 struct igb_adapter *VAR_3 = FUNC_0(VAR_2);
 struct e1000_hw *VAR_4 = &VAR_3->hw;


 VAR_3->tx_timeout_count++;

 if (VAR_4->mac.type >= VAR_1)
  VAR_4->dev_spec._82575.global_device_reset = 1;

 FUNC_1(&VAR_3->reset_task);
 FUNC_2(VAR_0,
      (VAR_3->eims_enable_mask & ~VAR_3->eims_other));
}
