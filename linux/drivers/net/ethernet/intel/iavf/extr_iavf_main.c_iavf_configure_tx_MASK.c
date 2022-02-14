
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iavf_hw {scalar_t__ hw_addr; } ;
struct iavf_adapter {int num_active_queues; TYPE_1__* tx_rings; struct iavf_hw hw; } ;
struct TYPE_2__ {scalar_t__ tail; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct iavf_adapter *VAR_0)
{
 struct iavf_hw *VAR_1 = &VAR_0->hw;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_active_queues; VAR_2++)
  VAR_0->tx_rings[VAR_2].tail = VAR_1->hw_addr + FUNC_0(VAR_2);
}
