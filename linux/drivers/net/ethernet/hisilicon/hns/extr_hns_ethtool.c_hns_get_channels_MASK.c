
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct hns_nic_priv {TYPE_1__* ae_handle; } ;
struct ethtool_channels {int tx_count; int rx_count; int max_tx; int max_rx; } ;
struct TYPE_2__ {int q_num; } ;


 struct hns_nic_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void
FUNC_1(struct net_device *VAR_0, struct ethtool_channels *VAR_1)
{
 struct hns_nic_priv *VAR_2 = FUNC_0(VAR_0);

 VAR_1->max_rx = VAR_2->ae_handle->q_num;
 VAR_1->max_tx = VAR_2->ae_handle->q_num;

 VAR_1->rx_count = VAR_2->ae_handle->q_num;
 VAR_1->tx_count = VAR_2->ae_handle->q_num;
}
