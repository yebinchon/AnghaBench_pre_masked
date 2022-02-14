
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_mvm {int dummy; } ;
struct iwl_mac_power_cmd {int flags; int keep_alive_seconds; int uapsd_max_sp; int uapsd_ac_flags; int qndp_tid; int tx_data_timeout_uapsd; int rx_data_timeout_uapsd; int lprx_rssi_threshold; int skip_dtim_periods; int tx_data_timeout; int rx_data_timeout; int id_and_color; } ;
struct TYPE_2__ {int power_scheme; } ;


 int FUNC_0 (struct iwl_mvm*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct iwl_mvm *VAR_5,
         struct iwl_mac_power_cmd *VAR_6)
{
 FUNC_0(VAR_5,
   "Sending power table command on mac id 0x%X for power level %d, flags = 0x%X\n",
   VAR_6->id_and_color, VAR_4.power_scheme,
   FUNC_2(VAR_6->flags));
 FUNC_0(VAR_5, "Keep alive = %u sec\n",
   FUNC_2(VAR_6->keep_alive_seconds));

 if (!(VAR_6->flags & FUNC_1(VAR_2))) {
  FUNC_0(VAR_5, "Disable power management\n");
  return;
 }

 FUNC_0(VAR_5, "Rx timeout = %u usec\n",
   FUNC_3(VAR_6->rx_data_timeout));
 FUNC_0(VAR_5, "Tx timeout = %u usec\n",
   FUNC_3(VAR_6->tx_data_timeout));
 if (VAR_6->flags & FUNC_1(VAR_3))
  FUNC_0(VAR_5, "DTIM periods to skip = %u\n",
    VAR_6->skip_dtim_periods);
 if (VAR_6->flags & FUNC_1(VAR_1))
  FUNC_0(VAR_5, "LP RX RSSI threshold = %u\n",
    VAR_6->lprx_rssi_threshold);
 if (VAR_6->flags & FUNC_1(VAR_0)) {
  FUNC_0(VAR_5, "uAPSD enabled\n");
  FUNC_0(VAR_5, "Rx timeout (uAPSD) = %u usec\n",
    FUNC_3(VAR_6->rx_data_timeout_uapsd));
  FUNC_0(VAR_5, "Tx timeout (uAPSD) = %u usec\n",
    FUNC_3(VAR_6->tx_data_timeout_uapsd));
  FUNC_0(VAR_5, "QNDP TID = %d\n", VAR_6->qndp_tid);
  FUNC_0(VAR_5, "ACs flags = 0x%x\n", VAR_6->uapsd_ac_flags);
  FUNC_0(VAR_5, "Max SP = %d\n", VAR_6->uapsd_max_sp);
 }
}
