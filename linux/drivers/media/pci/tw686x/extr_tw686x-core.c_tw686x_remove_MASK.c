
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw686x_dev {int v4l2_dev; int lock; int * pci_dev; int mmio; int dma_delay_timer; } ;
struct pci_dev {int irq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct tw686x_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 struct tw686x_dev* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int ) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct tw686x_dev*) ;
 int FUNC_9 (struct tw686x_dev*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct pci_dev *VAR_0)
{
 struct tw686x_dev *VAR_1 = FUNC_3(VAR_0);
 unsigned long VAR_2;




 FUNC_1(VAR_0->irq, VAR_1);

 FUNC_9(VAR_1);
 FUNC_8(VAR_1);
 FUNC_0(&VAR_1->dma_delay_timer);

 FUNC_4(VAR_0, VAR_1->mmio);
 FUNC_5(VAR_0);
 FUNC_2(VAR_0);
 FUNC_6(&VAR_1->lock, VAR_2);
 VAR_1->pci_dev = ((void*)0);
 FUNC_7(&VAR_1->lock, VAR_2);





 FUNC_10(&VAR_1->v4l2_dev);
}
