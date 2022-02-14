
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_hw {int dummy; } ;
struct e1000_adapter {int phy_hang_count; int reset_task; struct e1000_hw hw; } ;


 scalar_t__ FUNC_0 (struct e1000_hw*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct e1000_adapter *VAR_0)
{
 struct e1000_hw *VAR_1 = &VAR_0->hw;




 if (FUNC_0(VAR_1))
  VAR_0->phy_hang_count++;
 else
  VAR_0->phy_hang_count = 0;

 if (VAR_0->phy_hang_count > 1) {
  VAR_0->phy_hang_count = 0;
  FUNC_1("PHY appears hung - resetting\n");
  FUNC_2(&VAR_0->reset_task);
 }
}
