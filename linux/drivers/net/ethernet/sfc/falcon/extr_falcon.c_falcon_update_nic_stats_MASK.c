
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct rtnl_link_stats64 {int rx_packets; int tx_packets; int rx_bytes; int tx_bytes; int rx_dropped; int multicast; int rx_length_errors; int rx_crc_errors; int rx_frame_errors; int rx_fifo_errors; int rx_errors; } ;
struct falcon_nic_data {int* stats; int stats_pending; int stats_disable_count; } ;
struct TYPE_2__ {int addr; } ;
struct ef4_nic {TYPE_1__ stats_buffer; struct falcon_nic_data* nic_data; } ;
typedef int ef4_oword_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 scalar_t__ FUNC_1 (struct ef4_nic*) ;
 int VAR_16 ;
 int VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 int FUNC_2 (int ,int,int ,int*,int ,int) ;
 int FUNC_3 (struct ef4_nic*,int *,int ) ;
 int FUNC_4 (int*,int) ;
 int FUNC_5 (struct ef4_nic*,int*) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_6 (int*,int*,int) ;
 int FUNC_7 () ;

__attribute__((used)) static size_t FUNC_8(struct ef4_nic *VAR_22, u64 *VAR_23,
          struct rtnl_link_stats64 *VAR_24)
{
 struct falcon_nic_data *VAR_25 = VAR_22->nic_data;
 u64 *VAR_26 = VAR_25->stats;
 ef4_oword_t VAR_27;

 if (!VAR_25->stats_disable_count) {
  FUNC_3(VAR_22, &VAR_27, VAR_17);
  VAR_26[VAR_10] +=
   FUNC_0(VAR_27, VAR_16);

  if (VAR_25->stats_pending &&
      FUNC_1(VAR_22)) {
   VAR_25->stats_pending = 0;
   FUNC_7();
   FUNC_2(
    VAR_20, VAR_0,
    VAR_21,
    VAR_26, VAR_22->stats_buffer.addr, 1);
  }


  FUNC_4(&VAR_26[VAR_3],
         VAR_26[VAR_4] -
         VAR_26[VAR_6] -
         VAR_26[VAR_5] * 64);
  FUNC_5(VAR_22, VAR_26);
 }

 if (VAR_23)
  FUNC_6(VAR_23, VAR_26, sizeof(u64) * VAR_0);

 if (VAR_24) {
  VAR_24->rx_packets = VAR_26[VAR_12];
  VAR_24->tx_packets = VAR_26[VAR_15];
  VAR_24->rx_bytes = VAR_26[VAR_4];
  VAR_24->tx_bytes = VAR_26[VAR_14];
  VAR_24->rx_dropped = VAR_26[VAR_10] +
      VAR_26[VAR_18] +
      VAR_26[VAR_19];
  VAR_24->multicast = VAR_26[VAR_9];
  VAR_24->rx_length_errors =
   VAR_26[VAR_7] +
   VAR_26[VAR_8];
  VAR_24->rx_crc_errors = VAR_26[VAR_2];
  VAR_24->rx_frame_errors = VAR_26[VAR_1];
  VAR_24->rx_fifo_errors = VAR_26[VAR_11];

  VAR_24->rx_errors = (VAR_24->rx_length_errors +
      VAR_24->rx_crc_errors +
      VAR_24->rx_frame_errors +
      VAR_26[VAR_13]);
 }

 return VAR_0;
}
