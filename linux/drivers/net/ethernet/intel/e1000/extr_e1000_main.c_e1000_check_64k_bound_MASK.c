
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_hw {scalar_t__ mac_type; } ;
struct e1000_adapter {struct e1000_hw hw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static bool FUNC_0(struct e1000_adapter *VAR_3, void *VAR_4,
      unsigned long VAR_5)
{
 struct e1000_hw *VAR_6 = &VAR_3->hw;
 unsigned long VAR_7 = (unsigned long)VAR_4;
 unsigned long VAR_8 = VAR_7 + VAR_5;




 if (VAR_6->mac_type == VAR_0 ||
     VAR_6->mac_type == VAR_2 ||
     VAR_6->mac_type == VAR_1) {
  return ((VAR_7 ^ (VAR_8 - 1)) >> 16) != 0 ? 0 : 1;
 }

 return 1;
}
