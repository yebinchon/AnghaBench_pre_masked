
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct TYPE_10__ {int va; void* len; void* pa; } ;
struct TYPE_9__ {int va; void* len; void* pa; } ;
struct mic_device {int id; TYPE_5__ mmio; TYPE_4__ aper; int cosm_dev; TYPE_3__* pdev; TYPE_2__* intr_ops; TYPE_1__* ops; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {int (* intr_init ) (struct mic_device*) ;} ;
struct TYPE_6__ {int aper_bar; int mmio_bar; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,char*,...) ;
 int VAR_5 ;
 int FUNC_5 (int *,int ,int ,int ) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (void*,void*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct mic_device*) ;
 struct mic_device* FUNC_10 (int,int ) ;
 int FUNC_11 (struct mic_device*) ;
 int FUNC_12 (struct mic_device*) ;
 int FUNC_13 (struct mic_device*) ;
 int FUNC_14 (struct mic_device*,struct pci_dev*) ;
 int FUNC_15 (struct mic_device*) ;
 int FUNC_16 (struct mic_device*) ;
 int VAR_6 ;
 int FUNC_17 (struct mic_device*,struct pci_dev*) ;
 int FUNC_18 (struct mic_device*,struct pci_dev*) ;
 int FUNC_19 (struct mic_device*) ;
 int FUNC_20 (struct mic_device*) ;
 int FUNC_21 (struct pci_dev*) ;
 int FUNC_22 (struct pci_dev*) ;
 int FUNC_23 (struct pci_dev*,int ) ;
 int FUNC_24 (struct pci_dev*) ;
 int FUNC_25 (struct pci_dev*,int ) ;
 void* FUNC_26 (struct pci_dev*,int ) ;
 void* FUNC_27 (struct pci_dev*,int ) ;
 int FUNC_28 (struct pci_dev*,int ) ;
 int FUNC_29 (struct pci_dev*,struct mic_device*) ;
 int FUNC_30 (struct pci_dev*) ;
 int FUNC_31 (struct mic_device*) ;

__attribute__((used)) static int FUNC_32(struct pci_dev *VAR_7,
       const struct pci_device_id *VAR_8)
{
 int VAR_9;
 struct mic_device *VAR_10;

 VAR_10 = FUNC_10(sizeof(*VAR_10), VAR_2);
 if (!VAR_10) {
  VAR_9 = -VAR_1;
  FUNC_4(&VAR_7->dev, "mdev kmalloc failed rc %d\n", VAR_9);
  goto mdev_alloc_fail;
 }
 VAR_10->id = FUNC_5(&VAR_5, 0, VAR_3, VAR_2);
 if (VAR_10->id < 0) {
  VAR_9 = VAR_10->id;
  FUNC_4(&VAR_7->dev, "ida_simple_get failed rc %d\n", VAR_9);
  goto ida_fail;
 }

 FUNC_14(VAR_10, VAR_7);

 VAR_9 = FUNC_22(VAR_7);
 if (VAR_9) {
  FUNC_4(&VAR_7->dev, "failed to enable pci device.\n");
  goto ida_remove;
 }

 FUNC_30(VAR_7);

 VAR_9 = FUNC_25(VAR_7, VAR_6);
 if (VAR_9) {
  FUNC_4(&VAR_7->dev, "failed to get pci regions.\n");
  goto disable_device;
 }

 VAR_9 = FUNC_28(VAR_7, FUNC_0(64));
 if (VAR_9) {
  FUNC_4(&VAR_7->dev, "Cannot set DMA mask\n");
  goto release_regions;
 }

 VAR_10->mmio.pa = FUNC_27(VAR_7, VAR_10->ops->mmio_bar);
 VAR_10->mmio.len = FUNC_26(VAR_7, VAR_10->ops->mmio_bar);
 VAR_10->mmio.va = FUNC_23(VAR_7, VAR_10->ops->mmio_bar);
 if (!VAR_10->mmio.va) {
  FUNC_4(&VAR_7->dev, "Cannot remap MMIO BAR\n");
  VAR_9 = -VAR_0;
  goto release_regions;
 }

 VAR_10->aper.pa = FUNC_27(VAR_7, VAR_10->ops->aper_bar);
 VAR_10->aper.len = FUNC_26(VAR_7, VAR_10->ops->aper_bar);
 VAR_10->aper.va = FUNC_7(VAR_10->aper.pa, VAR_10->aper.len);
 if (!VAR_10->aper.va) {
  FUNC_4(&VAR_7->dev, "Cannot remap Aperture BAR\n");
  VAR_9 = -VAR_0;
  goto unmap_mmio;
 }

 VAR_10->intr_ops->intr_init(VAR_10);
 VAR_9 = FUNC_18(VAR_10, VAR_7);
 if (VAR_9) {
  FUNC_4(&VAR_7->dev, "mic_setup_interrupts failed %d\n", VAR_9);
  goto unmap_aper;
 }
 VAR_9 = FUNC_19(VAR_10);
 if (VAR_9) {
  FUNC_4(&VAR_7->dev, "smpt_init failed %d\n", VAR_9);
  goto free_interrupts;
 }

 FUNC_29(VAR_7, VAR_10);

 VAR_9 = FUNC_15(VAR_10);
 if (VAR_9) {
  FUNC_4(&VAR_7->dev, "mic_dp_init failed rc %d\n", VAR_9);
  goto smpt_uninit;
 }
 FUNC_11(VAR_10);
 FUNC_12(VAR_10);

 VAR_10->cosm_dev = FUNC_3(&VAR_10->pdev->dev, &VAR_4);
 if (FUNC_1(VAR_10->cosm_dev)) {
  VAR_9 = FUNC_2(VAR_10->cosm_dev);
  FUNC_4(&VAR_7->dev, "cosm_add_device failed rc %d\n", VAR_9);
  goto cleanup_debug_dir;
 }
 return 0;
cleanup_debug_dir:
 FUNC_13(VAR_10);
 FUNC_16(VAR_10);
smpt_uninit:
 FUNC_20(VAR_10);
free_interrupts:
 FUNC_17(VAR_10, VAR_7);
unmap_aper:
 FUNC_8(VAR_10->aper.va);
unmap_mmio:
 FUNC_8(VAR_10->mmio.va);
release_regions:
 FUNC_24(VAR_7);
disable_device:
 FUNC_21(VAR_7);
ida_remove:
 FUNC_6(&VAR_5, VAR_10->id);
ida_fail:
 FUNC_9(VAR_10);
mdev_alloc_fail:
 FUNC_4(&VAR_7->dev, "Probe failed rc %d\n", VAR_9);
 return VAR_9;
}
