
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;
struct cpsw_common {int rx_ch_num; int tx_ch_num; TYPE_2__* txv; TYPE_1__* rxv; scalar_t__ hw_stats; } ;
struct cpdma_chan_stats {int dummy; } ;
struct TYPE_8__ {int stat_offset; } ;
struct TYPE_7__ {scalar_t__ stat_offset; } ;
struct TYPE_6__ {int ch; } ;
struct TYPE_5__ {int ch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct cpdma_chan_stats*) ;
 TYPE_4__* VAR_2 ;
 TYPE_3__* VAR_3 ;
 struct cpsw_common* FUNC_1 (struct net_device*) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(struct net_device *VAR_4,
       struct ethtool_stats *VAR_5, u64 *VAR_6)
{
 u8 *VAR_7;
 struct cpsw_common *VAR_8 = FUNC_1(VAR_4);
 struct cpdma_chan_stats VAR_9;
 int VAR_10, VAR_11, VAR_12;


 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++)
  VAR_6[VAR_11] = FUNC_2(VAR_8->hw_stats +
    VAR_3[VAR_11].stat_offset);

 for (VAR_12 = 0; VAR_12 < VAR_8->rx_ch_num; VAR_12++) {
  FUNC_0(VAR_8->rxv[VAR_12].ch, &VAR_9);
  for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++, VAR_11++) {
   VAR_7 = (u8 *)&VAR_9 +
    VAR_2[VAR_10].stat_offset;
   VAR_6[VAR_11] = *(u32 *)VAR_7;
  }
 }

 for (VAR_12 = 0; VAR_12 < VAR_8->tx_ch_num; VAR_12++) {
  FUNC_0(VAR_8->txv[VAR_12].ch, &VAR_9);
  for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++, VAR_11++) {
   VAR_7 = (u8 *)&VAR_9 +
    VAR_2[VAR_10].stat_offset;
   VAR_6[VAR_11] = *(u32 *)VAR_7;
  }
 }
}
