
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct hal_com_data {scalar_t__ EEPROMCustomerID; } ;
struct adapter {int dummy; } ;


 size_t VAR_0 ;
 struct hal_com_data* FUNC_0 (struct adapter*) ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_2(
 struct adapter *VAR_3, u8 *VAR_4, bool VAR_5
)
{
 struct hal_com_data *VAR_6 = FUNC_0(VAR_3);


 if (!VAR_5)
  VAR_6->EEPROMCustomerID = VAR_4[VAR_0];
 else
  VAR_6->EEPROMCustomerID = 0;

 FUNC_1(VAR_2, VAR_1, ("EEPROM Customer ID: 0x%2x\n", VAR_6->EEPROMCustomerID));
}
