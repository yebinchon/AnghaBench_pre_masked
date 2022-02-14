
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pci_device_id {scalar_t__ driver_data; } ;
struct pci_dev {int dev; int irq; TYPE_1__* bus; } ;
struct alcor_pci_priv {int id; int * dev; int iobase; int irq; struct alcor_dev_cfg* cfg; int parent_pdev; struct pci_dev* pdev; } ;
struct alcor_dev_cfg {int dummy; } ;
struct TYPE_6__ {int pdata_size; struct alcor_pci_priv* platform_data; } ;
struct TYPE_5__ {int self; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct alcor_pci_priv*,int ) ;
 TYPE_2__* VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct alcor_pci_priv*) ;
 int FUNC_3 (struct alcor_pci_priv*,int ,int ) ;
 int FUNC_4 (int *,char*,...) ;
 struct alcor_pci_priv* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ,int ,int ) ;
 int FUNC_8 (int *,int,TYPE_2__*,int,int *,int ,int *) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*,int ) ;
 int FUNC_11 (struct pci_dev*,int) ;
 int FUNC_12 (struct pci_dev*,struct alcor_pci_priv*) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (struct pci_dev*) ;
 int FUNC_15 (struct pci_dev*,int,int ) ;

__attribute__((used)) static int FUNC_16(struct pci_dev *VAR_10,
      const struct pci_device_id *VAR_11)
{
 struct alcor_dev_cfg *VAR_12;
 struct alcor_pci_priv *VAR_13;
 int VAR_14, VAR_15, VAR_16 = 0;

 VAR_12 = (void *)VAR_11->driver_data;

 VAR_14 = FUNC_14(VAR_10);
 if (VAR_14)
  return VAR_14;

 VAR_13 = FUNC_5(&VAR_10->dev, sizeof(*VAR_13), VAR_6);
 if (!VAR_13)
  return -VAR_5;

 VAR_14 = FUNC_7(&VAR_9, 0, 0, VAR_6);
 if (VAR_14 < 0)
  return VAR_14;
 VAR_13->id = VAR_14;

 VAR_13->pdev = VAR_10;
 VAR_13->parent_pdev = VAR_10->bus->self;
 VAR_13->dev = &VAR_10->dev;
 VAR_13->cfg = VAR_12;
 VAR_13->irq = VAR_10->irq;

 VAR_14 = FUNC_10(VAR_10, VAR_3);
 if (VAR_14) {
  FUNC_4(&VAR_10->dev, "Cannot request region\n");
  return -VAR_5;
 }

 if (!(FUNC_11(VAR_10, VAR_16) & VAR_7)) {
  FUNC_4(&VAR_10->dev, "BAR %d is not iomem. Aborting.\n", VAR_16);
  VAR_14 = -VAR_4;
  goto error_release_regions;
 }

 VAR_13->iobase = FUNC_15(VAR_10, VAR_16, 0);
 if (!VAR_13->iobase) {
  VAR_14 = -VAR_5;
  goto error_release_regions;
 }


 FUNC_3(VAR_13, 0, VAR_1);
 FUNC_3(VAR_13, 0, VAR_0);

 VAR_14 = FUNC_6(VAR_13->dev, VAR_2);
 if (VAR_14) {
  FUNC_4(VAR_13->dev, "Failed to set DMA mask\n");
  goto error_release_regions;
 }

 FUNC_13(VAR_10);
 FUNC_12(VAR_10, VAR_13);
 FUNC_2(VAR_13);

 for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_8); VAR_15++) {
  VAR_8[VAR_15].platform_data = VAR_13;
  VAR_8[VAR_15].pdata_size = sizeof(*VAR_13);
 }
 VAR_14 = FUNC_8(&VAR_10->dev, VAR_13->id, VAR_8,
   FUNC_0(VAR_8), ((void*)0), 0, ((void*)0));
 if (VAR_14 < 0)
  goto error_release_regions;

 FUNC_1(VAR_13, 0);

 return 0;

error_release_regions:
 FUNC_9(VAR_10);
 return VAR_14;
}
