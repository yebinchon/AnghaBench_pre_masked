
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {long code; } ;
struct TYPE_6__ {int * mac_addr; TYPE_2__ rc; } ;
union ibmvnic_crq {TYPE_3__ change_mac_addr_rsp; } ;
struct net_device {int dev_addr; } ;
struct ibmvnic_adapter {int fw_done; TYPE_1__* vdev; struct net_device* netdev; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*,char*,long) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(union ibmvnic_crq *VAR_0,
     struct ibmvnic_adapter *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->netdev;
 struct device *VAR_3 = &VAR_1->vdev->dev;
 long VAR_4;

 VAR_4 = VAR_0->change_mac_addr_rsp.rc.code;
 if (VAR_4) {
  FUNC_1(VAR_3, "Error %ld in CHANGE_MAC_ADDR_RSP\n", VAR_4);
  goto out;
 }
 FUNC_2(VAR_2->dev_addr,
   &VAR_0->change_mac_addr_rsp.mac_addr[0]);
out:
 FUNC_0(&VAR_1->fw_done);
 return VAR_4;
}
