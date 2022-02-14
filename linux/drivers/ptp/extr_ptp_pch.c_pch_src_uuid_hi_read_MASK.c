
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct pch_dev {TYPE_1__* regs; } ;
struct TYPE_2__ {int src_uuid_hi; } ;


 int FUNC_0 (int *) ;
 struct pch_dev* FUNC_1 (struct pci_dev*) ;

u32 FUNC_2(struct pci_dev *VAR_0)
{
 struct pch_dev *VAR_1 = FUNC_1(VAR_0);
 u32 VAR_2;

 VAR_2 = FUNC_0(&VAR_1->regs->src_uuid_hi);

 return VAR_2;
}
