
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int irq; } ;
struct genwqe_dev {int queue; int * card_thread; struct pci_dev* pci_dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct genwqe_dev*,int *) ;
 int FUNC_2 (int ,struct genwqe_dev*) ;
 int FUNC_3 (struct genwqe_dev*) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct genwqe_dev *VAR_0)
{
 struct pci_dev *VAR_1 = VAR_0->pci_dev;

 if (!FUNC_0(&VAR_0->queue))
  return 1;

 FUNC_2(VAR_1->irq, VAR_0);
 FUNC_3(VAR_0);

 if (VAR_0->card_thread != ((void*)0)) {
  FUNC_4(VAR_0->card_thread);
  VAR_0->card_thread = ((void*)0);
 }

 FUNC_1(VAR_0, &VAR_0->queue);
 return 0;
}
