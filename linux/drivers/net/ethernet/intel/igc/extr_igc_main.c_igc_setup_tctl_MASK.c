
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct igc_hw {int dummy; } ;
struct igc_adapter {struct igc_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct igc_adapter *VAR_7)
{
 struct igc_hw *VAR_8 = &VAR_7->hw;
 u32 VAR_9;


 FUNC_2(FUNC_0(0), 0);


 VAR_9 = FUNC_1(VAR_2);
 VAR_9 &= ~VAR_3;
 VAR_9 |= VAR_5 | VAR_6 |
  (VAR_0 << VAR_1);


 VAR_9 |= VAR_4;

 FUNC_2(VAR_2, VAR_9);
}
