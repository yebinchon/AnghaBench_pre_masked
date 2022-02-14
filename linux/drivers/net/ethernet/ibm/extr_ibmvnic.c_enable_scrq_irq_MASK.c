
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_desc {int irq_data; } ;
struct irq_chip {int (* irq_eoi ) (int *) ;} ;
struct ibmvnic_sub_crq_queue {int hw_irq; int irq; } ;
struct ibmvnic_adapter {scalar_t__ reset_reason; TYPE_1__* vdev; int resetting; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int unit_address; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct device*,char*,int,...) ;
 struct irq_chip* FUNC_1 (struct irq_desc*) ;
 struct irq_desc* FUNC_2 (int ) ;
 unsigned long FUNC_3 (int ,int ,int ,int,int ,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct ibmvnic_adapter *VAR_3,
      struct ibmvnic_sub_crq_queue *VAR_4)
{
 struct device *VAR_5 = &VAR_3->vdev->dev;
 unsigned long VAR_6;

 if (VAR_4->hw_irq > 0x100000000ULL) {
  FUNC_0(VAR_5, "bad hw_irq = %lx\n", VAR_4->hw_irq);
  return 1;
 }

 if (FUNC_5(0, &VAR_3->resetting) &&
     VAR_3->reset_reason == VAR_2) {
  struct irq_desc *VAR_7 = FUNC_2(VAR_4->irq);
  struct irq_chip *VAR_8 = FUNC_1(VAR_7);

  VAR_8->irq_eoi(&VAR_7->irq_data);
 }

 VAR_6 = FUNC_3(VAR_1, VAR_3->vdev->unit_address,
    VAR_0, VAR_4->hw_irq, 0, 0);
 if (VAR_6)
  FUNC_0(VAR_5, "Couldn't enable scrq irq 0x%lx. rc=%ld\n",
   VAR_4->hw_irq, VAR_6);
 return VAR_6;
}
