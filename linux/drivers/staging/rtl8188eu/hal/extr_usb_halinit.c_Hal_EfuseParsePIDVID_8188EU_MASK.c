
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct hal_data_8188e {void* EEPROMSubCustomerID; void* EEPROMCustomerID; void* EEPROMPID; void* EEPROMVID; } ;
struct adapter {struct hal_data_8188e* HalData; } ;
typedef int __le16 ;


 int FUNC_0 (char*,void*,void*) ;
 size_t VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct adapter *VAR_7, u8 *VAR_8, bool VAR_9)
{
 struct hal_data_8188e *VAR_10 = VAR_7->HalData;

 if (!VAR_9) {

  VAR_10->EEPROMVID = FUNC_1(*(__le16 *)&VAR_8[VAR_6]);
  VAR_10->EEPROMPID = FUNC_1(*(__le16 *)&VAR_8[VAR_5]);


  VAR_10->EEPROMCustomerID = *(u8 *)&VAR_8[VAR_0];
  VAR_10->EEPROMSubCustomerID = VAR_3;
 } else {
  VAR_10->EEPROMVID = VAR_4;
  VAR_10->EEPROMPID = VAR_2;


  VAR_10->EEPROMCustomerID = VAR_1;
  VAR_10->EEPROMSubCustomerID = VAR_3;
 }

 FUNC_0("VID = 0x%04X, PID = 0x%04X\n", VAR_10->EEPROMVID, VAR_10->EEPROMPID);
 FUNC_0("Customer ID: 0x%02X, SubCustomer ID: 0x%02X\n", VAR_10->EEPROMCustomerID, VAR_10->EEPROMSubCustomerID);
}
