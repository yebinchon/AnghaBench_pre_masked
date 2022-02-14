
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct skb_shared_hwtstamps {int hwtstamp; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int general_rx; } ;
struct TYPE_3__ {scalar_t__ minor_max; scalar_t__ sync_event_diff_max; scalar_t__ sync_event_diff_min; } ;
struct efx_ptp_data {TYPE_2__ ts_corrections; int (* nic_to_kernel_time ) (scalar_t__,scalar_t__,int ) ;TYPE_1__ nic_time; } ;
struct efx_nic {int net_dev; struct efx_ptp_data* ptp_data; } ;
struct efx_channel {scalar_t__ sync_events_state; scalar_t__ sync_timestamp_minor; int sync_timestamp_major; struct efx_nic* efx; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct efx_nic*,int ) ;
 int FUNC_1 (struct efx_nic*,int ,int ,char*,scalar_t__,int ,scalar_t__) ;
 struct skb_shared_hwtstamps* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (scalar_t__,scalar_t__,int ) ;

void FUNC_5(struct efx_channel *VAR_2,
       struct sk_buff *VAR_3)
{
 struct efx_nic *VAR_4 = VAR_2->efx;
 struct efx_ptp_data *VAR_5 = VAR_4->ptp_data;
 u32 VAR_6, VAR_7;
 u32 VAR_8, VAR_9;
 struct skb_shared_hwtstamps *VAR_10;

 if (VAR_2->sync_events_state != VAR_0)
  return;

 VAR_7 = FUNC_0(VAR_4, FUNC_3(VAR_3));




 VAR_8 = VAR_7 - VAR_2->sync_timestamp_minor;
 if (VAR_7 < VAR_2->sync_timestamp_minor)
  VAR_8 += VAR_5->nic_time.minor_max;


 VAR_9 = (VAR_2->sync_timestamp_minor >= VAR_5->nic_time.minor_max - VAR_8) ?
  1 : 0;

 if (VAR_8 <= VAR_5->nic_time.sync_event_diff_max) {



  VAR_6 = VAR_2->sync_timestamp_major + VAR_9;
 } else if (VAR_8 >= VAR_5->nic_time.sync_event_diff_min) {




  VAR_6 = VAR_2->sync_timestamp_major - 1 + VAR_9;
 } else {





  FUNC_1(VAR_4, VAR_1, VAR_4->net_dev,
     "packet timestamp %x too far from sync event %x:%x\n",
     VAR_7, VAR_2->sync_timestamp_major,
     VAR_2->sync_timestamp_minor);
  return;
 }


 VAR_10 = FUNC_2(VAR_3);
 VAR_10->hwtstamp =
  VAR_5->nic_to_kernel_time(VAR_6,
     VAR_7,
     VAR_5->ts_corrections.general_rx);
}
