
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct r8192_priv {int chan; int promisc; int CckPwEnl; int IrpPendingCount; int bForcedSilentReset; int bDisableNormalResetCheck; int force_reset; int ShortRetryLimit; int LongRetryLimit; int EarlyRxThreshold; int TransmitConfig; int ReceiveConfig; int rf_set_chan; TYPE_2__* ieee80211; int skb_queue; int rx_queue; int pFirmware; scalar_t__ AcmControl; scalar_t__ enable_gpio0; int card_type; int ResetProgress; int retry_data; int retry_rts; int card_8192; } ;
struct net_device {int flags; } ;
typedef int rt_firmware ;
struct TYPE_3__ {int beacon_interval; } ;
struct TYPE_4__ {int rate; int short_slot; int softmac_features; int active_scan; int modulation; int host_encrypt; int host_decrypt; int qos_support; int * skb_drv_aggQ; int * skb_aggQ; int * skb_waitQ; int InitialGainHandler; int SetWirelessMode; int GetHalfNmodeSupportByAPsHandler; int GetNmodeSupportBySecCfg; int handle_beacon; int handle_assoc_response; int SetBWModeHandler; int tx_headroom; int check_nic_enough_desc; int fts; scalar_t__ init_wmmparam_flag; int data_hard_resume; int data_hard_stop; int softmac_data_hard_start_xmit; int link_change; int set_chan; int softmac_hard_start_xmit; int * stop_send_beacons; int * start_send_beacons; TYPE_1__ current_network; scalar_t__ FwRWRF; int rts; scalar_t__ ieee_up; int iw_mode; int mode; } ;


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
 size_t VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int,int ) ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_52)
{
 struct r8192_priv *VAR_53 = FUNC_0(VAR_52);
 u8 VAR_54;

 VAR_53->card_8192 = VAR_21;
 VAR_53->chan = 1;
 VAR_53->ieee80211->mode = VAR_39;
 VAR_53->ieee80211->iw_mode = VAR_18;
 VAR_53->ieee80211->ieee_up = 0;
 VAR_53->retry_rts = VAR_3;
 VAR_53->retry_data = VAR_2;
 VAR_53->ieee80211->rts = VAR_4;
 VAR_53->ieee80211->rate = 110;
 VAR_53->ieee80211->short_slot = 1;
 VAR_53->promisc = (VAR_52->flags & VAR_17) ? 1 : 0;
 VAR_53->CckPwEnl = 6;

 VAR_53->IrpPendingCount = 1;
 VAR_53->ResetProgress = VAR_30;
 VAR_53->bForcedSilentReset = 0;
 VAR_53->bDisableNormalResetCheck = 0;
 VAR_53->force_reset = 0;


 VAR_53->ieee80211->FwRWRF = 0;
 VAR_53->ieee80211->current_network.beacon_interval =
  VAR_0;
 VAR_53->ieee80211->softmac_features = VAR_15 |
  VAR_11 | VAR_13 |
  VAR_14 | VAR_16 |
  VAR_12;

 VAR_53->ieee80211->active_scan = 1;
 VAR_53->ieee80211->modulation =
  VAR_9 | VAR_10;
 VAR_53->ieee80211->host_encrypt = 1;
 VAR_53->ieee80211->host_decrypt = 1;
 VAR_53->ieee80211->start_send_beacons = ((void*)0);
 VAR_53->ieee80211->stop_send_beacons = ((void*)0);
 VAR_53->ieee80211->softmac_hard_start_xmit = VAR_48;
 VAR_53->ieee80211->set_chan = VAR_51;
 VAR_53->ieee80211->link_change = VAR_49;
 VAR_53->ieee80211->softmac_data_hard_start_xmit = VAR_47;
 VAR_53->ieee80211->data_hard_stop = VAR_44;
 VAR_53->ieee80211->data_hard_resume = VAR_43;
 VAR_53->ieee80211->init_wmmparam_flag = 0;
 VAR_53->ieee80211->fts = VAR_1;
 VAR_53->ieee80211->check_nic_enough_desc = VAR_40;
 VAR_53->ieee80211->tx_headroom = VAR_37;
 VAR_53->ieee80211->qos_support = 1;

 VAR_53->ieee80211->SetBWModeHandler = VAR_41;
 VAR_53->ieee80211->handle_assoc_response = VAR_45;
 VAR_53->ieee80211->handle_beacon = VAR_46;

 VAR_53->ieee80211->GetNmodeSupportBySecCfg = VAR_8;
 VAR_53->ieee80211->GetHalfNmodeSupportByAPsHandler =
  VAR_7;
 VAR_53->ieee80211->SetWirelessMode = VAR_42;

 VAR_53->ieee80211->InitialGainHandler = VAR_19;
 VAR_53->card_type = VAR_38;
 VAR_53->ShortRetryLimit = 0x30;
 VAR_53->LongRetryLimit = 0x30;
 VAR_53->EarlyRxThreshold = 7;
 VAR_53->enable_gpio0 = 0;
 VAR_53->TransmitConfig =

  (VAR_33 << VAR_34) |

  (VAR_53->ShortRetryLimit << VAR_36) |

  (VAR_53->LongRetryLimit << VAR_32) |



  (0 ? VAR_35 : 0);
 VAR_53->ReceiveConfig =

  VAR_26 | VAR_24 |

  VAR_23 |

  VAR_22 | VAR_25 | VAR_27 |

  ((u32)7 << VAR_28) |

  (VAR_53->EarlyRxThreshold << VAR_31) |
  (VAR_53->EarlyRxThreshold == 7 ? VAR_29 : 0);

 VAR_53->AcmControl = 0;
 VAR_53->pFirmware = FUNC_1(sizeof(rt_firmware), VAR_6);
 if (!VAR_53->pFirmware)
  return -VAR_5;


 FUNC_2(&VAR_53->rx_queue);
 FUNC_2(&VAR_53->skb_queue);


 for (VAR_54 = 0; VAR_54 < VAR_20; VAR_54++)
  FUNC_2(&VAR_53->ieee80211->skb_waitQ[VAR_54]);
 for (VAR_54 = 0; VAR_54 < VAR_20; VAR_54++)
  FUNC_2(&VAR_53->ieee80211->skb_aggQ[VAR_54]);
 for (VAR_54 = 0; VAR_54 < VAR_20; VAR_54++)
  FUNC_2(&VAR_53->ieee80211->skb_drv_aggQ[VAR_54]);
 VAR_53->rf_set_chan = VAR_50;

 return 0;
}
