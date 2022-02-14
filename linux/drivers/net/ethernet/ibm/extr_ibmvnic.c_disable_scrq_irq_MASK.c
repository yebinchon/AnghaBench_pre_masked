
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibmvnic_sub_crq_queue {int hw_irq; } ;
struct ibmvnic_adapter {TYPE_1__* vdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int unit_address; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int ,unsigned long) ;
 unsigned long FUNC_1 (int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct ibmvnic_adapter *VAR_2,
       struct ibmvnic_sub_crq_queue *VAR_3)
{
 struct device *VAR_4 = &VAR_2->vdev->dev;
 unsigned long VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_2->vdev->unit_address,
    VAR_0, VAR_3->hw_irq, 0, 0);
 if (VAR_5)
  FUNC_0(VAR_4, "Couldn't disable scrq irq 0x%lx. rc=%ld\n",
   VAR_3->hw_irq, VAR_5);
 return VAR_5;
}
