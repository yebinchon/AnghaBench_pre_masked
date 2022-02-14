
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct aer_header_log_regs {int dw3; int dw2; int dw1; int dw0; } ;


 int FUNC_0 (struct pci_dev*,char*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_0,
          struct aer_header_log_regs *VAR_1)
{
 FUNC_0(VAR_0, "  TLP Header: %08x %08x %08x %08x\n",
  VAR_1->dw0, VAR_1->dw1, VAR_1->dw2, VAR_1->dw3);
}
