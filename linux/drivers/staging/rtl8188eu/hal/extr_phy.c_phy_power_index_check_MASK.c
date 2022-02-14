
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct hal_data_8188e {void* CurrentBW4024GTxPwrIdx; void* CurrentBW2024GTxPwrIdx; void* CurrentOfdm24GTxPwrIdx; void* CurrentCckTxPwrIdx; } ;
struct adapter {struct hal_data_8188e* HalData; } ;



__attribute__((used)) static void FUNC_0(struct adapter *VAR_0, u8 VAR_1,
      u8 *VAR_2, u8 *VAR_3, u8 *VAR_4,
      u8 *VAR_5)
{
 struct hal_data_8188e *VAR_6 = VAR_0->HalData;

 VAR_6->CurrentCckTxPwrIdx = VAR_2[0];
 VAR_6->CurrentOfdm24GTxPwrIdx = VAR_3[0];
 VAR_6->CurrentBW2024GTxPwrIdx = VAR_4[0];
 VAR_6->CurrentBW4024GTxPwrIdx = VAR_5[0];
}
