
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct resource {int flags; void* name; int start; int end; } ;
struct TYPE_4__ {TYPE_2__* parent; int dma_parms; int dma_mask; } ;
struct platform_device {TYPE_1__ dev; } ;
struct pci_device_id {int dummy; } ;
struct TYPE_5__ {int dma_parms; int dma_mask; int coherent_dma_mask; } ;
struct pci_dev {TYPE_2__ dev; int irq; } ;
struct bdc_pci {struct platform_device* bdc; TYPE_2__* dev; } ;


 int FUNC_0 (struct resource*) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 struct bdc_pci* FUNC_3 (TYPE_2__*,int,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (struct resource*,int,int) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,int ) ;
 int FUNC_8 (struct pci_dev*,int ) ;
 int FUNC_9 (struct pci_dev*,struct bdc_pci*) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct platform_device*) ;
 int FUNC_12 (struct platform_device*,struct resource*,int) ;
 struct platform_device* FUNC_13 (void*,int ) ;
 int FUNC_14 (struct platform_device*) ;

__attribute__((used)) static int FUNC_15(struct pci_dev *VAR_7, const struct pci_device_id *VAR_8)
{
 struct resource VAR_9[2];
 struct platform_device *VAR_10;
 struct bdc_pci *VAR_11;
 int VAR_12 = -VAR_2;

 VAR_11 = FUNC_3(&VAR_7->dev, sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return -VAR_2;

 VAR_11->dev = &VAR_7->dev;
 VAR_12 = FUNC_6(VAR_7);
 if (VAR_12) {
  FUNC_2(&VAR_7->dev, "failed to enable pci device\n");
  return -VAR_1;
 }
 FUNC_10(VAR_7);

 VAR_10 = FUNC_13(VAR_0, VAR_6);
 if (!VAR_10)
  return -VAR_2;

 FUNC_5(VAR_9, 0x00, sizeof(struct resource) * FUNC_0(VAR_9));
 FUNC_1(VAR_7);

 VAR_9[0].start = FUNC_8(VAR_7, 0);
 VAR_9[0].end = FUNC_7(VAR_7, 0);
 VAR_9[0].name = VAR_0;
 VAR_9[0].flags = VAR_5;

 VAR_9[1].start = VAR_7->irq;
 VAR_9[1].name = VAR_0;
 VAR_9[1].flags = VAR_4;

 VAR_12 = FUNC_12(VAR_10, VAR_9, FUNC_0(VAR_9));
 if (VAR_12) {
  FUNC_2(&VAR_7->dev,
   "couldn't add resources to bdc device\n");
  FUNC_14(VAR_10);
  return VAR_12;
 }

 FUNC_9(VAR_7, VAR_11);

 FUNC_4(&VAR_10->dev, VAR_7->dev.coherent_dma_mask);

 VAR_10->dev.dma_mask = VAR_7->dev.dma_mask;
 VAR_10->dev.dma_parms = VAR_7->dev.dma_parms;
 VAR_10->dev.parent = &VAR_7->dev;
 VAR_11->bdc = VAR_10;

 VAR_12 = FUNC_11(VAR_10);
 if (VAR_12) {
  FUNC_2(&VAR_7->dev, "failed to register bdc device\n");
  FUNC_14(VAR_10);
  return VAR_12;
 }

 return 0;
}
