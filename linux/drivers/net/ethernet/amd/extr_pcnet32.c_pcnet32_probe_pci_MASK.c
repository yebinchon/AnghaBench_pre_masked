
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 unsigned long FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_dev*,int ) ;
 int FUNC_4 (struct pci_dev*) ;
 int VAR_5 ;
 int FUNC_5 (unsigned long,int,struct pci_dev*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (unsigned long,int ,char*) ;

__attribute__((used)) static int
FUNC_8(struct pci_dev *VAR_6, const struct pci_device_id *VAR_7)
{
 unsigned long VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_6);
 if (VAR_9 < 0) {
  if (VAR_5 & VAR_2)
   FUNC_6("failed to enable device -- err=%d\n", VAR_9);
  return VAR_9;
 }
 FUNC_4(VAR_6);

 VAR_8 = FUNC_2(VAR_6, 0);
 if (!VAR_8) {
  if (VAR_5 & VAR_2)
   FUNC_6("card has no PCI IO resources, aborting\n");
  VAR_9 = -VAR_1;
  goto err_disable_dev;
 }

 VAR_9 = FUNC_3(VAR_6, VAR_3);
 if (VAR_9) {
  if (VAR_5 & VAR_2)
   FUNC_6("architecture does not support 32bit PCI busmaster DMA\n");
  goto err_disable_dev;
 }
 if (!FUNC_7(VAR_8, VAR_4, "pcnet32_probe_pci")) {
  if (VAR_5 & VAR_2)
   FUNC_6("io address range already allocated\n");
  VAR_9 = -VAR_0;
  goto err_disable_dev;
 }

 VAR_9 = FUNC_5(VAR_8, 1, VAR_6);

err_disable_dev:
 if (VAR_9 < 0)
  FUNC_0(VAR_6);

 return VAR_9;
}
