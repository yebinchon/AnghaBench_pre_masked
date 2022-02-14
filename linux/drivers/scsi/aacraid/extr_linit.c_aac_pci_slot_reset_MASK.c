
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
typedef int pci_ers_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;
 scalar_t__ FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;

__attribute__((used)) static pci_ers_result_t FUNC_6(struct pci_dev *VAR_2)
{
 FUNC_0(&VAR_2->dev, "aacraid: PCI error - slot reset\n");
 FUNC_4(VAR_2);
 if (FUNC_2(VAR_2)) {
  FUNC_1(&VAR_2->dev,
   "aacraid: failed to enable slave\n");
  goto fail_device;
 }

 FUNC_5(VAR_2);

 if (FUNC_3(VAR_2)) {
  FUNC_0(&VAR_2->dev, "pci_enable_device_mem failed\n");
  goto fail_device;
 }

 return VAR_1;

fail_device:
 FUNC_0(&VAR_2->dev, "aacraid: PCI error - slot reset failed\n");
 return VAR_0;
}
