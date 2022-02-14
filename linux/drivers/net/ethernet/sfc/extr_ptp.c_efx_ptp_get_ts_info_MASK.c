
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ethtool_ts_info {int so_timestamping; int tx_types; int rx_filters; int phc_index; } ;
struct efx_ptp_data {TYPE_2__* efx; scalar_t__ phc_clock; } ;
struct efx_nic {struct efx_ptp_data* ptp_data; struct efx_ef10_nic_data* nic_data; struct efx_nic* primary; } ;
struct efx_ef10_nic_data {int licensed_features; } ;
struct TYPE_4__ {TYPE_1__* type; } ;
struct TYPE_3__ {int hwtstamp_filters; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(struct efx_nic *VAR_6, struct ethtool_ts_info *VAR_7)
{
 struct efx_ptp_data *VAR_8 = VAR_6->ptp_data;
 struct efx_nic *VAR_9 = VAR_6->primary;

 FUNC_0();

 if (!VAR_8)
  return;

 VAR_7->so_timestamping |= (VAR_5 |
         VAR_4 |
         VAR_3);



 if (FUNC_1(VAR_6)) {
  struct efx_ef10_nic_data *VAR_10 = VAR_6->nic_data;

  if (!(VAR_10->licensed_features &
        (1 << VAR_2)))
   VAR_7->so_timestamping &=
    ~VAR_5;
 }
 if (VAR_9 && VAR_9->ptp_data && VAR_9->ptp_data->phc_clock)
  VAR_7->phc_index =
   FUNC_2(VAR_9->ptp_data->phc_clock);
 VAR_7->tx_types = 1 << VAR_0 | 1 << VAR_1;
 VAR_7->rx_filters = VAR_8->efx->type->hwtstamp_filters;
}
