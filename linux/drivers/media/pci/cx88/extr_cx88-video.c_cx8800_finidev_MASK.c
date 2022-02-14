
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int irq; } ;
struct cx88_core {int * v4ldev; scalar_t__ ir; int * kthread; } ;
struct cx8800_dev {int pci; struct cx88_core* core; } ;


 int FUNC_0 (struct cx8800_dev*) ;
 int FUNC_1 (struct cx88_core*,int ) ;
 int FUNC_2 (struct cx88_core*) ;
 int FUNC_3 (struct cx88_core*) ;
 int FUNC_4 (int ,struct cx8800_dev*) ;
 int FUNC_5 (struct cx8800_dev*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct pci_dev*) ;
 struct cx8800_dev* FUNC_8 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_9(struct pci_dev *VAR_0)
{
 struct cx8800_dev *VAR_1 = FUNC_8(VAR_0);
 struct cx88_core *VAR_2 = VAR_1->core;


 if (VAR_2->kthread) {
  FUNC_6(VAR_2->kthread);
  VAR_2->kthread = ((void*)0);
 }

 if (VAR_2->ir)
  FUNC_2(VAR_2);

 FUNC_3(VAR_2);



 FUNC_4(VAR_0->irq, VAR_1);
 FUNC_0(VAR_1);
 FUNC_7(VAR_0);

 VAR_2->v4ldev = ((void*)0);


 FUNC_1(VAR_2, VAR_1->pci);
 FUNC_5(VAR_1);
}
