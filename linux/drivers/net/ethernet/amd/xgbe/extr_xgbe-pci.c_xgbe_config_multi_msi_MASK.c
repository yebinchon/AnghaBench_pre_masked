
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct xgbe_prv_data {int isr_as_tasklet; int irq_count; unsigned int channel_irq_count; int per_channel_irq; TYPE_1__* pcidev; int dev; int channel_irq_mode; void** channel_irq; void* an_irq; void* i2c_irq; void* ecc_irq; void* dev_irq; int tx_ring_count; int rx_ring_count; } ;
struct TYPE_3__ {scalar_t__ msix_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct xgbe_prv_data*) ;
 int FUNC_4 (TYPE_1__*,int ,unsigned int,int) ;
 void* FUNC_5 (TYPE_1__*,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct xgbe_prv_data *VAR_5)
{
 unsigned int VAR_6;
 unsigned int VAR_7, VAR_8;
 int VAR_9;

 VAR_6 = VAR_3;
 VAR_6 += FUNC_2(VAR_5->rx_ring_count,
       VAR_5->tx_ring_count);

 VAR_9 = FUNC_4(VAR_5->pcidev, VAR_4,
        VAR_6, VAR_0 | VAR_1);
 if (VAR_9 < 0) {
  FUNC_1(VAR_5->dev, "multi MSI/MSI-X enablement failed\n");
  return VAR_9;
 }

 VAR_5->isr_as_tasklet = 1;
 VAR_5->irq_count = VAR_9;

 VAR_5->dev_irq = FUNC_5(VAR_5->pcidev, 0);
 VAR_5->ecc_irq = FUNC_5(VAR_5->pcidev, 1);
 VAR_5->i2c_irq = FUNC_5(VAR_5->pcidev, 2);
 VAR_5->an_irq = FUNC_5(VAR_5->pcidev, 3);

 for (VAR_7 = VAR_3, VAR_8 = 0; VAR_7 < VAR_9; VAR_7++, VAR_8++)
  VAR_5->channel_irq[VAR_8] = FUNC_5(VAR_5->pcidev, VAR_7);
 VAR_5->channel_irq_count = VAR_8;

 VAR_5->per_channel_irq = 1;
 VAR_5->channel_irq_mode = VAR_2;

 if (FUNC_3(VAR_5))
  FUNC_0(VAR_5->dev, "multi %s interrupts enabled\n",
   VAR_5->pcidev->msix_enabled ? "MSI-X" : "MSI");

 return 0;
}
