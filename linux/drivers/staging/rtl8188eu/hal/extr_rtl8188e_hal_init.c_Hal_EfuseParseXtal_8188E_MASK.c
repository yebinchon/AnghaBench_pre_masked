
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hal_data_8188e {int CrystalCap; } ;
struct adapter {struct hal_data_8188e* HalData; } ;


 int FUNC_0 (char*,int) ;
 void* VAR_0 ;
 size_t VAR_1 ;

void FUNC_1(struct adapter *VAR_2, u8 *VAR_3, bool VAR_4)
{
 struct hal_data_8188e *VAR_5 = VAR_2->HalData;

 if (!VAR_4) {
  VAR_5->CrystalCap = VAR_3[VAR_1];
  if (VAR_5->CrystalCap == 0xFF)
   VAR_5->CrystalCap = VAR_0;
 } else {
  VAR_5->CrystalCap = VAR_0;
 }
 FUNC_0("CrystalCap: 0x%2x\n", VAR_5->CrystalCap);
}
