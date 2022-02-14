
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct xgbe_prv_data {int isr_as_tasklet; int irq_count; int channel_irq_count; int * channel_irq; int dev; void* an_irq; void* i2c_irq; void* ecc_irq; void* dev_irq; TYPE_1__* pcidev; } ;
struct TYPE_3__ {scalar_t__ msi_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct xgbe_prv_data*) ;
 int FUNC_3 (TYPE_1__*,int,int,int) ;
 void* FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (struct xgbe_prv_data*) ;

__attribute__((used)) static int FUNC_6(struct xgbe_prv_data *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_5(VAR_2);
 if (!VAR_3)
  goto out;

 VAR_3 = FUNC_3(VAR_2->pcidev, 1, 1,
        VAR_0 | VAR_1);
 if (VAR_3 < 0) {
  FUNC_1(VAR_2->dev, "single IRQ enablement failed\n");
  return VAR_3;
 }

 VAR_2->isr_as_tasklet = VAR_2->pcidev->msi_enabled ? 1 : 0;
 VAR_2->irq_count = 1;
 VAR_2->channel_irq_count = 1;

 VAR_2->dev_irq = FUNC_4(VAR_2->pcidev, 0);
 VAR_2->ecc_irq = FUNC_4(VAR_2->pcidev, 0);
 VAR_2->i2c_irq = FUNC_4(VAR_2->pcidev, 0);
 VAR_2->an_irq = FUNC_4(VAR_2->pcidev, 0);

 if (FUNC_2(VAR_2))
  FUNC_0(VAR_2->dev, "single %s interrupt enabled\n",
   VAR_2->pcidev->msi_enabled ? "MSI" : "legacy");

out:
 if (FUNC_2(VAR_2)) {
  unsigned int VAR_4;

  FUNC_0(VAR_2->dev, " dev irq=%d\n", VAR_2->dev_irq);
  FUNC_0(VAR_2->dev, " ecc irq=%d\n", VAR_2->ecc_irq);
  FUNC_0(VAR_2->dev, " i2c irq=%d\n", VAR_2->i2c_irq);
  FUNC_0(VAR_2->dev, "  an irq=%d\n", VAR_2->an_irq);
  for (VAR_4 = 0; VAR_4 < VAR_2->channel_irq_count; VAR_4++)
   FUNC_0(VAR_2->dev, " dma%u irq=%d\n",
    VAR_4, VAR_2->channel_irq[VAR_4]);
 }

 return 0;
}
