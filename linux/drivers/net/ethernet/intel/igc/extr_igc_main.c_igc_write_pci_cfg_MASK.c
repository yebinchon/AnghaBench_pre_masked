
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct igc_hw {struct igc_adapter* back; } ;
struct igc_adapter {int pdev; } ;


 int FUNC_0 (int ,int ,int ) ;

void FUNC_1(struct igc_hw *VAR_0, u32 VAR_1, u16 *VAR_2)
{
 struct igc_adapter *VAR_3 = VAR_0->back;

 FUNC_0(VAR_3->pdev, VAR_1, *VAR_2);
}
