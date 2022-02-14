
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ibmvnic_adapter {int req_tx_queues; int req_rx_queues; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ibmvnic_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_5, int VAR_6)
{
 struct ibmvnic_adapter *VAR_7 = FUNC_1(VAR_5);

 switch (VAR_6) {
 case 128:
  return FUNC_0(VAR_4) +
         VAR_7->req_tx_queues * VAR_2 +
         VAR_7->req_rx_queues * VAR_1;
 case 129:
  return FUNC_0(VAR_3);
 default:
  return -VAR_0;
 }
}
