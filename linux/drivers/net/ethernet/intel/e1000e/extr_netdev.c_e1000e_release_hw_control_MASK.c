
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {int dummy; } ;
struct e1000_adapter {int flags; struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

void FUNC_2(struct e1000_adapter *VAR_6)
{
 struct e1000_hw *VAR_7 = &VAR_6->hw;
 u32 VAR_8;
 u32 VAR_9;


 if (VAR_6->flags & VAR_4) {
  VAR_9 = FUNC_0(VAR_5);
  FUNC_1(VAR_5, VAR_9 & ~VAR_2);
 } else if (VAR_6->flags & VAR_3) {
  VAR_8 = FUNC_0(VAR_0);
  FUNC_1(VAR_0, VAR_8 & ~VAR_1);
 }
}
