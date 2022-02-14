
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ rx_entries; scalar_t__ tx_entries; } ;
struct ibmvnic_adapter {scalar_t__ req_rx_add_entries_per_subcrq; scalar_t__ req_tx_entries_per_subcrq; TYPE_1__ desired; } ;
struct ethtool_ringparam {scalar_t__ rx_pending; scalar_t__ tx_pending; } ;


 int FUNC_0 (struct net_device*,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 struct ibmvnic_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct ibmvnic_adapter*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0,
     struct ethtool_ringparam *VAR_1)
{
 struct ibmvnic_adapter *VAR_2 = FUNC_1(VAR_0);
 int VAR_3;

 VAR_3 = 0;
 VAR_2->desired.rx_entries = VAR_1->rx_pending;
 VAR_2->desired.tx_entries = VAR_1->tx_pending;

 VAR_3 = FUNC_2(VAR_2);

 if (!VAR_3 &&
     (VAR_2->req_rx_add_entries_per_subcrq != VAR_1->rx_pending ||
      VAR_2->req_tx_entries_per_subcrq != VAR_1->tx_pending))
  FUNC_0(VAR_0,
       "Could not match full ringsize request. Requested: RX %d, TX %d; Allowed: RX %llu, TX %llu\n",
       VAR_1->rx_pending, VAR_1->tx_pending,
       VAR_2->req_rx_add_entries_per_subcrq,
       VAR_2->req_tx_entries_per_subcrq);
 return VAR_3;
}
