
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {int beacon_interval; int dtim_period; int flags; } ;
struct TYPE_12__ {int legacy; } ;
struct station_info {int filled; TYPE_3__ bss_param; TYPE_6__ rxrate; TYPE_6__ txrate; int signal; int tx_packets; int rx_packets; int tx_bytes; int rx_bytes; int signal_avg; int tx_failed; int inactive_time; } ;
struct TYPE_7__ {int last_tx_rate; int last_tx_htinfo; int tx_failed; int tx_packets; int rx_packets; int tx_bytes; int rx_bytes; int rssi; scalar_t__ last_rx; } ;
struct mwifiex_sta_node {TYPE_1__ stats; } ;
struct TYPE_10__ {int cap_info_bitmap; int beacon_period; } ;
struct TYPE_11__ {TYPE_4__ bss_descriptor; } ;
struct TYPE_8__ {int tx_packets; int rx_packets; int tx_bytes; int rx_bytes; } ;
struct mwifiex_private {scalar_t__ bss_mode; TYPE_5__ curr_bss_params; int dtim_period; int rxpd_htinfo; int rxpd_rate; int bcn_rssi_avg; TYPE_2__ stats; int tx_htinfo; int tx_rate; int adapter; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct mwifiex_private*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
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
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ,char*) ;
 scalar_t__ FUNC_5 (struct mwifiex_private*,int*) ;
 int FUNC_6 (struct mwifiex_private*,int ,int ,TYPE_6__*) ;
 int FUNC_7 (struct mwifiex_private*,int ,int ,int ,int *,int) ;

__attribute__((used)) static int
FUNC_8(struct mwifiex_private *VAR_25,
     struct mwifiex_sta_node *VAR_26,
     struct station_info *VAR_27)
{
 u32 VAR_28;

 VAR_27->filled = FUNC_1(VAR_14) | FUNC_1(VAR_19) |
   FUNC_1(VAR_15) | FUNC_1(VAR_21) |
   FUNC_1(VAR_18) |
   FUNC_1(VAR_16) | FUNC_1(VAR_17);

 if (FUNC_2(VAR_25) == VAR_9) {
  if (!VAR_26)
   return -VAR_4;

  VAR_27->filled |= FUNC_1(VAR_12) |
    FUNC_1(VAR_20);
  VAR_27->inactive_time =
   FUNC_3(VAR_24 - VAR_26->stats.last_rx);

  VAR_27->signal = VAR_26->stats.rssi;
  VAR_27->signal_avg = VAR_26->stats.rssi;
  VAR_27->rx_bytes = VAR_26->stats.rx_bytes;
  VAR_27->tx_bytes = VAR_26->stats.tx_bytes;
  VAR_27->rx_packets = VAR_26->stats.rx_packets;
  VAR_27->tx_packets = VAR_26->stats.tx_packets;
  VAR_27->tx_failed = VAR_26->stats.tx_failed;

  FUNC_6(VAR_25, VAR_25->tx_rate,
         VAR_26->stats.last_tx_htinfo,
         &VAR_27->txrate);
  VAR_27->txrate.legacy = VAR_26->stats.last_tx_rate * 5;

  return 0;
 }


 if (FUNC_7(VAR_25, VAR_8,
        VAR_6, 0, ((void*)0), 1)) {
  FUNC_4(VAR_25->adapter, VAR_5,
       "failed to get signal information\n");
  return -VAR_3;
 }

 if (FUNC_5(VAR_25, &VAR_28)) {
  FUNC_4(VAR_25->adapter, VAR_5,
       "getting data rate error\n");
  return -VAR_3;
 }


 FUNC_7(VAR_25, VAR_7,
    VAR_6, VAR_2,
    &VAR_25->dtim_period, 1);

 FUNC_6(VAR_25, VAR_25->tx_rate, VAR_25->tx_htinfo,
        &VAR_27->txrate);

 VAR_27->signal_avg = VAR_25->bcn_rssi_avg;
 VAR_27->rx_bytes = VAR_25->stats.rx_bytes;
 VAR_27->tx_bytes = VAR_25->stats.tx_bytes;
 VAR_27->rx_packets = VAR_25->stats.rx_packets;
 VAR_27->tx_packets = VAR_25->stats.tx_packets;
 VAR_27->signal = VAR_25->bcn_rssi_avg;

 VAR_27->txrate.legacy = VAR_28 * 5;

 VAR_27->filled |= FUNC_0(VAR_13);
 FUNC_6(VAR_25, VAR_25->rxpd_rate, VAR_25->rxpd_htinfo,
        &VAR_27->rxrate);

 if (VAR_25->bss_mode == VAR_10) {
  VAR_27->filled |= FUNC_1(VAR_11);
  VAR_27->bss_param.flags = 0;
  if (VAR_25->curr_bss_params.bss_descriptor.cap_info_bitmap &
      VAR_22)
   VAR_27->bss_param.flags |=
     VAR_0;
  if (VAR_25->curr_bss_params.bss_descriptor.cap_info_bitmap &
      VAR_23)
   VAR_27->bss_param.flags |=
     VAR_1;
  VAR_27->bss_param.dtim_period = VAR_25->dtim_period;
  VAR_27->bss_param.beacon_interval =
   VAR_25->curr_bss_params.bss_descriptor.beacon_period;
 }

 return 0;
}
