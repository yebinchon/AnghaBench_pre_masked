
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int max_qps; } ;
struct hinic_hwdev {TYPE_1__ nic_cap; } ;
struct hinic_dev {struct hinic_hwdev* hwdev; } ;
struct ethtool_channels {scalar_t__ combined_count; scalar_t__ other_count; void* tx_count; void* rx_count; scalar_t__ max_combined; scalar_t__ max_other; int max_tx; int max_rx; } ;


 void* FUNC_0 (struct hinic_hwdev*) ;
 struct hinic_dev* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0,
          struct ethtool_channels *VAR_1)
{
 struct hinic_dev *VAR_2 = FUNC_1(VAR_0);
 struct hinic_hwdev *VAR_3 = VAR_2->hwdev;

 VAR_1->max_rx = VAR_3->nic_cap.max_qps;
 VAR_1->max_tx = VAR_3->nic_cap.max_qps;
 VAR_1->max_other = 0;
 VAR_1->max_combined = 0;
 VAR_1->rx_count = FUNC_0(VAR_3);
 VAR_1->tx_count = FUNC_0(VAR_3);
 VAR_1->other_count = 0;
 VAR_1->combined_count = 0;
}
