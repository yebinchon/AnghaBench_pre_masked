
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_mvm_thermal_device {int * fw_trips_index; scalar_t__ tzone; } ;
struct iwl_mvm {struct iwl_mvm_thermal_device tz_device; int status; } ;
struct iwl_dts_measurement_notif_v2 {int threshold_idx; } ;


 int FUNC_0 (struct iwl_mvm*,char*,int,int) ;
 int FUNC_1 (struct iwl_mvm*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct iwl_mvm*) ;
 int FUNC_5 (struct iwl_mvm*,struct iwl_rx_packet*) ;
 int FUNC_6 (struct iwl_mvm*,int) ;
 int FUNC_7 (struct iwl_rx_packet*) ;
 int FUNC_8 (int ) ;
 struct iwl_rx_packet* FUNC_9 (struct iwl_rx_cmd_buffer*) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 int FUNC_11 (scalar_t__,int ) ;

void FUNC_12(struct iwl_mvm *VAR_2, struct iwl_rx_cmd_buffer *VAR_3)
{
 struct iwl_rx_packet *VAR_4 = FUNC_9(VAR_3);
 struct iwl_dts_measurement_notif_v2 *VAR_5;
 int VAR_6 = FUNC_7(VAR_4);
 int VAR_7;
 u32 VAR_8;


 if (FUNC_10(VAR_1, &VAR_2->status))
  return;

 VAR_7 = FUNC_5(VAR_2, VAR_4);

 if (!FUNC_4(VAR_2)) {
  if (VAR_7 >= 0)
   FUNC_6(VAR_2, VAR_7);
  return;
 }

 if (FUNC_3(VAR_6 < sizeof(*VAR_5))) {
  FUNC_1(VAR_2, "Invalid DTS_MEASUREMENT_NOTIFICATION\n");
  return;
 }

 VAR_5 = (void *)VAR_4->data;
 VAR_8 = FUNC_8(VAR_5->threshold_idx);




 if (VAR_8 == 0xFF)
  return;

 FUNC_0(VAR_2, "Temp = %d Threshold crossed = %d\n",
         VAR_7, VAR_8);
}
