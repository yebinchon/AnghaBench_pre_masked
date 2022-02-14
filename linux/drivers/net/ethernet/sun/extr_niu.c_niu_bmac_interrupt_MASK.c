
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct niu_bmac_stats {int pause_received; int pause_on_state; int pause_off_state; int rx_len_errors; int rx_crc_errors; int rx_align_errors; int rx_frames; int rx_overflows; int tx_frames; int tx_bytes; int tx_max_pkt_size_errors; int tx_underflow_errors; } ;
struct TYPE_2__ {struct niu_bmac_stats bmac; } ;
struct niu {TYPE_1__ mac_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct niu *VAR_20)
{
 struct niu_bmac_stats *VAR_21 = &VAR_20->mac_stats.bmac;
 u64 VAR_22;

 VAR_22 = FUNC_0(VAR_15);
 if (VAR_22 & VAR_19)
  VAR_21->tx_underflow_errors++;
 if (VAR_22 & VAR_18)
  VAR_21->tx_max_pkt_size_errors++;
 if (VAR_22 & VAR_16)
  VAR_21->tx_bytes += VAR_13;
 if (VAR_22 & VAR_17)
  VAR_21->tx_frames += VAR_14;

 VAR_22 = FUNC_0(VAR_7);
 if (VAR_22 & VAR_12)
  VAR_21->rx_overflows++;
 if (VAR_22 & VAR_10)
  VAR_21->rx_frames += VAR_6;
 if (VAR_22 & VAR_8)
  VAR_21->rx_align_errors += VAR_4;
 if (VAR_22 & VAR_9)
  VAR_21->rx_crc_errors += VAR_4;
 if (VAR_22 & VAR_11)
  VAR_21->rx_len_errors += VAR_5;

 VAR_22 = FUNC_0(VAR_0);
 if (VAR_22 & VAR_1)
  VAR_21->pause_off_state++;
 if (VAR_22 & VAR_2)
  VAR_21->pause_on_state++;
 if (VAR_22 & VAR_3)
  VAR_21->pause_received++;
}
