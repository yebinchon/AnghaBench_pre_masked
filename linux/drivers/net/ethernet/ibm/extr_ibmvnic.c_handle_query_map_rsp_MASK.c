
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {long code; } ;
struct TYPE_6__ {int free_pages; int tot_pages; int page_size; TYPE_2__ rc; } ;
union ibmvnic_crq {TYPE_3__ query_map_rsp; } ;
struct net_device {int dummy; } ;
struct ibmvnic_adapter {TYPE_1__* vdev; struct net_device* netdev; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device dev; } ;


 int FUNC_0 (struct device*,char*,long) ;
 int FUNC_1 (struct net_device*,char*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(union ibmvnic_crq *VAR_0,
     struct ibmvnic_adapter *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->netdev;
 struct device *VAR_3 = &VAR_1->vdev->dev;
 long VAR_4;

 VAR_4 = VAR_0->query_map_rsp.rc.code;
 if (VAR_4) {
  FUNC_0(VAR_3, "Error %ld in QUERY_MAP_RSP\n", VAR_4);
  return;
 }
 FUNC_1(VAR_2, "page_size = %d\ntot_pages = %d\nfree_pages = %d\n",
     VAR_0->query_map_rsp.page_size, VAR_0->query_map_rsp.tot_pages,
     VAR_0->query_map_rsp.free_pages);
}
