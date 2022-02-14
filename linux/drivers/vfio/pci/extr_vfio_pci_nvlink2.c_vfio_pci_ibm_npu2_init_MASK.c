
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
typedef int u32 ;
struct vfio_pci_npu2_data {int link_speed; scalar_t__ base; void* mmio_atsd; void* gpu_tgt; } ;
struct vfio_pci_device {struct pci_dev* pdev; } ;
struct TYPE_2__ {int of_node; } ;
struct pci_dev {TYPE_1__ dev; int bus; } ;
struct pci_controller {int dn; } ;
struct device_node {int dummy; } ;


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
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (struct vfio_pci_npu2_data*) ;
 struct vfio_pci_npu2_data* FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (void*,int ,int ) ;
 int FUNC_5 (scalar_t__) ;
 struct device_node* FUNC_6 (int ,char*,int ) ;
 scalar_t__ FUNC_7 (struct device_node*,char*,int*) ;
 scalar_t__ FUNC_8 (struct device_node*,char*,void**) ;
 scalar_t__ FUNC_9 (int ,char*,int,void**) ;
 struct pci_controller* FUNC_10 (int ) ;
 struct device_node* FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct pci_dev*) ;
 int VAR_13 ;
 int FUNC_13 (struct vfio_pci_device*,int,int ,int *,int ,int,struct vfio_pci_npu2_data*) ;

int FUNC_14(struct vfio_pci_device *VAR_14)
{
 int VAR_15;
 struct vfio_pci_npu2_data *VAR_16;
 struct device_node *VAR_17;
 u32 VAR_18 = 0;
 struct pci_dev *VAR_19 = VAR_14->pdev;
 struct device_node *VAR_20 = FUNC_11(VAR_19);
 struct pci_controller *VAR_21 = FUNC_10(VAR_19->bus);
 u64 VAR_22 = 0;
 u64 VAR_23 = 0;
 u32 VAR_24 = 0xff;





 if (!FUNC_12(VAR_14->pdev))
  return -VAR_1;
 VAR_17 = FUNC_6(VAR_19->dev.of_node, "ibm,nvlink", 0);
 if (FUNC_0(FUNC_7(VAR_17, "ibm,npu-link-index",
   &VAR_18)))
  return -VAR_1;

 if (FUNC_9(VAR_21->dn, "ibm,mmio-atsd", VAR_18,
   &VAR_22)) {
  FUNC_1(&VAR_14->pdev->dev, "No available ATSD found\n");
  VAR_22 = 0;
 }

 if (FUNC_8(VAR_20, "ibm,device-tgt-addr", &VAR_23)) {
  FUNC_1(&VAR_14->pdev->dev, "No ibm,device-tgt-addr found\n");
  return -VAR_0;
 }

 if (FUNC_7(VAR_20, "ibm,nvlink-speed", &VAR_24)) {
  FUNC_1(&VAR_14->pdev->dev, "No ibm,nvlink-speed found\n");
  return -VAR_0;
 }

 VAR_16 = FUNC_3(sizeof(*VAR_16), VAR_3);
 if (!VAR_16)
  return -VAR_2;

 VAR_16->mmio_atsd = VAR_22;
 VAR_16->gpu_tgt = VAR_23;
 VAR_16->link_speed = VAR_24;
 if (VAR_16->mmio_atsd) {
  VAR_16->base = FUNC_4(VAR_16->mmio_atsd, VAR_7, VAR_4);
  if (!VAR_16->base) {
   VAR_15 = -VAR_2;
   goto free_exit;
  }
 }







 VAR_15 = FUNC_13(VAR_14,
   VAR_6 |
   VAR_12,
   VAR_11,
   &VAR_13,
   VAR_16->mmio_atsd ? VAR_5 : 0,
   VAR_9 |
   VAR_10 |
   VAR_8,
   VAR_16);
 if (VAR_15)
  goto free_exit;

 return 0;

free_exit:
 if (VAR_16->base)
  FUNC_5(VAR_16->base);
 FUNC_2(VAR_16);

 return VAR_15;
}
