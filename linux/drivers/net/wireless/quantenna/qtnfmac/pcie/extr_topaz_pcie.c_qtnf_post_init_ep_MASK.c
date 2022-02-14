
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct pci_dev* pdev; } ;
struct qtnf_pcie_topaz_state {TYPE_2__* bda; TYPE_1__ base; } ;
struct pci_dev {int irq; } ;
struct TYPE_4__ {int bda_bootstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qtnf_pcie_topaz_state*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (struct qtnf_pcie_topaz_state*) ;

__attribute__((used)) static int FUNC_4(struct qtnf_pcie_topaz_state *VAR_3)
{
 struct pci_dev *VAR_4 = VAR_3->base.pdev;

 FUNC_3(VAR_3);
 FUNC_0(VAR_3);

 if (FUNC_2(&VAR_3->bda->bda_bootstate, VAR_1,
       VAR_2))
  return -VAR_0;

 FUNC_1(VAR_4->irq);
 return 0;
}
