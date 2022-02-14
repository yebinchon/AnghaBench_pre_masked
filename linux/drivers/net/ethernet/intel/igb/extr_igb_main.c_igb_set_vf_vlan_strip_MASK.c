
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct igb_adapter {struct e1000_hw hw; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static inline void FUNC_4(struct igb_adapter *VAR_3,
      int VAR_4, bool VAR_5)
{
 struct e1000_hw *VAR_6 = &VAR_3->hw;
 u32 VAR_7, VAR_8;

 if (VAR_6->mac.type < VAR_1)
  return;

 if (VAR_6->mac.type == VAR_2)
  VAR_8 = FUNC_0(VAR_4);
 else
  VAR_8 = FUNC_1(VAR_4);

 VAR_7 = FUNC_2(VAR_8);
 if (VAR_5)
  VAR_7 |= VAR_0;
 else
  VAR_7 &= ~(VAR_0);
 FUNC_3(VAR_8, VAR_7);
}
