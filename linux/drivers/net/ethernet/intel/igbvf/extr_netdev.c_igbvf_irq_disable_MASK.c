
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_hw {int dummy; } ;
struct igbvf_adapter {scalar_t__ msix_entries; struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct igbvf_adapter *VAR_2)
{
 struct e1000_hw *VAR_3 = &VAR_2->hw;

 FUNC_0(VAR_1, ~0);

 if (VAR_2->msix_entries)
  FUNC_0(VAR_0, 0);
}
