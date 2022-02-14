
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibmvnic_statistics {int dummy; } ;
struct ibmvnic_adapter {int netdev; int stats_token; int stats; TYPE_1__* vdev; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,int *,int,int ) ;
 scalar_t__ FUNC_2 (struct device*,int ) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct ibmvnic_adapter *VAR_1)
{
 struct device *VAR_2 = &VAR_1->vdev->dev;
 dma_addr_t VAR_3;

 VAR_3 = FUNC_1(VAR_2, &VAR_1->stats,
         sizeof(struct ibmvnic_statistics),
         VAR_0);
 if (FUNC_2(VAR_2, VAR_3)) {
  FUNC_0(VAR_2, "Couldn't map stats buffer\n");
  return -1;
 }

 VAR_1->stats_token = VAR_3;
 FUNC_3(VAR_1->netdev, "Stats token initialized (%llx)\n", VAR_3);
 return 0;
}
