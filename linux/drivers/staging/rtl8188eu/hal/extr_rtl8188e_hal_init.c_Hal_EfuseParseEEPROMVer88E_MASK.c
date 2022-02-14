
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hal_data_8188e {int EEPROMVersion; } ;
struct adapter {struct hal_data_8188e* HalData; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_1(struct adapter *VAR_4, u8 *VAR_5, bool VAR_6)
{
 struct hal_data_8188e *VAR_7 = VAR_4->HalData;

 if (!VAR_6) {
  VAR_7->EEPROMVersion = VAR_5[VAR_1];
  if (VAR_7->EEPROMVersion == 0xFF)
   VAR_7->EEPROMVersion = VAR_0;
 } else {
  VAR_7->EEPROMVersion = 1;
 }
 FUNC_0(VAR_3, VAR_2,
   ("Hal_EfuseParseEEPROMVer(), EEVer = %d\n",
   VAR_7->EEPROMVersion));
}
