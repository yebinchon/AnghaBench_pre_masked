
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
struct sw_cam_table {int dummy; } ;
struct rt_firmware {int dummy; } ;
struct r8192_priv {int up_first_time; int blinked_ingpio; int bDriverIsGoingToUnload; int being_init_adapter; int initialized_at_probe; int bdisable_nic; int bfirst_init; int txringcount; int rxbuffersize; int chan; int RegChannelPlan; int promisc; int bcck_in_ch14; int bfsync_processing; int CckPwEnl; int ScanDelay; int bForcedSilentReset; int bDisableNormalResetCheck; int force_reset; int bHwRadioOff; int RegRfOff; int isRFOff; int bInPowerSaveMode; int RFChangeInProgress; int SetRFPowerStateInProgress; TYPE_4__* rtllib; int skb_queue; int pFirmware; int card_type; scalar_t__ bHwRfOffAction; scalar_t__ RxCounter; int InterruptLog; int ResetProgress; scalar_t__ rfc_txpowertrackingindex; scalar_t__ rfa_txpowertrackingindex; scalar_t__ CCKPresentAttentuation; int retry_data; int retry_rts; scalar_t__ irq_enabled; int rxringcount; scalar_t__ polling_timer_on; int dot11CurrentPreambleMode; int AcmMethod; } ;
struct net_device {int flags; } ;
struct log_int_8190 {int dummy; } ;
struct TYPE_6__ {int beacon_interval; } ;
struct TYPE_5__ {int bInactivePs; int bIPSModeBackup; int bLeisurePs; int bFwCtrlLPS; } ;
struct TYPE_7__ {int bPromiscuousOn; int bFilterSourceStationFrame; } ;
struct TYPE_8__ {int bNetPromiscuousMode; int rate; int short_slot; int active_scan; int be_scan_inprogress; int modulation; int host_encrypt; int host_decrypt; int * skb_aggQ; int * skb_waitQ; int fts; void* iw_mode; TYPE_2__ current_network; int eRFPowerState; int sta_sleep; scalar_t__ LPSDelayCnt; TYPE_1__ PowerSaveControl; scalar_t__ RfOffReason; scalar_t__ wx_set_enc; int * swcamtable; int rts; scalar_t__ ieee_up; TYPE_3__ IntelPromiscuousModeInfo; int mode; scalar_t__ status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct net_device*,char*) ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_18)
{
 struct r8192_priv *VAR_19 = FUNC_2(VAR_18);
 u8 VAR_20;

 VAR_19->AcmMethod = VAR_16;
 VAR_19->dot11CurrentPreambleMode = VAR_11;
 VAR_19->rtllib->status = 0;
 VAR_19->polling_timer_on = 0;
 VAR_19->up_first_time = 1;
 VAR_19->blinked_ingpio = 0;
 VAR_19->bDriverIsGoingToUnload = 0;
 VAR_19->being_init_adapter = 0;
 VAR_19->initialized_at_probe = 0;
 VAR_19->bdisable_nic = 0;
 VAR_19->bfirst_init = 0;
 VAR_19->txringcount = 64;
 VAR_19->rxbuffersize = 9100;
 VAR_19->rxringcount = VAR_9;
 VAR_19->irq_enabled = 0;
 VAR_19->chan = 1;
 VAR_19->RegChannelPlan = 0xf;
 VAR_19->rtllib->mode = VAR_15;
 VAR_19->rtllib->iw_mode = VAR_6;
 VAR_19->rtllib->bNetPromiscuousMode = 0;
 VAR_19->rtllib->IntelPromiscuousModeInfo.bPromiscuousOn = 0;
 VAR_19->rtllib->IntelPromiscuousModeInfo.bFilterSourceStationFrame =
         0;
 VAR_19->rtllib->ieee_up = 0;
 VAR_19->retry_rts = VAR_3;
 VAR_19->retry_data = VAR_2;
 VAR_19->rtllib->rts = VAR_4;
 VAR_19->rtllib->rate = 110;
 VAR_19->rtllib->short_slot = 1;
 VAR_19->promisc = (VAR_18->flags & VAR_5) ? 1 : 0;
 VAR_19->bcck_in_ch14 = 0;
 VAR_19->bfsync_processing = 0;
 VAR_19->CCKPresentAttentuation = 0;
 VAR_19->rfa_txpowertrackingindex = 0;
 VAR_19->rfc_txpowertrackingindex = 0;
 VAR_19->CckPwEnl = 6;
 VAR_19->ScanDelay = 50;
 VAR_19->ResetProgress = VAR_12;
 VAR_19->bForcedSilentReset = 0;
 VAR_19->bDisableNormalResetCheck = 0;
 VAR_19->force_reset = 0;
 FUNC_0(VAR_19->rtllib->swcamtable, 0, sizeof(struct sw_cam_table) * 32);

 FUNC_0(&VAR_19->InterruptLog, 0, sizeof(struct log_int_8190));
 VAR_19->RxCounter = 0;
 VAR_19->rtllib->wx_set_enc = 0;
 VAR_19->bHwRadioOff = 0;
 VAR_19->RegRfOff = 0;
 VAR_19->isRFOff = 0;
 VAR_19->bInPowerSaveMode = 0;
 VAR_19->rtllib->RfOffReason = 0;
 VAR_19->RFChangeInProgress = 0;
 VAR_19->bHwRfOffAction = 0;
 VAR_19->SetRFPowerStateInProgress = 0;
 VAR_19->rtllib->PowerSaveControl.bInactivePs = 1;
 VAR_19->rtllib->PowerSaveControl.bIPSModeBackup = 0;
 VAR_19->rtllib->PowerSaveControl.bLeisurePs = 1;
 VAR_19->rtllib->PowerSaveControl.bFwCtrlLPS = 0;
 VAR_19->rtllib->LPSDelayCnt = 0;
 VAR_19->rtllib->sta_sleep = VAR_7;
 VAR_19->rtllib->eRFPowerState = VAR_17;

 VAR_19->rtllib->current_network.beacon_interval = VAR_0;
 VAR_19->rtllib->iw_mode = VAR_6;
 VAR_19->rtllib->active_scan = 1;
 VAR_19->rtllib->be_scan_inprogress = 0;
 VAR_19->rtllib->modulation = VAR_13 |
       VAR_14;
 VAR_19->rtllib->host_encrypt = 1;
 VAR_19->rtllib->host_decrypt = 1;

 VAR_19->rtllib->fts = VAR_1;

 VAR_19->card_type = VAR_10;

 VAR_19->pFirmware = FUNC_4(sizeof(struct rt_firmware));
 if (!VAR_19->pFirmware)
  FUNC_1(VAR_18,
      "rtl8192e: Unable to allocate space for firmware\n");

 FUNC_3(&VAR_19->skb_queue);

 for (VAR_20 = 0; VAR_20 < VAR_8; VAR_20++)
  FUNC_3(&VAR_19->rtllib->skb_waitQ[VAR_20]);
 for (VAR_20 = 0; VAR_20 < VAR_8; VAR_20++)
  FUNC_3(&VAR_19->rtllib->skb_aggQ[VAR_20]);
}
