
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct r8192_priv {TYPE_2__* rtllib; int rf_set_chan; TYPE_1__* ops; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int ScanOperationBackupHandler; int * UpdateBeaconInterruptHandler; int * LedControlHandler; int rtllib_ips_leave; int rtllib_ips_leave_wq; int InitialGainHandler; int * SetFwCmdHandler; int AllowAllDestAddrHandler; int SetHwRegHandler; int GetHalfNmodeSupportByAPsHandler; int GetNmodeSupportBySecCfg; int ps_is_queue_empty; int enter_sleep_state; int sta_wake_up; int stop_send_beacons; int start_send_beacons; int SetBWModeHandler; int LeisurePSLeave; int SetWirelessMode; int handle_beacon; int handle_assoc_response; int check_nic_enough_desc; int softmac_data_hard_start_xmit; int link_change; int set_chan; int softmac_hard_start_xmit; } ;
struct TYPE_3__ {int link_change; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_23)
{
 struct r8192_priv *VAR_24 = FUNC_0(VAR_23);

 VAR_24->rtllib->softmac_hard_start_xmit = VAR_4;
 VAR_24->rtllib->set_chan = VAR_6;
 VAR_24->rtllib->link_change = VAR_24->ops->link_change;
 VAR_24->rtllib->softmac_data_hard_start_xmit = VAR_3;
 VAR_24->rtllib->check_nic_enough_desc = VAR_0;
 VAR_24->rtllib->handle_assoc_response = VAR_1;
 VAR_24->rtllib->handle_beacon = VAR_2;
 VAR_24->rtllib->SetWirelessMode = VAR_21;
 VAR_24->rtllib->LeisurePSLeave = VAR_13;
 VAR_24->rtllib->SetBWModeHandler = VAR_17;
 VAR_24->rf_set_chan = VAR_18;

 VAR_24->rtllib->start_send_beacons = VAR_22;
 VAR_24->rtllib->stop_send_beacons = VAR_7;

 VAR_24->rtllib->sta_wake_up = VAR_10;
 VAR_24->rtllib->enter_sleep_state = VAR_8;
 VAR_24->rtllib->ps_is_queue_empty = VAR_5;

 VAR_24->rtllib->GetNmodeSupportBySecCfg = VAR_9;
 VAR_24->rtllib->GetHalfNmodeSupportByAPsHandler =
      VAR_12;

 VAR_24->rtllib->SetHwRegHandler = VAR_20;
 VAR_24->rtllib->AllowAllDestAddrHandler = VAR_19;
 VAR_24->rtllib->SetFwCmdHandler = ((void*)0);
 VAR_24->rtllib->InitialGainHandler = VAR_11;
 VAR_24->rtllib->rtllib_ips_leave_wq = VAR_15;
 VAR_24->rtllib->rtllib_ips_leave = VAR_14;

 VAR_24->rtllib->LedControlHandler = ((void*)0);
 VAR_24->rtllib->UpdateBeaconInterruptHandler = ((void*)0);

 VAR_24->rtllib->ScanOperationBackupHandler = VAR_16;
}
