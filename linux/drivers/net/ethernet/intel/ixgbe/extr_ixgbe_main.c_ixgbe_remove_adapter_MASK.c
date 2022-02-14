
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_hw {int * hw_addr; struct ixgbe_adapter* back; } ;
struct ixgbe_adapter {int state; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct ixgbe_adapter*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct ixgbe_hw *VAR_1)
{
 struct ixgbe_adapter *VAR_2 = VAR_1->back;

 if (!VAR_1->hw_addr)
  return;
 VAR_1->hw_addr = ((void*)0);
 FUNC_0("Adapter removed\n");
 if (FUNC_2(VAR_0, &VAR_2->state))
  FUNC_1(VAR_2);
}
