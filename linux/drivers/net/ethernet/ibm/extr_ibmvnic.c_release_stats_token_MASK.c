
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibmvnic_statistics {int dummy; } ;
struct ibmvnic_adapter {int stats_token; TYPE_1__* vdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int ,int,int ) ;

__attribute__((used)) static void FUNC_1(struct ibmvnic_adapter *VAR_1)
{
 struct device *VAR_2 = &VAR_1->vdev->dev;

 if (!VAR_1->stats_token)
  return;

 FUNC_0(VAR_2, VAR_1->stats_token,
    sizeof(struct ibmvnic_statistics),
    VAR_0);
 VAR_1->stats_token = 0;
}
