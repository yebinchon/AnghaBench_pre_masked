
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ibmvnic_adapter {int req_rx_queues; int req_tx_queues; } ;


 int FUNC_0 (struct net_device*,char*,int ,int ) ;
 int FUNC_1 (struct net_device*,char*) ;
 struct ibmvnic_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct net_device*,int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_0)
{
 struct ibmvnic_adapter *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 FUNC_0(VAR_0, "Setting real tx/rx queues (%llx/%llx)\n",
     VAR_1->req_tx_queues, VAR_1->req_rx_queues);

 VAR_2 = FUNC_4(VAR_0, VAR_1->req_tx_queues);
 if (VAR_2) {
  FUNC_1(VAR_0, "failed to set the number of tx queues\n");
  return VAR_2;
 }

 VAR_2 = FUNC_3(VAR_0, VAR_1->req_rx_queues);
 if (VAR_2)
  FUNC_1(VAR_0, "failed to set the number of rx queues\n");

 return VAR_2;
}
