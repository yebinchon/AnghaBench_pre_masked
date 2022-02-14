
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spa {int reg_pe_handle; int reg_tfc; int reg_dar; int reg_dsisr; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (struct pci_dev*,int *,int *,int *,int *) ;

__attribute__((used)) static int FUNC_1(struct pci_dev *VAR_0, struct spa *VAR_1)
{
 return FUNC_0(VAR_0, &VAR_1->reg_dsisr, &VAR_1->reg_dar,
    &VAR_1->reg_tfc, &VAR_1->reg_pe_handle);
}
