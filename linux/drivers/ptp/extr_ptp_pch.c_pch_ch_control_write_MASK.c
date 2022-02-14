
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct pch_dev {TYPE_1__* regs; } ;
struct TYPE_2__ {int ch_control; } ;


 int FUNC_0 (int ,int *) ;
 struct pch_dev* FUNC_1 (struct pci_dev*) ;

void FUNC_2(struct pci_dev *VAR_0, u32 VAR_1)
{
 struct pch_dev *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_1, (&VAR_2->regs->ch_control));
}
