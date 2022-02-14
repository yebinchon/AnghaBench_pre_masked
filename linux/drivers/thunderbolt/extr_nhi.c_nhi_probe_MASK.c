
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_nhi_ops {int (* init ) (struct tb_nhi*) ;} ;
struct tb_nhi {int hop_count; struct pci_dev* pdev; struct tb_nhi_ops const* ops; int lock; void* rx_rings; void* tx_rings; scalar_t__ iobase; } ;
struct tb {int dummy; } ;
struct pci_device_id {scalar_t__ driver_data; } ;
struct pci_dev {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,...) ;
 void* FUNC_4 (int *,int,int,int ) ;
 struct tb_nhi* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,int ) ;
 struct tb* FUNC_7 (struct tb_nhi*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct tb_nhi*) ;
 int FUNC_11 (struct tb_nhi*) ;
 int FUNC_12 (struct pci_dev*,struct tb*) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (struct pci_dev*) ;
 int FUNC_15 (struct pci_dev*,int,char*) ;
 scalar_t__* FUNC_16 (struct pci_dev*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (struct tb_nhi*) ;
 int FUNC_23 (struct tb*) ;
 int FUNC_24 (struct tb*) ;
 struct tb* FUNC_25 (struct tb_nhi*) ;

__attribute__((used)) static int FUNC_26(struct pci_dev *VAR_5, const struct pci_device_id *VAR_6)
{
 struct tb_nhi *VAR_7;
 struct tb *VAR_8;
 int VAR_9;

 if (!FUNC_9(VAR_5)) {
  FUNC_3(&VAR_5->dev, "firmware image not valid, aborting\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_14(VAR_5);
 if (VAR_9) {
  FUNC_2(&VAR_5->dev, "cannot enable PCI device, aborting\n");
  return VAR_9;
 }

 VAR_9 = FUNC_15(VAR_5, 1 << 0, "thunderbolt");
 if (VAR_9) {
  FUNC_2(&VAR_5->dev, "cannot obtain PCI resources, aborting\n");
  return VAR_9;
 }

 VAR_7 = FUNC_5(&VAR_5->dev, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->pdev = VAR_5;
 VAR_7->ops = (const struct tb_nhi_ops *)VAR_6->driver_data;

 VAR_7->iobase = FUNC_16(VAR_5)[0];
 VAR_7->hop_count = FUNC_8(VAR_7->iobase + VAR_3) & 0x3ff;
 if (VAR_7->hop_count != 12 && VAR_7->hop_count != 32)
  FUNC_3(&VAR_5->dev, "unexpected hop count: %d\n",
    VAR_7->hop_count);

 VAR_7->tx_rings = FUNC_4(&VAR_5->dev, VAR_7->hop_count,
         sizeof(*VAR_7->tx_rings), VAR_2);
 VAR_7->rx_rings = FUNC_4(&VAR_5->dev, VAR_7->hop_count,
         sizeof(*VAR_7->rx_rings), VAR_2);
 if (!VAR_7->tx_rings || !VAR_7->rx_rings)
  return -VAR_1;

 VAR_9 = FUNC_10(VAR_7);
 if (VAR_9) {
  FUNC_2(&VAR_5->dev, "cannot enable MSI, aborting\n");
  return VAR_9;
 }

 FUNC_21(&VAR_7->lock);

 VAR_9 = FUNC_6(&VAR_5->dev, FUNC_0(64));
 if (VAR_9)
  VAR_9 = FUNC_6(&VAR_5->dev, FUNC_0(32));
 if (VAR_9) {
  FUNC_2(&VAR_5->dev, "failed to set DMA mask\n");
  return VAR_9;
 }

 FUNC_13(VAR_5);

 if (VAR_7->ops && VAR_7->ops->init) {
  VAR_9 = VAR_7->ops->init(VAR_7);
  if (VAR_9)
   return VAR_9;
 }

 VAR_8 = FUNC_7(VAR_7);
 if (!VAR_8)
  VAR_8 = FUNC_25(VAR_7);
 if (!VAR_8) {
  FUNC_2(&VAR_7->pdev->dev,
   "failed to determine connection manager, aborting\n");
  return -VAR_0;
 }

 FUNC_1(&VAR_7->pdev->dev, "NHI initialized, starting thunderbolt\n");

 VAR_9 = FUNC_23(VAR_8);
 if (VAR_9) {




  FUNC_24(VAR_8);
  FUNC_11(VAR_7);
  return VAR_9;
 }
 FUNC_12(VAR_5, VAR_8);

 FUNC_17(&VAR_5->dev);
 FUNC_19(&VAR_5->dev, VAR_4);
 FUNC_20(&VAR_5->dev);
 FUNC_18(&VAR_5->dev);

 return 0;
}
