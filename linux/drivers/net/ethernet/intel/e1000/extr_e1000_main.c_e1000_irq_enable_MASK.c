
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_hw {int dummy; } ;
struct e1000_adapter {struct e1000_hw hw; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct e1000_adapter *VAR_2)
{
 struct e1000_hw *VAR_3 = &VAR_2->hw;

 FUNC_1(VAR_0, VAR_1);
 FUNC_0();
}
