
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_hw {int dummy; } ;
struct igbvf_adapter {int eims_enable_mask; struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct igbvf_adapter *VAR_3)
{
 struct e1000_hw *VAR_4 = &VAR_3->hw;

 FUNC_0(VAR_0, VAR_3->eims_enable_mask);
 FUNC_0(VAR_1, VAR_3->eims_enable_mask);
 FUNC_0(VAR_2, VAR_3->eims_enable_mask);
}
