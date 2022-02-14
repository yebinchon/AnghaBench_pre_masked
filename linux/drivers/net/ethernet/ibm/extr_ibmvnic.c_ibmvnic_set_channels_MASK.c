
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ rx_queues; scalar_t__ tx_queues; } ;
struct ibmvnic_adapter {scalar_t__ req_rx_queues; scalar_t__ req_tx_queues; TYPE_1__ desired; } ;
struct ethtool_channels {scalar_t__ rx_count; scalar_t__ tx_count; } ;


 int FUNC_0 (struct net_device*,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 struct ibmvnic_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct ibmvnic_adapter*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0,
    struct ethtool_channels *VAR_1)
{
 struct ibmvnic_adapter *VAR_2 = FUNC_1(VAR_0);
 int VAR_3;

 VAR_3 = 0;
 VAR_2->desired.rx_queues = VAR_1->rx_count;
 VAR_2->desired.tx_queues = VAR_1->tx_count;

 VAR_3 = FUNC_2(VAR_2);

 if (!VAR_3 &&
     (VAR_2->req_rx_queues != VAR_1->rx_count ||
      VAR_2->req_tx_queues != VAR_1->tx_count))
  FUNC_0(VAR_0,
       "Could not match full channels request. Requested: RX %d, TX %d; Allowed: RX %llu, TX %llu\n",
       VAR_1->rx_count, VAR_1->tx_count,
       VAR_2->req_rx_queues, VAR_2->req_tx_queues);
 return VAR_3;

}
