
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {int dummy; } ;
struct igb_adapter {struct e1000_hw hw; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static inline int FUNC_3(struct igb_adapter *VAR_3, int VAR_4,
       int VAR_5)
{
 struct e1000_hw *VAR_6 = &VAR_3->hw;
 u32 VAR_7;

 if (VAR_4 > VAR_2)
  VAR_4 = VAR_2;

 VAR_7 = FUNC_1(FUNC_0(VAR_5));
 VAR_7 &= ~VAR_1;
 VAR_7 |= VAR_4 | VAR_0;
 FUNC_2(FUNC_0(VAR_5), VAR_7);

 return 0;
}
