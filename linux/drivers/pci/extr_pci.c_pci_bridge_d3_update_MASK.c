
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int bridge_d3; int subordinate; int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int*) ;
 struct pci_dev* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (int ,int (*) (struct pci_dev*,int*),int*) ;

void FUNC_5(struct pci_dev *VAR_0)
{
 bool VAR_1 = !FUNC_0(&VAR_0->dev);
 struct pci_dev *VAR_2;
 bool VAR_3 = 1;

 VAR_2 = FUNC_3(VAR_0);
 if (!VAR_2 || !FUNC_1(VAR_2))
  return;





 if (VAR_1 && VAR_2->bridge_d3)
  return;
 if (!VAR_1)
  FUNC_2(VAR_0, &VAR_3);







 if (VAR_3 && !VAR_2->bridge_d3)
  FUNC_4(VAR_2->subordinate, FUNC_2,
        &VAR_3);

 if (VAR_2->bridge_d3 != VAR_3) {
  VAR_2->bridge_d3 = VAR_3;

  FUNC_5(VAR_2);
 }
}
