
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct sockaddr {int sa_data; } ;
struct net_device {int dev_addr; } ;
struct ibmveth_adapter {int netdev; TYPE_1__* vdev; } ;
struct TYPE_2__ {int unit_address; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 struct ibmveth_adapter* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1, void *VAR_2)
{
 struct ibmveth_adapter *VAR_3 = FUNC_5(VAR_1);
 struct sockaddr *VAR_4 = VAR_2;
 u64 VAR_5;
 int VAR_6;

 if (!FUNC_3(VAR_4->sa_data))
  return -VAR_0;

 VAR_5 = FUNC_2(VAR_4->sa_data);
 VAR_6 = FUNC_1(VAR_3->vdev->unit_address, VAR_5);
 if (VAR_6) {
  FUNC_4(VAR_3->netdev, "h_change_logical_lan_mac failed with rc=%d\n", VAR_6);
  return VAR_6;
 }

 FUNC_0(VAR_1->dev_addr, VAR_4->sa_data);

 return 0;
}
