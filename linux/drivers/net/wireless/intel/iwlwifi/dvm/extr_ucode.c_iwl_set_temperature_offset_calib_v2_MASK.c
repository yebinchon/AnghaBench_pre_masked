
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_priv {TYPE_1__* nvm_data; } ;
struct iwl_calib_temperature_offset_v2_cmd {void* burntVoltageRef; void* radio_sensor_offset_low; void* radio_sensor_offset_high; int hdr; } ;
typedef int cmd ;
struct TYPE_2__ {void* calib_voltage; void* raw_temperature; void* kelvin_temperature; } ;


 void* VAR_0 ;
 int FUNC_0 (struct iwl_priv*,char*,...) ;
 int VAR_1 ;
 int FUNC_1 (struct iwl_priv*,void*,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct iwl_calib_temperature_offset_v2_cmd*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct iwl_priv *VAR_2)
{
 struct iwl_calib_temperature_offset_v2_cmd VAR_3;

 FUNC_4(&VAR_3, 0, sizeof(VAR_3));
 FUNC_2(&VAR_3.hdr, VAR_1);
 VAR_3.radio_sensor_offset_high = VAR_2->nvm_data->kelvin_temperature;
 VAR_3.radio_sensor_offset_low = VAR_2->nvm_data->raw_temperature;
 if (!VAR_3.radio_sensor_offset_low) {
  FUNC_0(VAR_2, "no info in EEPROM, use default\n");
  VAR_3.radio_sensor_offset_low = VAR_0;
  VAR_3.radio_sensor_offset_high = VAR_0;
 }
 VAR_3.burntVoltageRef = VAR_2->nvm_data->calib_voltage;

 FUNC_0(VAR_2, "Radio sensor offset high: %d\n",
   FUNC_3(VAR_3.radio_sensor_offset_high));
 FUNC_0(VAR_2, "Radio sensor offset low: %d\n",
   FUNC_3(VAR_3.radio_sensor_offset_low));
 FUNC_0(VAR_2, "Voltage Ref: %d\n",
   FUNC_3(VAR_3.burntVoltageRef));

 return FUNC_1(VAR_2, (void *)&VAR_3, sizeof(VAR_3));
}
