
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ramaddr; scalar_t__ ioaddr; int host; } ;
struct sym_hcb {TYPE_1__ s; } ;
struct pci_dev {int irq; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct pci_dev*,scalar_t__) ;
 int FUNC_2 (struct sym_hcb*) ;
 int FUNC_3 (struct sym_hcb*,int,char*) ;

__attribute__((used)) static void FUNC_4(struct sym_hcb *VAR_0, struct pci_dev *VAR_1,
  int VAR_2)
{



 if (VAR_2)
  FUNC_0(VAR_1->irq, VAR_0->s.host);
 if (VAR_0->s.ioaddr)
  FUNC_1(VAR_1, VAR_0->s.ioaddr);
 if (VAR_0->s.ramaddr)
  FUNC_1(VAR_1, VAR_0->s.ramaddr);



 FUNC_2(VAR_0);

 FUNC_3(VAR_0, sizeof(*VAR_0), "HCB");
}
