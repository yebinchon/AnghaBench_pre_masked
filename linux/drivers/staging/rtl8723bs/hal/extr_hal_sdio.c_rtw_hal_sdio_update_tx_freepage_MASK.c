
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct hal_com_data {size_t* SdioTxFIFOFreePage; } ;
struct adapter {int dummy; } ;


 struct hal_com_data* FUNC_0 (struct adapter*) ;
 size_t VAR_0 ;

void FUNC_1(
 struct adapter *VAR_1, u8 VAR_2, u8 VAR_3
)
{
 struct hal_com_data *VAR_4 = FUNC_0(VAR_1);
 u8 VAR_5 = 0;
 u8 VAR_6 = 0;




 VAR_5 = VAR_4->SdioTxFIFOFreePage[VAR_2];
 if (VAR_3 <= VAR_5) {
  VAR_4->SdioTxFIFOFreePage[VAR_2] -= VAR_3;
 } else {
  VAR_4->SdioTxFIFOFreePage[VAR_2] = 0;
  VAR_6 = VAR_3 - VAR_5;
  VAR_4->SdioTxFIFOFreePage[VAR_0] -= VAR_6;
 }


}
