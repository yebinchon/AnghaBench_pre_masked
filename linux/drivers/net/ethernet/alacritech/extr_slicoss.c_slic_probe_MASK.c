
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slic_device {int regs; int napi; struct net_device* netdev; struct pci_dev* pdev; int is_fiber; int model; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {scalar_t__ device; int dev; int subsystem_device; int irq; } ;
struct net_device {int * ethtool_ops; int hw_features; int features; int * netdev_ops; int irq; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct net_device*,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct net_device* FUNC_2 (int) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 struct slic_device* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*,int *,int ,int ) ;
 int FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (struct pci_dev*) ;
 int FUNC_15 (struct pci_dev*,int ) ;
 int FUNC_16 (struct pci_dev*,int ) ;
 int FUNC_17 (struct pci_dev*,int ) ;
 int FUNC_18 (struct pci_dev*,struct net_device*) ;
 int FUNC_19 (struct pci_dev*) ;
 int FUNC_20 (struct pci_dev*) ;
 int FUNC_21 (struct net_device*) ;
 int FUNC_22 (struct pci_dev*) ;
 int VAR_7 ;
 int FUNC_23 (struct slic_device*) ;
 int FUNC_24 (int ) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_25(struct pci_dev *VAR_10, const struct pci_device_id *VAR_11)
{
 struct slic_device *VAR_12;
 struct net_device *VAR_13;
 int VAR_14;

 VAR_14 = FUNC_13(VAR_10);
 if (VAR_14) {
  FUNC_3(&VAR_10->dev, "failed to enable PCI device\n");
  return VAR_14;
 }

 FUNC_19(VAR_10);
 FUNC_20(VAR_10);

 FUNC_22(VAR_10);

 VAR_14 = FUNC_5(&VAR_10->dev, FUNC_0(32));
 if (VAR_14) {
  FUNC_3(&VAR_10->dev, "failed to setup DMA\n");
  goto disable;
 }

 FUNC_4(&VAR_10->dev, FUNC_0(32));

 VAR_14 = FUNC_15(VAR_10, VAR_0);
 if (VAR_14) {
  FUNC_3(&VAR_10->dev, "failed to obtain PCI regions\n");
  goto disable;
 }

 VAR_13 = FUNC_2(sizeof(*VAR_12));
 if (!VAR_13) {
  FUNC_3(&VAR_10->dev, "failed to alloc ethernet device\n");
  VAR_14 = -VAR_1;
  goto free_regions;
 }

 FUNC_1(VAR_13, &VAR_10->dev);
 FUNC_18(VAR_10, VAR_13);
 VAR_13->irq = VAR_10->irq;
 VAR_13->netdev_ops = &VAR_8;
 VAR_13->hw_features = VAR_2;
 VAR_13->features |= VAR_13->hw_features;

 VAR_13->ethtool_ops = &VAR_7;

 VAR_12 = FUNC_9(VAR_13);
 VAR_12->model = (VAR_10->device == VAR_3) ?
        VAR_5 : VAR_4;
 VAR_12->is_fiber = FUNC_24(VAR_10->subsystem_device);
 VAR_12->pdev = VAR_10;
 VAR_12->netdev = VAR_13;
 VAR_12->regs = FUNC_7(FUNC_17(VAR_10, 0),
         FUNC_16(VAR_10, 0));
 if (!VAR_12->regs) {
  FUNC_3(&VAR_10->dev, "failed to map registers\n");
  VAR_14 = -VAR_1;
  goto free_netdev;
 }

 VAR_14 = FUNC_23(VAR_12);
 if (VAR_14) {
  FUNC_3(&VAR_10->dev, "failed to initialize driver\n");
  goto unmap;
 }

 FUNC_11(VAR_13, &VAR_12->napi, VAR_9, VAR_6);
 FUNC_10(VAR_13);

 VAR_14 = FUNC_21(VAR_13);
 if (VAR_14) {
  FUNC_3(&VAR_10->dev, "failed to register net device: %i\n", VAR_14);
  goto unmap;
 }

 return 0;

unmap:
 FUNC_8(VAR_12->regs);
free_netdev:
 FUNC_6(VAR_13);
free_regions:
 FUNC_14(VAR_10);
disable:
 FUNC_12(VAR_10);

 return VAR_14;
}
