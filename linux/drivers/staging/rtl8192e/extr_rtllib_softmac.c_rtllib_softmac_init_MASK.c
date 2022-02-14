
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtllib_network {int dummy; } ;
struct TYPE_4__ {int * txb; } ;
struct TYPE_3__ {int SlotNum; scalar_t__ NumRxUnicastOkInPeriod; scalar_t__ NumRxOkInPeriod; scalar_t__ NumTxOkInPeriod; scalar_t__ NumRecvDataInPeriod; scalar_t__ NumRecvBcnInPeriod; scalar_t__ SlotIndex; } ;
struct rtllib_device {int bIsAggregateFrame; int rate; int* Regdot11HTOperationalRateSet; int* Regdot11TxHTOperationalRateSet; int FirstIe_InScan; int actscanning; int beinretry; int is_set_key; int ps_task; int beacon_lock; int mgmt_tx_lock; int ips_mutex; int scan_mutex; int wx_mutex; int wx_sync_scan_wq; int associate_retry_wq; int softmac_scan_wq; int associate_procedure_wq; int associate_complete_wq; int start_ibss_wq; int link_change_wq; int beacon_timer; int associate_timer; TYPE_2__ tx_pending; int sta_sleep; int ps; int basic_rate; scalar_t__ proto_stoppping; scalar_t__ proto_started; scalar_t__ ssid_set; scalar_t__ wap_set; scalar_t__ softmac_features; scalar_t__ scanning_continue; scalar_t__ queue_stop; scalar_t__ assoc_id; TYPE_1__ LinkDetectInfo; int dev; int dot11d_info; scalar_t__* seq_ctrl; int state; int current_network; } ;
struct rt_dot11d_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,void*,struct rtllib_device*) ;
 int FUNC_1 (int *,void*,struct rtllib_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct rtllib_device*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,void (*) (unsigned long),unsigned long) ;
 int FUNC_9 (int *,int ,int ) ;

void FUNC_10(struct rtllib_device *VAR_15)
{
 int VAR_16;

 FUNC_4(&VAR_15->current_network, 0, sizeof(struct rtllib_network));

 VAR_15->state = VAR_3;
 for (VAR_16 = 0; VAR_16 < 5; VAR_16++)
  VAR_15->seq_ctrl[VAR_16] = 0;
 VAR_15->dot11d_info = FUNC_3(sizeof(struct rt_dot11d_info), VAR_0);
 if (!VAR_15->dot11d_info)
  FUNC_6(VAR_15->dev, "Can't alloc memory for DOT11D\n");
 VAR_15->LinkDetectInfo.SlotIndex = 0;
 VAR_15->LinkDetectInfo.SlotNum = 2;
 VAR_15->LinkDetectInfo.NumRecvBcnInPeriod = 0;
 VAR_15->LinkDetectInfo.NumRecvDataInPeriod = 0;
 VAR_15->LinkDetectInfo.NumTxOkInPeriod = 0;
 VAR_15->LinkDetectInfo.NumRxOkInPeriod = 0;
 VAR_15->LinkDetectInfo.NumRxUnicastOkInPeriod = 0;
 VAR_15->bIsAggregateFrame = 0;
 VAR_15->assoc_id = 0;
 VAR_15->queue_stop = 0;
 VAR_15->scanning_continue = 0;
 VAR_15->softmac_features = 0;
 VAR_15->wap_set = 0;
 VAR_15->ssid_set = 0;
 VAR_15->proto_started = 0;
 VAR_15->proto_stoppping = 0;
 VAR_15->basic_rate = VAR_2;
 VAR_15->rate = 22;
 VAR_15->ps = VAR_4;
 VAR_15->sta_sleep = VAR_1;

 VAR_15->Regdot11HTOperationalRateSet[0] = 0xff;
 VAR_15->Regdot11HTOperationalRateSet[1] = 0xff;
 VAR_15->Regdot11HTOperationalRateSet[4] = 0x01;

 VAR_15->Regdot11TxHTOperationalRateSet[0] = 0xff;
 VAR_15->Regdot11TxHTOperationalRateSet[1] = 0xff;
 VAR_15->Regdot11TxHTOperationalRateSet[4] = 0x01;

 VAR_15->FirstIe_InScan = 0;
 VAR_15->actscanning = 0;
 VAR_15->beinretry = 0;
 VAR_15->is_set_key = 0;
 FUNC_2(VAR_15);

 VAR_15->tx_pending.txb = ((void*)0);

 FUNC_9(&VAR_15->associate_timer, VAR_5, 0);

 FUNC_9(&VAR_15->beacon_timer, VAR_10, 0);

 FUNC_0(&VAR_15->link_change_wq,
         (void *)VAR_9, VAR_15);
 FUNC_0(&VAR_15->start_ibss_wq,
         (void *)VAR_13, VAR_15);
 FUNC_1(&VAR_15->associate_complete_wq,
        (void *)VAR_6, VAR_15);
 FUNC_0(&VAR_15->associate_procedure_wq,
         (void *)VAR_7, VAR_15);
 FUNC_0(&VAR_15->softmac_scan_wq,
         (void *)VAR_11, VAR_15);
 FUNC_0(&VAR_15->associate_retry_wq,
         (void *)VAR_8, VAR_15);
 FUNC_1(&VAR_15->wx_sync_scan_wq, (void *)VAR_14,
        VAR_15);

 FUNC_5(&VAR_15->wx_mutex);
 FUNC_5(&VAR_15->scan_mutex);
 FUNC_5(&VAR_15->ips_mutex);

 FUNC_7(&VAR_15->mgmt_tx_lock);
 FUNC_7(&VAR_15->beacon_lock);

 FUNC_8(&VAR_15->ps_task,
      (void(*)(unsigned long)) VAR_12,
      (unsigned long)VAR_15);

}
