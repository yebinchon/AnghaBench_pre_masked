
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int irq; int dev; } ;
struct cb710_chip {int platform_id; int slot_refs_count; int iobase; struct pci_dev* pdev; int irq_lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct cb710_chip*,int,int,char*) ;
 int FUNC_4 (struct cb710_chip*,int) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int *,char*,int,int ,int ) ;
 struct cb710_chip* FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *,int ,int ,int ,int ,struct cb710_chip*) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (struct pci_dev*,int,int*) ;
 int FUNC_11 (struct pci_dev*,struct cb710_chip*) ;
 int FUNC_12 (struct pci_dev*,int,int) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (struct pci_dev*,int,int ) ;
 int * FUNC_15 (struct pci_dev*) ;
 int VAR_10 ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct cb710_chip*,int ,int) ;

__attribute__((used)) static int FUNC_18(struct pci_dev *VAR_11,
 const struct pci_device_id *VAR_12)
{
 struct cb710_chip *VAR_13;
 u32 VAR_14;
 int VAR_15;
 int VAR_16 = 0;

 VAR_15 = FUNC_2(VAR_11);
 if (VAR_15)
  return VAR_15;


 FUNC_10(VAR_11, 0x48, &VAR_14);
 if (!(VAR_14 & 0x80000000)) {
  FUNC_12(VAR_11, 0x48, VAR_14|0x71000000);
  FUNC_10(VAR_11, 0x48, &VAR_14);
 }

 FUNC_5(&VAR_11->dev, "PCI config[0x48] = 0x%08X\n", VAR_14);
 if (!(VAR_14 & 0x70000000))
  return -VAR_3;
 VAR_14 = (VAR_14 >> 28) & 7;
 if (VAR_14 & VAR_0)
  ++VAR_16;
 if (VAR_14 & VAR_1)
  ++VAR_16;
 if (VAR_14 & VAR_2)
  ++VAR_16;

 VAR_13 = FUNC_7(&VAR_11->dev, FUNC_17(VAR_13, VAR_10, VAR_16),
       VAR_5);
 if (!VAR_13)
  return -VAR_4;

 VAR_15 = FUNC_13(VAR_11);
 if (VAR_15)
  return VAR_15;

 VAR_15 = FUNC_14(VAR_11, 0x0001, VAR_7);
 if (VAR_15)
  return VAR_15;

 FUNC_16(&VAR_13->irq_lock);
 VAR_13->pdev = VAR_11;
 VAR_13->iobase = FUNC_15(VAR_11)[0];

 FUNC_11(VAR_11, VAR_13);

 VAR_15 = FUNC_8(&VAR_11->dev, VAR_11->irq,
  VAR_9, VAR_6, VAR_7, VAR_13);
 if (VAR_15)
  return VAR_15;

 VAR_15 = FUNC_9(&VAR_8, VAR_5);
 if (VAR_15 < 0)
  return VAR_15;
 VAR_13->platform_id = VAR_15;

 FUNC_6(&VAR_11->dev, "id %d, IO 0x%p, IRQ %d\n",
  VAR_13->platform_id, VAR_13->iobase, VAR_11->irq);

 if (VAR_14 & VAR_0) {
  VAR_15 = FUNC_3(VAR_13,
   VAR_0, 0x00, "cb710-mmc");
  if (VAR_15)
   return VAR_15;
 }

 if (VAR_14 & VAR_1) {
  VAR_15 = FUNC_3(VAR_13,
   VAR_1, 0x40, "cb710-ms");
  if (VAR_15)
   goto unreg_mmc;
 }

 if (VAR_14 & VAR_2) {
  VAR_15 = FUNC_3(VAR_13,
   VAR_2, 0x60, "cb710-sm");
  if (VAR_15)
   goto unreg_ms;
 }

 return 0;
unreg_ms:
 FUNC_4(VAR_13, VAR_1);
unreg_mmc:
 FUNC_4(VAR_13, VAR_0);




 return VAR_15;
}
