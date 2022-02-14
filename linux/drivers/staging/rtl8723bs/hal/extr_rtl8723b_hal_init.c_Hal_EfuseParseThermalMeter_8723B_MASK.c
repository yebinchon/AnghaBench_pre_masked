
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hal_com_data {int EEPROMThermalMeter; int bAPKThermalMeterIgnore; } ;
struct adapter {int dummy; } ;


 void* VAR_0 ;
 size_t VAR_1 ;
 struct hal_com_data* FUNC_0 (struct adapter*) ;
 int FUNC_1 (int ,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_2(
 struct adapter *VAR_4, u8 *VAR_5, u8 VAR_6
)
{
 struct hal_com_data *VAR_7 = FUNC_0(VAR_4);





 if (!VAR_6)
  VAR_7->EEPROMThermalMeter = VAR_5[VAR_1];
 else
  VAR_7->EEPROMThermalMeter = VAR_0;

 if ((VAR_7->EEPROMThermalMeter == 0xff) || VAR_6) {
  VAR_7->bAPKThermalMeterIgnore = 1;
  VAR_7->EEPROMThermalMeter = VAR_0;
 }

 FUNC_1(VAR_3, VAR_2, ("EEPROM ThermalMeter = 0x%x\n", VAR_7->EEPROMThermalMeter));
}
