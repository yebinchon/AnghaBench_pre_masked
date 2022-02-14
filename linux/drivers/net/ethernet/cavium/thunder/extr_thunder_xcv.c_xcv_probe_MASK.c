
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct xcv {int dummy; } ;
struct pci_device_id {int dummy; } ;
struct device {int dummy; } ;
struct pci_dev {struct device dev; } ;
struct TYPE_5__ {int reg_base; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int ) ;
 int FUNC_7 (struct pci_dev*,TYPE_1__*) ;
 int FUNC_8 (struct pci_dev*,int ,int ) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int FUNC_9(struct pci_dev *VAR_5, const struct pci_device_id *VAR_6)
{
 int VAR_7;
 struct device *VAR_8 = &VAR_5->dev;

 VAR_4 = FUNC_2(VAR_8, sizeof(struct xcv), VAR_2);
 if (!VAR_4)
  return -VAR_1;
 VAR_4->pdev = VAR_5;

 FUNC_7(VAR_5, VAR_4);

 VAR_7 = FUNC_4(VAR_5);
 if (VAR_7) {
  FUNC_0(VAR_8, "Failed to enable PCI device\n");
  goto err_kfree;
 }

 VAR_7 = FUNC_6(VAR_5, VAR_0);
 if (VAR_7) {
  FUNC_0(VAR_8, "PCI request regions failed 0x%x\n", VAR_7);
  goto err_disable_device;
 }


 VAR_4->reg_base = FUNC_8(VAR_5, VAR_3, 0);
 if (!VAR_4->reg_base) {
  FUNC_0(VAR_8, "XCV: Cannot map CSR memory space, aborting\n");
  VAR_7 = -VAR_1;
  goto err_release_regions;
 }

 return 0;

err_release_regions:
 FUNC_5(VAR_5);
err_disable_device:
 FUNC_3(VAR_5);
err_kfree:
 FUNC_1(VAR_8, VAR_4);
 VAR_4 = ((void*)0);
 return VAR_7;
}
