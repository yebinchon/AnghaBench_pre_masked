
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union nic_mbx {int dummy; } nic_mbx ;
typedef int u8 ;
struct pci_device_id {int dummy; } ;
struct device {int dummy; } ;
struct pci_dev {struct device dev; } ;
struct nicpf {int vf_lmac_map; TYPE_1__* hw; int node; int reg_base; struct pci_dev* pdev; } ;
struct hw_info {int dummy; } ;
struct TYPE_2__ {int bgx_cnt; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,int,int,int ) ;
 void* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct nicpf*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct nicpf*) ;
 int FUNC_8 (struct nicpf*) ;
 int FUNC_9 (struct nicpf*) ;
 int FUNC_10 (struct pci_dev*,struct nicpf*) ;
 int FUNC_11 (struct nicpf*) ;
 int FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (struct pci_dev*) ;
 int FUNC_15 (struct pci_dev*,int ) ;
 int FUNC_16 (struct pci_dev*,int ) ;
 int FUNC_17 (struct pci_dev*,int ) ;
 int FUNC_18 (struct pci_dev*,struct nicpf*) ;
 int FUNC_19 (struct pci_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_20(struct pci_dev *VAR_5, const struct pci_device_id *VAR_6)
{
 struct device *VAR_7 = &VAR_5->dev;
 struct nicpf *VAR_8;
 u8 VAR_9;
 int VAR_10;

 FUNC_0(sizeof(union nic_mbx) > 16);

 VAR_8 = FUNC_4(VAR_7, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->hw = FUNC_4(VAR_7, sizeof(struct hw_info), VAR_2);
 if (!VAR_8->hw)
  return -VAR_1;

 FUNC_18(VAR_5, VAR_8);

 VAR_8->pdev = VAR_5;

 VAR_10 = FUNC_13(VAR_5);
 if (VAR_10) {
  FUNC_2(VAR_7, "Failed to enable PCI device\n");
  FUNC_18(VAR_5, ((void*)0));
  return VAR_10;
 }

 VAR_10 = FUNC_15(VAR_5, VAR_0);
 if (VAR_10) {
  FUNC_2(VAR_7, "PCI request regions failed 0x%x\n", VAR_10);
  goto err_disable_device;
 }

 VAR_10 = FUNC_17(VAR_5, FUNC_1(48));
 if (VAR_10) {
  FUNC_2(VAR_7, "Unable to get usable DMA configuration\n");
  goto err_release_regions;
 }

 VAR_10 = FUNC_16(VAR_5, FUNC_1(48));
 if (VAR_10) {
  FUNC_2(VAR_7, "Unable to get 48-bit DMA for consistent allocations\n");
  goto err_release_regions;
 }


 VAR_8->reg_base = FUNC_19(VAR_5, VAR_4, 0);
 if (!VAR_8->reg_base) {
  FUNC_2(VAR_7, "Cannot map config register space, aborting\n");
  VAR_10 = -VAR_1;
  goto err_release_regions;
 }

 VAR_8->node = FUNC_6(VAR_5);


 FUNC_5(VAR_8);


 VAR_10 = -VAR_1;
 VAR_9 = VAR_8->hw->bgx_cnt * VAR_3;

 VAR_8->vf_lmac_map = FUNC_3(VAR_7, VAR_9, sizeof(u8),
           VAR_2);
 if (!VAR_8->vf_lmac_map)
  goto err_release_regions;


 FUNC_7(VAR_8);

 FUNC_9(VAR_8);


 VAR_10 = FUNC_8(VAR_8);
 if (VAR_10)
  goto err_release_regions;


 VAR_10 = FUNC_10(VAR_5, VAR_8);
 if (VAR_10)
  goto err_unregister_interrupts;

 return 0;

err_unregister_interrupts:
 FUNC_11(VAR_8);
err_release_regions:
 FUNC_14(VAR_5);
err_disable_device:
 FUNC_12(VAR_5);
 FUNC_18(VAR_5, ((void*)0));
 return VAR_10;
}
