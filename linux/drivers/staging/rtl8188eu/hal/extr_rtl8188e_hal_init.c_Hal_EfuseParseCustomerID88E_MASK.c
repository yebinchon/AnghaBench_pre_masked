
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct hal_data_8188e {scalar_t__ EEPROMCustomerID; scalar_t__ EEPROMSubCustomerID; } ;
struct adapter {struct hal_data_8188e* HalData; } ;


 int FUNC_0 (char*,scalar_t__) ;
 size_t VAR_0 ;

void FUNC_1(struct adapter *VAR_1, u8 *VAR_2, bool VAR_3)
{
 struct hal_data_8188e *VAR_4 = VAR_1->HalData;

 if (!VAR_3) {
  VAR_4->EEPROMCustomerID = VAR_2[VAR_0];
 } else {
  VAR_4->EEPROMCustomerID = 0;
  VAR_4->EEPROMSubCustomerID = 0;
 }
 FUNC_0("EEPROM Customer ID: 0x%2x\n", VAR_4->EEPROMCustomerID);
}
