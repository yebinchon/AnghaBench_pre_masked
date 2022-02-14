
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_pci_chip {int num_slots; int * slots; scalar_t__ allow_runtime_pm; } ;
struct pci_dev {int dev; } ;


 struct sdhci_pci_chip* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_0)
{
 int VAR_1;
 struct sdhci_pci_chip *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2->allow_runtime_pm)
  FUNC_2(&VAR_0->dev);

 for (VAR_1 = 0; VAR_1 < VAR_2->num_slots; VAR_1++)
  FUNC_1(VAR_2->slots[VAR_1]);
}
