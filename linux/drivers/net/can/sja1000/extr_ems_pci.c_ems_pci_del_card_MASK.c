
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct net_device {int name; } ;
struct ems_pci_card {int channels; int * conf_addr; int pci_dev; int * base_addr; struct net_device** net_dev; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct ems_pci_card*) ;
 int FUNC_3 (struct pci_dev*) ;
 struct ems_pci_card* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_0)
{
 struct ems_pci_card *VAR_1 = FUNC_4(VAR_0);
 struct net_device *VAR_2;
 int VAR_3 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_1->channels; VAR_3++) {
  VAR_2 = VAR_1->net_dev[VAR_3];

  if (!VAR_2)
   continue;

  FUNC_0(&VAR_0->dev, "Removing %s.\n", VAR_2->name);
  FUNC_6(VAR_2);
  FUNC_1(VAR_2);
 }

 if (VAR_1->base_addr != ((void*)0))
  FUNC_5(VAR_1->pci_dev, VAR_1->base_addr);

 if (VAR_1->conf_addr != ((void*)0))
  FUNC_5(VAR_1->pci_dev, VAR_1->conf_addr);

 FUNC_2(VAR_1);

 FUNC_3(VAR_0);
}
