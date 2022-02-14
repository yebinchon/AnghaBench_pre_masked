
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int rx_packets; int rx_errors; int tx_errors; int collisions; int rx_over_errors; int rx_crc_errors; int rx_frame_errors; int tx_aborted_errors; int tx_carrier_errors; int tx_packets; } ;
struct net_device {TYPE_1__ stats; scalar_t__ base_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_7, int VAR_8)
{
 u32 VAR_9, VAR_10;
 u32 VAR_11, VAR_12;
 u32 VAR_13, VAR_14, VAR_15;
 u32 VAR_16, VAR_17;
 u32 VAR_18, VAR_19, VAR_20;

 FUNC_1(VAR_5, VAR_7->base_addr + VAR_1);
 VAR_9 = FUNC_0(VAR_7->base_addr + VAR_2);
 VAR_9 += FUNC_0(VAR_7->base_addr + VAR_2 + 1) << 8;
 VAR_9 += FUNC_0(VAR_7->base_addr + VAR_2 + 2) << 16;
 VAR_10 = FUNC_0(VAR_7->base_addr + VAR_2 + 3);

 FUNC_1(VAR_4, VAR_7->base_addr + VAR_1);
 VAR_11 = FUNC_0(VAR_7->base_addr + VAR_2);
 VAR_11 += FUNC_0(VAR_7->base_addr + VAR_2 + 1) << 8;
 VAR_11 += FUNC_0(VAR_7->base_addr + VAR_2 + 2) << 16;
 VAR_12 = FUNC_0(VAR_7->base_addr + VAR_2 + 3);

 FUNC_1(VAR_0, VAR_7->base_addr + VAR_1);
 VAR_13 = FUNC_0(VAR_7->base_addr + VAR_2);
 VAR_13 += FUNC_0(VAR_7->base_addr + VAR_2 + 1) << 8;
 VAR_14 = FUNC_0(VAR_7->base_addr + VAR_2 + 2);
 VAR_15 = FUNC_0(VAR_7->base_addr + VAR_2 + 3);

 FUNC_1(VAR_6, VAR_7->base_addr + VAR_1);
 VAR_16 = FUNC_0(VAR_7->base_addr + VAR_2);
 VAR_16 += FUNC_0(VAR_7->base_addr + VAR_2 + 1) << 8;
 VAR_17 = FUNC_0(VAR_7->base_addr + VAR_2 + 2);
 VAR_17 += FUNC_0(VAR_7->base_addr + VAR_2 + 3) << 8;

 FUNC_1(VAR_3, VAR_7->base_addr + VAR_1);
 VAR_18 = FUNC_0(VAR_7->base_addr + VAR_2);
 VAR_19 = FUNC_0(VAR_7->base_addr + VAR_2 + 1);
 VAR_20 = FUNC_0(VAR_7->base_addr + VAR_2 + 2);

 if (VAR_8) {
  VAR_7->stats.rx_packets += VAR_11;
  VAR_7->stats.rx_errors += VAR_12 + VAR_14 + VAR_15;
  VAR_7->stats.tx_packets += VAR_9;
  VAR_7->stats.tx_errors += VAR_10 + VAR_20;
  VAR_7->stats.collisions += VAR_16
   + VAR_17 + VAR_18 + VAR_19;

  VAR_7->stats.rx_over_errors += VAR_12;
  VAR_7->stats.rx_crc_errors += VAR_14;
  VAR_7->stats.rx_frame_errors += VAR_15;

  VAR_7->stats.tx_aborted_errors += VAR_10;
  VAR_7->stats.tx_carrier_errors += VAR_20;
 }

}
