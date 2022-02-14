
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibmvnic_long_term_buff {int addr; int buff; int size; int map_id; } ;
struct ibmvnic_adapter {scalar_t__ reset_reason; TYPE_1__* vdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct device*,int ,int ,int ) ;
 int FUNC_1 (struct ibmvnic_adapter*,int ) ;

__attribute__((used)) static void FUNC_2(struct ibmvnic_adapter *VAR_2,
    struct ibmvnic_long_term_buff *VAR_3)
{
 struct device *VAR_4 = &VAR_2->vdev->dev;

 if (!VAR_3->buff)
  return;

 if (VAR_2->reset_reason != VAR_0 &&
     VAR_2->reset_reason != VAR_1)
  FUNC_1(VAR_2, VAR_3->map_id);
 FUNC_0(VAR_4, VAR_3->size, VAR_3->buff, VAR_3->addr);
}
