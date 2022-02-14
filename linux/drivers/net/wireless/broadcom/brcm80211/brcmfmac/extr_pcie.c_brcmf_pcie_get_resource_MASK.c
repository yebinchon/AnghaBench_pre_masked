
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* ulong ;
struct pci_dev {int dev; } ;
struct brcmf_pciedev_info {unsigned long long tcm; void* regs; struct pci_dev* pdev; } ;
struct brcmf_bus {int dummy; } ;
typedef scalar_t__ phys_addr_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,unsigned long long,unsigned long long,...) ;
 int FUNC_1 (struct brcmf_bus*,char*,int,...) ;
 struct brcmf_bus* FUNC_2 (int *) ;
 void* FUNC_3 (scalar_t__,void*) ;
 int FUNC_4 (struct pci_dev*) ;
 void* FUNC_5 (struct pci_dev*,int) ;
 scalar_t__ FUNC_6 (struct pci_dev*,int) ;
 int FUNC_7 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_8(struct brcmf_pciedev_info *VAR_3)
{
 struct pci_dev *VAR_4 = VAR_3->pdev;
 struct brcmf_bus *VAR_5 = FUNC_2(&VAR_4->dev);
 int VAR_6;
 phys_addr_t VAR_7, VAR_8;
 ulong VAR_9;

 VAR_6 = FUNC_4(VAR_4);
 if (VAR_6) {
  FUNC_1(VAR_5, "pci_enable_device failed err=%d\n", VAR_6);
  return VAR_6;
 }

 FUNC_7(VAR_4);


 VAR_7 = FUNC_6(VAR_4, 0);

 VAR_8 = FUNC_6(VAR_4, 2);

 VAR_9 = FUNC_5(VAR_4, 2);
 if ((VAR_9 == 0) || (VAR_8 == 0)) {
  FUNC_1(VAR_5, "BAR1 Not enabled, device size=%ld, addr=%#016llx\n",
     VAR_9, (unsigned long long)VAR_8);
  return -VAR_1;
 }

 VAR_3->regs = FUNC_3(VAR_7, VAR_0);
 VAR_3->tcm = FUNC_3(VAR_8, VAR_9);

 if (!VAR_3->regs || !VAR_3->tcm) {
  FUNC_1(VAR_5, "ioremap() failed (%p,%p)\n", VAR_3->regs,
     VAR_3->tcm);
  return -VAR_1;
 }
 FUNC_0(VAR_2, "Phys addr : reg space = %p base addr %#016llx\n",
    VAR_3->regs, (unsigned long long)VAR_7);
 FUNC_0(VAR_2, "Phys addr : mem space = %p base addr %#016llx size 0x%x\n",
    VAR_3->tcm, (unsigned long long)VAR_8,
    (unsigned int)VAR_9);

 return 0;
}
