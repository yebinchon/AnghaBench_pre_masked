
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct TYPE_13__ {int mac_address; } ;
struct TYPE_10__ {TYPE_6__ bss_descriptor; } ;
struct mwifiex_private {int media_connected; int netdev; TYPE_3__ curr_bss_params; struct mwifiex_adapter* adapter; int adhoc_channel; int adhoc_state; struct mwifiex_bssdescriptor* attempted_bss_desc; } ;
struct TYPE_9__ {int ssid; } ;
struct mwifiex_bssdescriptor {TYPE_2__ ssid; TYPE_6__* mac_address; } ;
struct TYPE_12__ {int status; } ;
struct mwifiex_adapter {TYPE_5__ cmd_wait_q; TYPE_4__* curr_cmd; } ;
struct host_cmd_ds_802_11_ad_hoc_join_result {scalar_t__ result; } ;
struct host_cmd_ds_802_11_ad_hoc_start_result {struct mwifiex_bssdescriptor* bssid; scalar_t__ result; } ;
struct TYPE_8__ {struct host_cmd_ds_802_11_ad_hoc_join_result join_result; struct host_cmd_ds_802_11_ad_hoc_start_result start_result; } ;
struct host_cmd_ds_command {int command; TYPE_1__ params; } ;
struct TYPE_11__ {scalar_t__ wait_q_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_6__*,struct mwifiex_bssdescriptor*,int) ;
 int FUNC_2 (TYPE_6__*,int,int) ;
 int FUNC_3 (struct mwifiex_adapter*,int ,char*,...) ;
 int FUNC_4 (struct mwifiex_private*,scalar_t__,int) ;
 int FUNC_5 (struct mwifiex_private*) ;
 int FUNC_6 (int ,struct mwifiex_adapter*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

int FUNC_9(struct mwifiex_private *VAR_6,
         struct host_cmd_ds_command *VAR_7)
{
 int VAR_8 = 0;
 struct mwifiex_adapter *VAR_9 = VAR_6->adapter;
 struct host_cmd_ds_802_11_ad_hoc_start_result *VAR_10 =
    &VAR_7->params.start_result;
 struct host_cmd_ds_802_11_ad_hoc_join_result *VAR_11 =
    &VAR_7->params.join_result;
 struct mwifiex_bssdescriptor *VAR_12;
 u16 VAR_13 = FUNC_0(VAR_7->command);
 u8 VAR_14;

 if (!VAR_6->attempted_bss_desc) {
  FUNC_3(VAR_6->adapter, VAR_2,
       "ADHOC_RESP: failed, association terminated by host\n");
  goto done;
 }

 if (VAR_13 == VAR_4)
  VAR_14 = VAR_10->result;
 else
  VAR_14 = VAR_11->result;

 VAR_12 = VAR_6->attempted_bss_desc;


 if (VAR_14) {
  FUNC_3(VAR_6->adapter, VAR_2, "ADHOC_RESP: failed\n");
  if (VAR_6->media_connected)
   FUNC_4(VAR_6, VAR_14, 1);

  FUNC_2(&VAR_6->curr_bss_params.bss_descriptor,
         0x00, sizeof(struct mwifiex_bssdescriptor));

  VAR_8 = -1;
  goto done;
 }


 VAR_6->media_connected = 1;

 if (FUNC_0(VAR_7->command) == VAR_4) {
  FUNC_3(VAR_6->adapter, VAR_5, "info: ADHOC_S_RESP %s\n",
       VAR_12->ssid.ssid);


  FUNC_1(VAR_12->mac_address,
         VAR_10->bssid, VAR_3);

  VAR_6->adhoc_state = VAR_1;
 } else {




  FUNC_3(VAR_6->adapter, VAR_5,
       "info: ADHOC_J_RESP %s\n",
       VAR_12->ssid.ssid);






  FUNC_1(&VAR_6->curr_bss_params.bss_descriptor,
         VAR_12, sizeof(struct mwifiex_bssdescriptor));

  VAR_6->adhoc_state = VAR_0;
 }

 FUNC_3(VAR_6->adapter, VAR_5, "info: ADHOC_RESP: channel = %d\n",
      VAR_6->adhoc_channel);
 FUNC_3(VAR_6->adapter, VAR_5, "info: ADHOC_RESP: BSSID = %pM\n",
      VAR_6->curr_bss_params.bss_descriptor.mac_address);

 if (!FUNC_7(VAR_6->netdev))
  FUNC_8(VAR_6->netdev);
 FUNC_6(VAR_6->netdev, VAR_9);

 FUNC_5(VAR_6);

done:

 if (VAR_9->curr_cmd->wait_q_enabled) {
  if (VAR_8)
   VAR_9->cmd_wait_q.status = -1;
  else
   VAR_9->cmd_wait_q.status = 0;

 }

 return VAR_8;
}
