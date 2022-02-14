
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hal_data_8188e {int BoardType; } ;
struct adapter {struct hal_data_8188e* HalData; } ;


 int FUNC_0 (char*,int) ;
 size_t VAR_0 ;

void FUNC_1(struct adapter *VAR_1, u8 *VAR_2, bool VAR_3)
{
 struct hal_data_8188e *VAR_4 = VAR_1->HalData;

 if (!VAR_3)
  VAR_4->BoardType = (VAR_2[VAR_0]
     & 0xE0) >> 5;
 else
  VAR_4->BoardType = 0;
 FUNC_0("Board Type: 0x%2x\n", VAR_4->BoardType);
}
