
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int rx_time_us; int rx_packets; int tx_time_us; int tx_packets; } ;
struct TYPE_7__ {TYPE_2__ data; } ;
struct TYPE_8__ {TYPE_3__ normal; scalar_t__ flags; } ;
struct TYPE_5__ {int revision_id; } ;
struct netxen_adapter {scalar_t__ is_up; TYPE_4__ coal; TYPE_1__ ahw; } ;
struct net_device {int dummy; } ;
struct ethtool_coalesce {int rx_coalesce_usecs; int rx_max_coalesced_frames; int tx_coalesce_usecs; int tx_max_coalesced_frames; scalar_t__ tx_max_coalesced_frames_high; scalar_t__ tx_coalesce_usecs_high; scalar_t__ rx_max_coalesced_frames_high; scalar_t__ rx_coalesce_usecs_high; scalar_t__ pkt_rate_high; scalar_t__ tx_max_coalesced_frames_low; scalar_t__ tx_coalesce_usecs_low; scalar_t__ rx_max_coalesced_frames_low; scalar_t__ rx_coalesce_usecs_low; scalar_t__ pkt_rate_low; scalar_t__ use_adaptive_tx_coalesce; scalar_t__ use_adaptive_rx_coalesce; scalar_t__ stats_block_coalesce_usecs; scalar_t__ tx_max_coalesced_frames_irq; scalar_t__ tx_coalesce_usecs_irq; scalar_t__ rx_max_coalesced_frames_irq; scalar_t__ rx_coalesce_usecs_irq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 struct netxen_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct netxen_adapter*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_5,
   struct ethtool_coalesce *VAR_6)
{
 struct netxen_adapter *VAR_7 = FUNC_1(VAR_5);

 if (!FUNC_0(VAR_7->ahw.revision_id))
  return -VAR_0;

 if (VAR_7->is_up != VAR_1)
  return -VAR_0;





 if (VAR_6->rx_coalesce_usecs > 0xffff ||
  VAR_6->rx_max_coalesced_frames > 0xffff ||
  VAR_6->tx_coalesce_usecs > 0xffff ||
  VAR_6->tx_max_coalesced_frames > 0xffff ||
  VAR_6->rx_coalesce_usecs_irq ||
  VAR_6->rx_max_coalesced_frames_irq ||
  VAR_6->tx_coalesce_usecs_irq ||
  VAR_6->tx_max_coalesced_frames_irq ||
  VAR_6->stats_block_coalesce_usecs ||
  VAR_6->use_adaptive_rx_coalesce ||
  VAR_6->use_adaptive_tx_coalesce ||
  VAR_6->pkt_rate_low ||
  VAR_6->rx_coalesce_usecs_low ||
  VAR_6->rx_max_coalesced_frames_low ||
  VAR_6->tx_coalesce_usecs_low ||
  VAR_6->tx_max_coalesced_frames_low ||
  VAR_6->pkt_rate_high ||
  VAR_6->rx_coalesce_usecs_high ||
  VAR_6->rx_max_coalesced_frames_high ||
  VAR_6->tx_coalesce_usecs_high ||
  VAR_6->tx_max_coalesced_frames_high)
  return -VAR_0;

 if (!VAR_6->rx_coalesce_usecs ||
  !VAR_6->rx_max_coalesced_frames) {
  VAR_7->coal.flags = VAR_4;
  VAR_7->coal.normal.data.rx_time_us =
   VAR_3;
  VAR_7->coal.normal.data.rx_packets =
   VAR_2;
 } else {
  VAR_7->coal.flags = 0;
  VAR_7->coal.normal.data.rx_time_us =
  VAR_6->rx_coalesce_usecs;
  VAR_7->coal.normal.data.rx_packets =
  VAR_6->rx_max_coalesced_frames;
 }
 VAR_7->coal.normal.data.tx_time_us = VAR_6->tx_coalesce_usecs;
 VAR_7->coal.normal.data.tx_packets =
 VAR_6->tx_max_coalesced_frames;

 FUNC_2(VAR_7);

 return 0;
}
