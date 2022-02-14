
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ixgbevf_adapter {int state; TYPE_1__* pdev; } ;
struct ixgbe_hw {int * hw_addr; struct ixgbevf_adapter* back; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct ixgbevf_adapter*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct ixgbe_hw *VAR_1)
{
 struct ixgbevf_adapter *VAR_2 = VAR_1->back;

 if (!VAR_1->hw_addr)
  return;
 VAR_1->hw_addr = ((void*)0);
 FUNC_0(&VAR_2->pdev->dev, "Adapter removed\n");
 if (FUNC_2(VAR_0, &VAR_2->state))
  FUNC_1(VAR_2);
}
