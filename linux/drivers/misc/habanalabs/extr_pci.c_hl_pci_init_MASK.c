
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int dummy; } ;
struct hl_device {int dev; TYPE_1__* asic_funcs; scalar_t__ reset_pcilink; struct pci_dev* pdev; } ;
struct TYPE_2__ {int (* init_iatu ) (struct hl_device*) ;int (* pci_bars_map ) (struct hl_device*) ;} ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct hl_device*) ;
 int FUNC_2 (struct hl_device*,int ) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct hl_device*) ;
 int FUNC_8 (struct hl_device*) ;

int FUNC_9(struct hl_device *VAR_0, u8 VAR_1)
{
 struct pci_dev *VAR_2 = VAR_0->pdev;
 int VAR_3;

 VAR_3 = FUNC_2(VAR_0, VAR_1);
 if (VAR_3)
  return VAR_3;

 if (VAR_0->reset_pcilink)
  FUNC_1(VAR_0);

 VAR_3 = FUNC_5(VAR_2);
 if (VAR_3) {
  FUNC_0(VAR_0->dev, "can't enable PCI device\n");
  return VAR_3;
 }

 FUNC_6(VAR_2);

 VAR_3 = VAR_0->asic_funcs->init_iatu(VAR_0);
 if (VAR_3) {
  FUNC_0(VAR_0->dev, "Failed to initialize iATU\n");
  goto disable_device;
 }

 VAR_3 = VAR_0->asic_funcs->pci_bars_map(VAR_0);
 if (VAR_3) {
  FUNC_0(VAR_0->dev, "Failed to initialize PCI BARs\n");
  goto disable_device;
 }

 return 0;

disable_device:
 FUNC_3(VAR_2);
 FUNC_4(VAR_2);

 return VAR_3;
}
