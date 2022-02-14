
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct nicvf {int num_vec; int* irq_allocated; struct nicvf** napi; int * affinity_mask; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct nicvf*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int) ;

__attribute__((used)) static void FUNC_5(struct nicvf *VAR_1)
{
 struct pci_dev *VAR_2 = VAR_1->pdev;
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_1->num_vec; VAR_3++) {
  if (!VAR_1->irq_allocated[VAR_3])
   continue;

  FUNC_2(FUNC_4(VAR_2, VAR_3), ((void*)0));
  FUNC_0(VAR_1->affinity_mask[VAR_3]);

  if (VAR_3 < VAR_0)
   FUNC_1(FUNC_4(VAR_2, VAR_3), VAR_1->napi[VAR_3]);
  else
   FUNC_1(FUNC_4(VAR_2, VAR_3), VAR_1);

  VAR_1->irq_allocated[VAR_3] = 0;
 }


 FUNC_3(VAR_2);
 VAR_1->num_vec = 0;
}
