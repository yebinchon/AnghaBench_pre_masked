
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct hns3_nic_priv {TYPE_2__* ring_data; struct hnae3_handle* ae_handle; } ;
struct TYPE_6__ {int num_tqps; } ;
struct hnae3_handle {TYPE_3__ kinfo; } ;
struct ethtool_ringparam {int rx_pending; int tx_pending; void* rx_max_pending; void* tx_max_pending; } ;
struct TYPE_5__ {TYPE_1__* ring; } ;
struct TYPE_4__ {int desc_num; } ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,char*) ;
 struct hns3_nic_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1,
          struct ethtool_ringparam *VAR_2)
{
 struct hns3_nic_priv *VAR_3 = FUNC_2(VAR_1);
 struct hnae3_handle *VAR_4 = VAR_3->ae_handle;
 int VAR_5 = VAR_4->kinfo.num_tqps;

 if (FUNC_0(VAR_1)) {
  FUNC_1(VAR_1, "dev resetting!");
  return;
 }

 VAR_2->tx_max_pending = VAR_0;
 VAR_2->rx_max_pending = VAR_0;

 VAR_2->tx_pending = VAR_3->ring_data[0].ring->desc_num;
 VAR_2->rx_pending = VAR_3->ring_data[VAR_5].ring->desc_num;
}
