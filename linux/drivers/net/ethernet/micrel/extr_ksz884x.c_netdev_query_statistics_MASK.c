
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device_stats {scalar_t__ tx_window_errors; scalar_t__ rx_frame_errors; scalar_t__ rx_crc_errors; scalar_t__ rx_length_errors; scalar_t__ collisions; scalar_t__ multicast; int tx_errors; int rx_errors; } ;
struct net_device {struct net_device_stats stats; } ;
struct ksz_port_mib {scalar_t__* counter; } ;
struct ksz_port {int first_port; int mib_port_cnt; int * counter; } ;
struct ksz_hw {struct ksz_port_mib* port_mib; } ;
struct dev_priv {TYPE_1__* adapter; struct ksz_port port; } ;
struct TYPE_2__ {struct ksz_hw hw; } ;


 size_t VAR_0 ;
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
 struct dev_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static struct net_device_stats *FUNC_1(struct net_device *VAR_12)
{
 struct dev_priv *VAR_13 = FUNC_0(VAR_12);
 struct ksz_port *VAR_14 = &VAR_13->port;
 struct ksz_hw *VAR_15 = &VAR_13->adapter->hw;
 struct ksz_port_mib *VAR_16;
 int VAR_17;
 int VAR_18;

 VAR_12->stats.rx_errors = VAR_14->counter[VAR_10];
 VAR_12->stats.tx_errors = VAR_14->counter[VAR_11];


 VAR_12->stats.multicast = 0;
 VAR_12->stats.collisions = 0;
 VAR_12->stats.rx_length_errors = 0;
 VAR_12->stats.rx_crc_errors = 0;
 VAR_12->stats.rx_frame_errors = 0;
 VAR_12->stats.tx_window_errors = 0;

 for (VAR_17 = 0, VAR_18 = VAR_14->first_port; VAR_17 < VAR_14->mib_port_cnt; VAR_17++, VAR_18++) {
  VAR_16 = &VAR_15->port_mib[VAR_18];

  VAR_12->stats.multicast += (unsigned long)
   VAR_16->counter[VAR_4];

  VAR_12->stats.collisions += (unsigned long)
   VAR_16->counter[VAR_9];

  VAR_12->stats.rx_length_errors += (unsigned long)(
   VAR_16->counter[VAR_7] +
   VAR_16->counter[VAR_2] +
   VAR_16->counter[VAR_5] +
   VAR_16->counter[VAR_3]);
  VAR_12->stats.rx_crc_errors += (unsigned long)
   VAR_16->counter[VAR_1];
  VAR_12->stats.rx_frame_errors += (unsigned long)(
   VAR_16->counter[VAR_0] +
   VAR_16->counter[VAR_6]);

  VAR_12->stats.tx_window_errors += (unsigned long)
   VAR_16->counter[VAR_8];
 }

 return &VAR_12->stats;
}
