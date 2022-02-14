
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_nic_intr_coalesce {int rx_packets; int rx_time_us; int flag; } ;
struct qlcnic_adapter {int netdev; TYPE_1__* ahw; } ;
struct ethtool_coalesce {int rx_max_coalesced_frames; int rx_coalesce_usecs; } ;
struct TYPE_2__ {struct qlcnic_nic_intr_coalesce coal; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct qlcnic_adapter*) ;

int FUNC_2(struct qlcnic_adapter *VAR_1,
         struct ethtool_coalesce *VAR_2)
{
 struct qlcnic_nic_intr_coalesce *VAR_3 = &VAR_1->ahw->coal;
 int VAR_4;

 VAR_3->flag = VAR_0;
 VAR_3->rx_time_us = VAR_2->rx_coalesce_usecs;
 VAR_3->rx_packets = VAR_2->rx_max_coalesced_frames;

 VAR_4 = FUNC_1(VAR_1);

 if (VAR_4)
  FUNC_0(VAR_1->netdev,
      "Failed to set Rx coalescing parameters\n");

 return VAR_4;
}
