
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rt_dot11d_info {int dummy; } ;
struct ieee80211_network {int dummy; } ;
struct TYPE_4__ {int * txb; } ;
struct TYPE_3__ {int SlotNum; scalar_t__ NumRecvDataInPeriod; scalar_t__ NumRecvBcnInPeriod; } ;
struct ieee80211_device {int rate; int* Regdot11HTOperationalRateSet; int actscanning; int beinretry; int is_set_key; int* sta_edca_param; int aggregation; int enable_rx_imm_BA; int ps_task; int beacon_lock; int mgmt_tx_lock; int scan_mutex; int wx_mutex; int wx_sync_scan_wq; int associate_retry_wq; int softmac_scan_wq; int associate_procedure_wq; int associate_complete_wq; int start_ibss_wq; int beacon_timer; int associate_timer; TYPE_2__ tx_pending; scalar_t__ sta_sleep; int ps; int basic_rate; scalar_t__ proto_started; scalar_t__ ssid_set; scalar_t__ wap_set; scalar_t__ softmac_features; scalar_t__ scanning; scalar_t__ queue_stop; scalar_t__ assoc_id; TYPE_1__ LinkDetectInfo; int dot11d_info; scalar_t__* seq_ctrl; scalar_t__ sync_scan_hurryup; int state; int current_network; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (struct ieee80211_device*) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,void (*) (unsigned long),unsigned long) ;
 int FUNC_9 (int *,int ,int ) ;

void FUNC_10(struct ieee80211_device *VAR_14)
{
 int VAR_15;
 FUNC_5(&VAR_14->current_network, 0, sizeof(struct ieee80211_network));

 VAR_14->state = VAR_3;
 VAR_14->sync_scan_hurryup = 0;
 for (VAR_15 = 0; VAR_15 < 5; VAR_15++)
  VAR_14->seq_ctrl[VAR_15] = 0;

 VAR_14->dot11d_info = FUNC_4(sizeof(struct rt_dot11d_info), VAR_0);
 if (!VAR_14->dot11d_info)
  FUNC_0(VAR_2, "can't alloc memory for DOT11D\n");

 VAR_14->LinkDetectInfo.SlotNum = 2;
 VAR_14->LinkDetectInfo.NumRecvBcnInPeriod = 0;
 VAR_14->LinkDetectInfo.NumRecvDataInPeriod = 0;

 VAR_14->assoc_id = 0;
 VAR_14->queue_stop = 0;
 VAR_14->scanning = 0;
 VAR_14->softmac_features = 0;
 VAR_14->wap_set = 0;
 VAR_14->ssid_set = 0;
 VAR_14->proto_started = 0;
 VAR_14->basic_rate = VAR_1;
 VAR_14->rate = 22;
 VAR_14->ps = VAR_4;
 VAR_14->sta_sleep = 0;
 VAR_14->Regdot11HTOperationalRateSet[0] = 0xff;
 VAR_14->Regdot11HTOperationalRateSet[1] = 0xff;
 VAR_14->Regdot11HTOperationalRateSet[4] = 0x01;

 VAR_14->actscanning = 0;
 VAR_14->beinretry = 0;
 VAR_14->is_set_key = 0;
 FUNC_3(VAR_14);

 VAR_14->sta_edca_param[0] = 0x0000A403;
 VAR_14->sta_edca_param[1] = 0x0000A427;
 VAR_14->sta_edca_param[2] = 0x005E4342;
 VAR_14->sta_edca_param[3] = 0x002F3262;
 VAR_14->aggregation = 1;
 VAR_14->enable_rx_imm_BA = 1;
 VAR_14->tx_pending.txb = ((void*)0);

 FUNC_9(&VAR_14->associate_timer, VAR_5, 0);

 FUNC_9(&VAR_14->beacon_timer, VAR_9, 0);

 FUNC_1(&VAR_14->start_ibss_wq, VAR_12);
 FUNC_2(&VAR_14->associate_complete_wq, VAR_6);
 FUNC_2(&VAR_14->associate_procedure_wq, VAR_7);
 FUNC_1(&VAR_14->softmac_scan_wq, VAR_10);
 FUNC_1(&VAR_14->associate_retry_wq, VAR_8);
 FUNC_2(&VAR_14->wx_sync_scan_wq, VAR_13);

 FUNC_6(&VAR_14->wx_mutex);
 FUNC_6(&VAR_14->scan_mutex);

 FUNC_7(&VAR_14->mgmt_tx_lock);
 FUNC_7(&VAR_14->beacon_lock);

 FUNC_8(&VAR_14->ps_task,
       (void(*)(unsigned long)) VAR_11,
       (unsigned long)VAR_14);
}
