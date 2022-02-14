
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct igc_hw {int dummy; } ;
struct igc_adapter {struct igc_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct igc_adapter *VAR_2)
{
 struct igc_hw *VAR_3 = &VAR_2->hw;
 u32 VAR_4;


 VAR_4 = FUNC_0(VAR_0);
 FUNC_1(VAR_0,
      VAR_4 | VAR_1);
}
