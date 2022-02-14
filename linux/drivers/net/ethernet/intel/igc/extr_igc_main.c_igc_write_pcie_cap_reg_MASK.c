
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct igc_hw {struct igc_adapter* back; } ;
struct igc_adapter {int pdev; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;

s32 FUNC_2(struct igc_hw *VAR_2, u32 VAR_3, u16 *VAR_4)
{
 struct igc_adapter *VAR_5 = VAR_2->back;

 if (!FUNC_0(VAR_5->pdev))
  return -VAR_0;

 FUNC_1(VAR_5->pdev, VAR_3, *VAR_4);

 return VAR_1;
}
