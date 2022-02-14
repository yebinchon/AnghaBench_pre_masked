
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int rx_filter; int tx_type; scalar_t__ flags; } ;
struct efx_ptp_data {int rx_ts_inline; int nic_ts_enabled; int start; void* workwq; scalar_t__ phc_clock; void* pps_workwq; int pps_work; int phc_clock_info; int evt_free_list; TYPE_2__* rx_evts; int evt_lock; int evt_list; TYPE_1__ config; int work; int xmit_skb; int txq; int rxq; struct efx_channel* channel; struct efx_nic* efx; } ;
struct efx_nic {struct efx_ptp_data* ptp_data; TYPE_4__* pci_dev; TYPE_3__* mcdi; } ;
struct efx_channel {int sync_events_state; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {int fn_flags; } ;
struct TYPE_6__ {int link; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (scalar_t__) ;
 int VAR_7 ;
 void* FUNC_4 (char*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (struct efx_nic*,int *,int,int ) ;
 int FUNC_7 (struct efx_nic*,int *) ;
 scalar_t__ FUNC_8 (struct efx_nic*) ;
 int VAR_8 ;
 int FUNC_9 (struct efx_nic*) ;
 int FUNC_10 (struct efx_nic*) ;
 int VAR_9 ;
 scalar_t__ FUNC_11 (struct efx_nic*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_12 (struct efx_ptp_data*) ;
 struct efx_ptp_data* FUNC_13 (int,int ) ;
 int FUNC_14 (int *,int *) ;
 scalar_t__ FUNC_15 (int *,int *) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;

int FUNC_19(struct efx_nic *VAR_13, struct efx_channel *VAR_14)
{
 struct efx_ptp_data *VAR_15;
 int VAR_16 = 0;
 unsigned int VAR_17;

 VAR_15 = FUNC_13(sizeof(struct efx_ptp_data), VAR_2);
 VAR_13->ptp_data = VAR_15;
 if (!VAR_13->ptp_data)
  return -VAR_1;

 VAR_15->efx = VAR_13;
 VAR_15->channel = VAR_14;
 VAR_15->rx_ts_inline = FUNC_8(VAR_13) >= VAR_0;

 VAR_16 = FUNC_6(VAR_13, &VAR_15->start, sizeof(int), VAR_2);
 if (VAR_16 != 0)
  goto fail1;

 FUNC_17(&VAR_15->rxq);
 FUNC_17(&VAR_15->txq);
 VAR_15->workwq = FUNC_4("sfc_ptp");
 if (!VAR_15->workwq) {
  VAR_16 = -VAR_1;
  goto fail2;
 }

 if (FUNC_11(VAR_13)) {
  VAR_15->xmit_skb = VAR_12;

  VAR_14->sync_events_state = VAR_7;
 } else {
  VAR_15->xmit_skb = VAR_11;
 }

 FUNC_1(&VAR_15->work, VAR_10);
 VAR_15->config.flags = 0;
 VAR_15->config.tx_type = VAR_4;
 VAR_15->config.rx_filter = VAR_3;
 FUNC_0(&VAR_15->evt_list);
 FUNC_0(&VAR_15->evt_free_list);
 FUNC_18(&VAR_15->evt_lock);
 for (VAR_17 = 0; VAR_17 < VAR_5; VAR_17++)
  FUNC_14(&VAR_15->rx_evts[VAR_17].link, &VAR_15->evt_free_list);


 VAR_16 = FUNC_9(VAR_13);
 if (VAR_16 < 0)
  goto fail3;


 VAR_16 = FUNC_10(VAR_13);
 if (VAR_16 < 0)
  goto fail3;

 if (VAR_13->mcdi->fn_flags &
     (1 << VAR_6)) {
  VAR_15->phc_clock_info = VAR_8;
  VAR_15->phc_clock = FUNC_15(&VAR_15->phc_clock_info,
          &VAR_13->pci_dev->dev);
  if (FUNC_2(VAR_15->phc_clock)) {
   VAR_16 = FUNC_3(VAR_15->phc_clock);
   goto fail3;
  } else if (VAR_15->phc_clock) {
   FUNC_1(&VAR_15->pps_work, VAR_9);
   VAR_15->pps_workwq = FUNC_4("sfc_pps");
   if (!VAR_15->pps_workwq) {
    VAR_16 = -VAR_1;
    goto fail4;
   }
  }
 }
 VAR_15->nic_ts_enabled = 0;

 return 0;
fail4:
 FUNC_16(VAR_13->ptp_data->phc_clock);

fail3:
 FUNC_5(VAR_13->ptp_data->workwq);

fail2:
 FUNC_7(VAR_13, &VAR_15->start);

fail1:
 FUNC_12(VAR_13->ptp_data);
 VAR_13->ptp_data = ((void*)0);

 return VAR_16;
}
