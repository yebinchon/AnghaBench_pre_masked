
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct ionic_dev_bar {unsigned int res_index; int bus_addr; int * vaddr; int len; } ;
struct ionic {scalar_t__ num_bars; struct ionic_dev_bar* bars; struct device* dev; struct pci_dev* pdev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,unsigned int) ;
 int * FUNC_1 (struct pci_dev*,unsigned int,int ) ;
 int FUNC_2 (struct pci_dev*,unsigned int) ;
 int FUNC_3 (struct pci_dev*,unsigned int) ;
 int FUNC_4 (struct pci_dev*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct ionic *VAR_3)
{
 struct pci_dev *VAR_4 = VAR_3->pdev;
 struct device *VAR_5 = VAR_3->dev;
 struct ionic_dev_bar *VAR_6;
 unsigned int VAR_7, VAR_8;

 VAR_6 = VAR_3->bars;
 VAR_3->num_bars = 0;

 for (VAR_7 = 0, VAR_8 = 0; VAR_7 < VAR_1; VAR_7++) {
  if (!(FUNC_2(VAR_4, VAR_7) & VAR_2))
   continue;
  VAR_6[VAR_8].len = FUNC_3(VAR_4, VAR_7);


  if (VAR_8 > 0) {
   VAR_6[VAR_8].vaddr = ((void*)0);
  } else {
   VAR_6[VAR_8].vaddr = FUNC_1(VAR_4, VAR_7, VAR_6[VAR_8].len);
   if (!VAR_6[VAR_8].vaddr) {
    FUNC_0(VAR_5,
     "Cannot memory-map BAR %d, aborting\n",
     VAR_7);
    return -VAR_0;
   }
  }

  VAR_6[VAR_8].bus_addr = FUNC_4(VAR_4, VAR_7);
  VAR_6[VAR_8].res_index = VAR_7;
  VAR_3->num_bars++;
  VAR_8++;
 }

 return 0;
}
