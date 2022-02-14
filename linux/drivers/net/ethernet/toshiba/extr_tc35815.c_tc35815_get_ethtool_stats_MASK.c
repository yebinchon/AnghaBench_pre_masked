
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int tx_underrun; int rx_ints; int tx_ints; int max_tx_qlen; } ;
struct tc35815_local {TYPE_1__ lstats; } ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;


 struct tc35815_local* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0, struct ethtool_stats *VAR_1, u64 *VAR_2)
{
 struct tc35815_local *VAR_3 = FUNC_0(VAR_0);
 VAR_2[0] = VAR_3->lstats.max_tx_qlen;
 VAR_2[1] = VAR_3->lstats.tx_ints;
 VAR_2[2] = VAR_3->lstats.rx_ints;
 VAR_2[3] = VAR_3->lstats.tx_underrun;
}
