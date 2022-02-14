
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
typedef void* u32 ;
struct u64_stats_sync {int dummy; } ;
struct net_device {int num_tx_queues; int stats; } ;
struct ethtool_stats {int dummy; } ;
struct bcm_sysport_tx_ring {void* bytes; void* packets; } ;
struct bcm_sysport_stats64 {void* tx_packets; void* tx_bytes; } ;
struct bcm_sysport_stats {scalar_t__ type; int stat_sizeof; int stat_offset; } ;
struct bcm_sysport_priv {struct bcm_sysport_tx_ring* tx_rings; scalar_t__ is_lite; struct u64_stats_sync syncp; struct bcm_sysport_stats64 stats64; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*,int ) ;
 struct bcm_sysport_stats* VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct bcm_sysport_priv*) ;
 int FUNC_3 (struct bcm_sysport_priv*,void**,void**) ;
 struct bcm_sysport_priv* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 unsigned int FUNC_6 (struct u64_stats_sync*) ;
 scalar_t__ FUNC_7 (struct u64_stats_sync*,unsigned int) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_6,
      struct ethtool_stats *VAR_7, u64 *VAR_8)
{
 struct bcm_sysport_priv *VAR_9 = FUNC_4(VAR_6);
 struct bcm_sysport_stats64 *VAR_10 = &VAR_9->stats64;
 struct u64_stats_sync *VAR_11 = &VAR_9->syncp;
 struct bcm_sysport_tx_ring *VAR_12;
 u64 VAR_13 = 0, VAR_14 = 0;
 unsigned int VAR_15;
 int VAR_16, VAR_17;

 if (FUNC_5(VAR_6)) {
  FUNC_2(VAR_9);
  FUNC_3(VAR_9, &VAR_13, &VAR_14);
  VAR_10->tx_bytes = VAR_13;
  VAR_10->tx_packets = VAR_14;
 }

 for (VAR_16 = 0, VAR_17 = 0; VAR_16 < VAR_0; VAR_16++) {
  const struct bcm_sysport_stats *VAR_18;
  char *VAR_19;

  VAR_18 = &VAR_5[VAR_16];
  if (VAR_18->type == VAR_1)
   VAR_19 = (char *)&VAR_6->stats;
  else if (VAR_18->type == VAR_2)
   VAR_19 = (char *)VAR_10;
  else
   VAR_19 = (char *)VAR_9;

  if (VAR_9->is_lite && !FUNC_1(VAR_18->type))
   continue;
  VAR_19 += VAR_18->stat_offset;

  if (VAR_18->stat_sizeof == sizeof(u64) &&
      VAR_18->type == VAR_2) {
   do {
    VAR_15 = FUNC_6(VAR_11);
    VAR_8[VAR_16] = *(u64 *)VAR_19;
   } while (FUNC_7(VAR_11, VAR_15));
  } else
   VAR_8[VAR_16] = *(u32 *)VAR_19;
  VAR_17++;
 }






 VAR_17 = FUNC_0(VAR_6, VAR_3) -
     VAR_6->num_tx_queues * VAR_4;

 for (VAR_16 = 0; VAR_16 < VAR_6->num_tx_queues; VAR_16++) {
  VAR_12 = &VAR_9->tx_rings[VAR_16];
  VAR_8[VAR_17] = VAR_12->packets;
  VAR_17++;
  VAR_8[VAR_17] = VAR_12->bytes;
  VAR_17++;
 }
}
