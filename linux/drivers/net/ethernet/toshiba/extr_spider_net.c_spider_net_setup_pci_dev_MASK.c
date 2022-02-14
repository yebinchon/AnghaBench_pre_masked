
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spider_net_card {int regs; TYPE_1__* netdev; struct pci_dev* pdev; } ;
struct pci_dev {int dev; } ;
struct TYPE_2__ {unsigned long mem_start; unsigned long mem_end; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (struct pci_dev*) ;
 scalar_t__ FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 scalar_t__ FUNC_5 (struct pci_dev*,int ) ;
 int FUNC_6 (struct pci_dev*,int ) ;
 unsigned long FUNC_7 (struct pci_dev*,int ) ;
 unsigned long FUNC_8 (struct pci_dev*,int ) ;
 int FUNC_9 (struct pci_dev*) ;
 struct spider_net_card* FUNC_10 () ;
 int VAR_1 ;

__attribute__((used)) static struct spider_net_card *
FUNC_11(struct pci_dev *VAR_2)
{
 struct spider_net_card *VAR_3;
 unsigned long VAR_4, VAR_5;

 if (FUNC_3(VAR_2)) {
  FUNC_0(&VAR_2->dev, "Couldn't enable PCI device\n");
  return ((void*)0);
 }

 if (!(FUNC_6(VAR_2, 0) & VAR_0)) {
  FUNC_0(&VAR_2->dev,
          "Couldn't find proper PCI device base address.\n");
  goto out_disable_dev;
 }

 if (FUNC_5(VAR_2, VAR_1)) {
  FUNC_0(&VAR_2->dev,
          "Couldn't obtain PCI resources, aborting.\n");
  goto out_disable_dev;
 }

 FUNC_9(VAR_2);

 VAR_3 = FUNC_10();
 if (!VAR_3) {
  FUNC_0(&VAR_2->dev,
          "Couldn't allocate net_device structure, aborting.\n");
  goto out_release_regions;
 }
 VAR_3->pdev = VAR_2;


 VAR_4 = FUNC_8(VAR_2, 0);
 VAR_5 = FUNC_7(VAR_2, 0);

 VAR_3->netdev->mem_start = VAR_4;
 VAR_3->netdev->mem_end = VAR_4 + VAR_5;
 VAR_3->regs = FUNC_1(VAR_4, VAR_5);

 if (!VAR_3->regs) {
  FUNC_0(&VAR_2->dev,
          "Couldn't obtain PCI resources, aborting.\n");
  goto out_release_regions;
 }

 return VAR_3;

out_release_regions:
 FUNC_4(VAR_2);
out_disable_dev:
 FUNC_2(VAR_2);
 return ((void*)0);
}
