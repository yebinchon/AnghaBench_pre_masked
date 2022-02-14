
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_hw {struct e1000_adapter* back; } ;
struct e1000_adapter {int pdev; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct e1000_hw *VAR_0)
{
 struct e1000_adapter *VAR_1 = VAR_0->back;

 FUNC_0(VAR_1->pdev);
}
