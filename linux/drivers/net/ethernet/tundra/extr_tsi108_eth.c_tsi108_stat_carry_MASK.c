
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int collisions; int tx_aborted_errors; int tx_packets; int tx_bytes; int rx_missed_errors; int rx_length_errors; int rx_frame_errors; int multicast; int rx_packets; int rx_bytes; } ;
struct tsi108_prv_data {int misclock; int tx_pause_drop; TYPE_1__ stats; int tx_coll_abort; int rx_long_fcs; int rx_short_fcs; int rx_overruns; int rx_underruns; int rx_fcs; } ;
struct net_device {int dummy; } ;


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
 int VAR_20 ;
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 struct tsi108_prv_data* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,int ,int ,int *) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_36)
{
 struct tsi108_prv_data *VAR_37 = FUNC_2(VAR_36);
 unsigned long VAR_38;
 u32 VAR_39, VAR_40;

 FUNC_3(&VAR_37->misclock, VAR_38);

 VAR_39 = FUNC_0(VAR_0);
 VAR_40 = FUNC_0(VAR_12);

 FUNC_1(VAR_0, VAR_39);
 FUNC_1(VAR_12, VAR_40);

 FUNC_5(VAR_39, VAR_2,
         VAR_20, &VAR_37->stats.rx_bytes);

 FUNC_5(VAR_39, VAR_10,
         VAR_28,
         &VAR_37->stats.rx_packets);

 FUNC_5(VAR_39, VAR_4,
         VAR_22, &VAR_37->rx_fcs);

 FUNC_5(VAR_39, VAR_9,
         VAR_27,
         &VAR_37->stats.multicast);

 FUNC_5(VAR_39, VAR_1,
         VAR_19,
         &VAR_37->stats.rx_frame_errors);

 FUNC_5(VAR_39, VAR_8,
         VAR_26,
         &VAR_37->stats.rx_length_errors);

 FUNC_5(VAR_39, VAR_11,
         VAR_29, &VAR_37->rx_underruns);

 FUNC_5(VAR_39, VAR_7,
         VAR_25, &VAR_37->rx_overruns);

 FUNC_5(VAR_39, VAR_5,
         VAR_23, &VAR_37->rx_short_fcs);

 FUNC_5(VAR_39, VAR_6,
         VAR_24, &VAR_37->rx_long_fcs);

 FUNC_5(VAR_39, VAR_3,
         VAR_21,
         &VAR_37->stats.rx_missed_errors);

 FUNC_5(VAR_40, VAR_13,
         VAR_30, &VAR_37->stats.tx_bytes);

 FUNC_5(VAR_40, VAR_17,
         VAR_34,
         &VAR_37->stats.tx_packets);

 FUNC_5(VAR_40, VAR_15,
         VAR_32,
         &VAR_37->stats.tx_aborted_errors);

 FUNC_5(VAR_40, VAR_14,
         VAR_31, &VAR_37->tx_coll_abort);

 FUNC_5(VAR_40, VAR_18,
         VAR_35,
         &VAR_37->stats.collisions);

 FUNC_5(VAR_40, VAR_16,
         VAR_33,
         &VAR_37->tx_pause_drop);

 FUNC_4(&VAR_37->misclock, VAR_38);
}
