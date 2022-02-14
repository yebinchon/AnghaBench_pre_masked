
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct udc {int virt_addr; TYPE_1__* regs; int driver; } ;
struct pci_dev {int irq; } ;
struct TYPE_4__ {int gadget; } ;
struct TYPE_3__ {int cfg; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct udc*) ;
 int FUNC_3 (int ,struct udc*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct pci_dev*) ;
 struct udc* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,int ) ;
 int FUNC_8 (struct pci_dev*,int ) ;
 int FUNC_9 (int ,int ) ;
 TYPE_2__* VAR_1 ;
 int FUNC_10 (struct udc*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int *) ;

__attribute__((used)) static void FUNC_13(struct pci_dev *VAR_2)
{
 struct udc *VAR_3;

 VAR_3 = FUNC_6(VAR_2);

 FUNC_11(&VAR_1->gadget);

 if (FUNC_1(VAR_3->driver))
  return;


 FUNC_2(VAR_3);


 FUNC_12(FUNC_0(VAR_0), &VAR_3->regs->cfg);
 FUNC_3(VAR_2->irq, VAR_3);
 FUNC_4(VAR_3->virt_addr);
 FUNC_9(FUNC_8(VAR_2, 0),
      FUNC_7(VAR_2, 0));
 FUNC_5(VAR_2);

 FUNC_10(VAR_3);
}
