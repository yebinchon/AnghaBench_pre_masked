
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; TYPE_1__* driver; } ;
struct TYPE_4__ {char const* device_kind; int read_frc_capable; int * dev; int device_name; } ;
struct mlxsw_pci {int hw_addr; TYPE_2__ bus_info; struct pci_device_id const* id; struct pci_dev* pdev; } ;
struct TYPE_3__ {char* name; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mlxsw_pci*) ;
 struct mlxsw_pci* FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_2__*,int *,struct mlxsw_pci*,int,int *) ;
 int VAR_5 ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*,char const*) ;
 scalar_t__ FUNC_12 (struct pci_dev*,int ) ;
 int FUNC_13 (struct pci_dev*,int ) ;
 int FUNC_14 (struct pci_dev*,int ) ;
 int FUNC_15 (struct pci_dev*,int ) ;
 int FUNC_16 (struct pci_dev*,struct mlxsw_pci*) ;
 int FUNC_17 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_18(struct pci_dev *VAR_6, const struct pci_device_id *VAR_7)
{
 const char *VAR_8 = VAR_6->driver->name;
 struct mlxsw_pci *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_5(sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_2;

 VAR_10 = FUNC_8(VAR_6);
 if (VAR_10) {
  FUNC_1(&VAR_6->dev, "pci_enable_device failed\n");
  goto err_pci_enable_device;
 }

 VAR_10 = FUNC_11(VAR_6, VAR_8);
 if (VAR_10) {
  FUNC_1(&VAR_6->dev, "pci_request_regions failed\n");
  goto err_pci_request_regions;
 }

 VAR_10 = FUNC_15(VAR_6, FUNC_0(64));
 if (!VAR_10) {
  VAR_10 = FUNC_14(VAR_6, FUNC_0(64));
  if (VAR_10) {
   FUNC_1(&VAR_6->dev, "pci_set_consistent_dma_mask failed\n");
   goto err_pci_set_dma_mask;
  }
 } else {
  VAR_10 = FUNC_15(VAR_6, FUNC_0(32));
  if (VAR_10) {
   FUNC_1(&VAR_6->dev, "pci_set_dma_mask failed\n");
   goto err_pci_set_dma_mask;
  }
 }

 if (FUNC_12(VAR_6, 0) < VAR_4) {
  FUNC_1(&VAR_6->dev, "invalid PCI region size\n");
  VAR_10 = -VAR_0;
  goto err_pci_resource_len_check;
 }

 VAR_9->hw_addr = FUNC_2(FUNC_13(VAR_6, 0),
         FUNC_12(VAR_6, 0));
 if (!VAR_9->hw_addr) {
  FUNC_1(&VAR_6->dev, "ioremap failed\n");
  VAR_10 = -VAR_1;
  goto err_ioremap;
 }
 FUNC_17(VAR_6);

 VAR_9->pdev = VAR_6;
 FUNC_16(VAR_6, VAR_9);

 VAR_9->bus_info.device_kind = VAR_8;
 VAR_9->bus_info.device_name = FUNC_9(VAR_9->pdev);
 VAR_9->bus_info.dev = &VAR_6->dev;
 VAR_9->bus_info.read_frc_capable = 1;
 VAR_9->id = VAR_7;

 VAR_10 = FUNC_6(&VAR_9->bus_info,
          &VAR_5, VAR_9, 0,
          ((void*)0));
 if (VAR_10) {
  FUNC_1(&VAR_6->dev, "cannot register bus device\n");
  goto err_bus_device_register;
 }

 return 0;

err_bus_device_register:
 FUNC_3(VAR_9->hw_addr);
err_ioremap:
err_pci_resource_len_check:
err_pci_set_dma_mask:
 FUNC_10(VAR_6);
err_pci_request_regions:
 FUNC_7(VAR_6);
err_pci_enable_device:
 FUNC_4(VAR_9);
 return VAR_10;
}
