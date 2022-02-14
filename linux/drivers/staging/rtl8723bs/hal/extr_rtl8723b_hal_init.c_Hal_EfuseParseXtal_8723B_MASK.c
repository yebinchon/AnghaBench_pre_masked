
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hal_com_data {int CrystalCap; } ;
struct adapter {int dummy; } ;


 void* VAR_0 ;
 size_t VAR_1 ;
 struct hal_com_data* FUNC_0 (struct adapter*) ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_2(
 struct adapter *VAR_4, u8 *VAR_5, bool VAR_6
)
{
 struct hal_com_data *VAR_7 = FUNC_0(VAR_4);


 if (!VAR_6) {
  VAR_7->CrystalCap = VAR_5[VAR_1];
  if (VAR_7->CrystalCap == 0xFF)
   VAR_7->CrystalCap = VAR_0;
 } else
  VAR_7->CrystalCap = VAR_0;

 FUNC_1(VAR_3, VAR_2, ("EEPROM CrystalCap: 0x%2x\n", VAR_7->CrystalCap));
}
