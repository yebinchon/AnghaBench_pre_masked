
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_5__ {scalar_t__ erp_flags; scalar_t__ beacon_period; int mac_address; } ;
struct TYPE_6__ {TYPE_2__ bss_descriptor; } ;
struct mwifiex_private {int adhoc_state; TYPE_3__ curr_bss_params; int adapter; } ;
struct host_cmd_ds_802_11_ibss_status {int use_g_rate_protect; int beacon_interval; int bssid; int action; } ;
struct TYPE_4__ {struct host_cmd_ds_802_11_ibss_status ibss_coalescing; } ;
struct host_cmd_ds_command {TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,char*,...) ;

__attribute__((used)) static int FUNC_5(struct mwifiex_private *VAR_5,
           struct host_cmd_ds_command *VAR_6)
{
 struct host_cmd_ds_802_11_ibss_status *VAR_7 =
     &(VAR_6->params.ibss_coalescing);

 if (FUNC_2(VAR_7->action) == VAR_3)
  return 0;

 FUNC_4(VAR_5->adapter, VAR_4,
      "info: new BSSID %pM\n", VAR_7->bssid);


 if (FUNC_1(VAR_7->bssid)) {
  FUNC_4(VAR_5->adapter, VAR_2, "new BSSID is NULL\n");
  return 0;
 }


 if (!FUNC_0(VAR_5->curr_bss_params.bss_descriptor.mac_address, VAR_7->bssid)) {

  FUNC_3(VAR_5->curr_bss_params.bss_descriptor.mac_address,
         VAR_7->bssid, VAR_1);


  VAR_5->curr_bss_params.bss_descriptor.beacon_period
   = FUNC_2(VAR_7->beacon_interval);


  VAR_5->curr_bss_params.bss_descriptor.erp_flags =
   (u8) FUNC_2(VAR_7->use_g_rate_protect);

  VAR_5->adhoc_state = VAR_0;
 }

 return 0;
}
