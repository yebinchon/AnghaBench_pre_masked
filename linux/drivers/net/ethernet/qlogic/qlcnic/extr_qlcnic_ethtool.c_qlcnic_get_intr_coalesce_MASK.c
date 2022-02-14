
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_adapter {scalar_t__ is_up; TYPE_2__* ahw; } ;
struct net_device {int dummy; } ;
struct ethtool_coalesce {int tx_max_coalesced_frames; int tx_coalesce_usecs; int rx_max_coalesced_frames; int rx_coalesce_usecs; } ;
struct TYPE_3__ {int tx_packets; int tx_time_us; int rx_packets; int rx_time_us; } ;
struct TYPE_4__ {TYPE_1__ coal; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct qlcnic_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_2,
   struct ethtool_coalesce *VAR_3)
{
 struct qlcnic_adapter *VAR_4 = FUNC_0(VAR_2);

 if (VAR_4->is_up != VAR_1)
  return -VAR_0;

 VAR_3->rx_coalesce_usecs = VAR_4->ahw->coal.rx_time_us;
 VAR_3->rx_max_coalesced_frames = VAR_4->ahw->coal.rx_packets;
 VAR_3->tx_coalesce_usecs = VAR_4->ahw->coal.tx_time_us;
 VAR_3->tx_max_coalesced_frames = VAR_4->ahw->coal.tx_packets;

 return 0;
}
