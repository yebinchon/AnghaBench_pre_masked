
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {int dev; int * prod_id; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,...) ;
 struct pci_dev* FUNC_2 (int ,int ,struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,struct pcmcia_device*) ;

__attribute__((used)) static int FUNC_4(struct pcmcia_device *VAR_3)
{
 struct pci_dev *VAR_4 = ((void*)0);

 FUNC_1(&VAR_3->dev, "Searching MMC controller for pcmcia device"
  " %s %s ...\n", VAR_3->prod_id[0], VAR_3->prod_id[1]);



 while ((VAR_4 =
  FUNC_2(VAR_2, VAR_1,
          VAR_4))) {

  if (!FUNC_3(VAR_4, VAR_3)) {
   FUNC_1(&VAR_3->dev, "MMC controller found\n");
   return 0;
  }

 }
 FUNC_0(&VAR_3->dev, "No MMC controller was found.\n");
 return -VAR_0;
}
