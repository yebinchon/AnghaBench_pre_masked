
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int device; int bus; int domain; } ;
union niu_parent_id {TYPE_1__ pci; } ;
typedef int u64 ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; int irq; int devfn; TYPE_2__* bus; } ;
struct niu {int * regs; int parent; } ;
struct net_device {int max_mtu; int min_mtu; int irq; int priv_flags; int features; } ;
typedef int parent_id ;
struct TYPE_4__ {int number; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_15 ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (union niu_parent_id*,int ,int) ;
 struct niu* FUNC_7 (struct net_device*) ;
 struct net_device* FUNC_8 (int *,struct pci_dev*,int *,int *,int ) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct niu*) ;
 int FUNC_11 () ;
 int FUNC_12 (struct niu*) ;
 int FUNC_13 (struct niu*,union niu_parent_id*,int ) ;
 int VAR_16 ;
 int FUNC_14 (struct niu*) ;
 int FUNC_15 (struct net_device*) ;
 int FUNC_16 (struct pci_dev*) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (struct pci_dev*) ;
 int * FUNC_19 (struct pci_dev*,int ) ;
 int FUNC_20 (struct pci_dev*) ;
 int FUNC_21 (struct pci_dev*) ;
 int FUNC_22 (struct pci_dev*,int ) ;
 int FUNC_23 (struct pci_dev*,int) ;
 int FUNC_24 (struct pci_dev*) ;
 int FUNC_25 (struct pci_dev*,int ) ;
 int FUNC_26 (struct pci_dev*,int ) ;
 int FUNC_27 (struct pci_dev*,struct net_device*) ;
 int FUNC_28 (struct pci_dev*) ;
 int FUNC_29 (struct pci_dev*,int ,int ,int) ;
 int FUNC_30 (struct net_device*) ;

__attribute__((used)) static int FUNC_31(struct pci_dev *VAR_17,
       const struct pci_device_id *VAR_18)
{
 union niu_parent_id VAR_19;
 struct net_device *VAR_20;
 struct niu *VAR_21;
 int VAR_22;
 u64 VAR_23;

 FUNC_11();

 VAR_22 = FUNC_18(VAR_17);
 if (VAR_22) {
  FUNC_3(&VAR_17->dev, "Cannot enable PCI device, aborting\n");
  return VAR_22;
 }

 if (!(FUNC_23(VAR_17, 0) & VAR_5) ||
     !(FUNC_23(VAR_17, 2) & VAR_5)) {
  FUNC_3(&VAR_17->dev, "Cannot find proper PCI device base addresses, aborting\n");
  VAR_22 = -VAR_1;
  goto err_out_disable_pdev;
 }

 VAR_22 = FUNC_22(VAR_17, VAR_0);
 if (VAR_22) {
  FUNC_3(&VAR_17->dev, "Cannot obtain PCI resources, aborting\n");
  goto err_out_disable_pdev;
 }

 if (!FUNC_20(VAR_17)) {
  FUNC_3(&VAR_17->dev, "Cannot find PCI Express capability, aborting\n");
  VAR_22 = -VAR_1;
  goto err_out_free_res;
 }

 VAR_20 = FUNC_8(&VAR_17->dev, VAR_17, ((void*)0),
     &VAR_16, FUNC_1(VAR_17->devfn));
 if (!VAR_20) {
  VAR_22 = -VAR_2;
  goto err_out_free_res;
 }
 VAR_21 = FUNC_7(VAR_20);

 FUNC_6(&VAR_19, 0, sizeof(VAR_19));
 VAR_19.pci.domain = FUNC_17(VAR_17->bus);
 VAR_19.pci.bus = VAR_17->bus->number;
 VAR_19.pci.device = FUNC_2(VAR_17->devfn);

 VAR_21->parent = FUNC_13(VAR_21, &VAR_19,
        VAR_15);
 if (!VAR_21->parent) {
  VAR_22 = -VAR_2;
  goto err_out_free_dev;
 }

 FUNC_29(VAR_17, VAR_8,
  VAR_12,
  VAR_9 | VAR_11 |
  VAR_10 | VAR_14 |
  VAR_13);

 VAR_23 = FUNC_0(44);
 VAR_22 = FUNC_26(VAR_17, VAR_23);
 if (!VAR_22) {
  VAR_20->features |= VAR_6;
  VAR_22 = FUNC_25(VAR_17, VAR_23);
  if (VAR_22) {
   FUNC_3(&VAR_17->dev, "Unable to obtain 44 bit DMA for consistent allocations, aborting\n");
   goto err_out_release_parent;
  }
 }
 if (VAR_22) {
  VAR_22 = FUNC_26(VAR_17, FUNC_0(32));
  if (VAR_22) {
   FUNC_3(&VAR_17->dev, "No usable DMA configuration, aborting\n");
   goto err_out_release_parent;
  }
 }

 FUNC_15(VAR_20);

 VAR_20->priv_flags |= VAR_4;

 VAR_21->regs = FUNC_19(VAR_17, 0);
 if (!VAR_21->regs) {
  FUNC_3(&VAR_17->dev, "Cannot map device registers, aborting\n");
  VAR_22 = -VAR_2;
  goto err_out_release_parent;
 }

 FUNC_28(VAR_17);
 FUNC_24(VAR_17);

 VAR_20->irq = VAR_17->irq;


 VAR_20->min_mtu = VAR_3;
 VAR_20->max_mtu = VAR_7;

 FUNC_9(VAR_20);

 VAR_22 = FUNC_12(VAR_21);
 if (VAR_22) {
  if (VAR_22 != -VAR_1)
   FUNC_3(&VAR_17->dev, "Problem fetching invariants of chip, aborting\n");
  goto err_out_iounmap;
 }

 VAR_22 = FUNC_30(VAR_20);
 if (VAR_22) {
  FUNC_3(&VAR_17->dev, "Cannot register net device, aborting\n");
  goto err_out_iounmap;
 }

 FUNC_27(VAR_17, VAR_20);

 FUNC_10(VAR_21);

 return 0;

err_out_iounmap:
 if (VAR_21->regs) {
  FUNC_5(VAR_21->regs);
  VAR_21->regs = ((void*)0);
 }

err_out_release_parent:
 FUNC_14(VAR_21);

err_out_free_dev:
 FUNC_4(VAR_20);

err_out_free_res:
 FUNC_21(VAR_17);

err_out_disable_pdev:
 FUNC_16(VAR_17);

 return VAR_22;
}
